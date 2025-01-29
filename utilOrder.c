/**
 * @file utilOrder.c
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains utility functions specific to order management.
 */


#include "functions.h"

int GetOrderPosition(Management management, int number) {
    int i;
    for (i = 0; i < ACCESS_TO_ORDER_COUNTER_UTIL; i++) {
        if (ACCESS_TO_ORDER_ID_BY_I_UTIL == number) {
            return i;
        }
    }
    return -1;
}

int ChooseOrder(Management *management) {
    ListOrders(management);
    int order_choice = GetInt(MIN_SIZE, ORDERS_SIZE, MSG_GET_ORDER);
    if (order_choice < 0 || order_choice > ACCESS_TO_ORDER_COUNTER) {
        puts(ERROR_NO_ORDERS);
        return -1;
    }
    return order_choice - 1;
}

void AssociateStatusToFulfillment(Management *management, int id) {
    int statusorder;
    if (ACCESS_ORDER[id]->fulfillment == 0) {
        statusorder = 0;
        ACCESS_ORDER[id]->statusorder = (StatusOrder) statusorder;
    } else if (ACCESS_ORDER[id]->fulfillment > 0 && ACCESS_ORDER[id]->fulfillment < 100) {
        statusorder = 1;
        ACCESS_ORDER[id]->statusorder = (StatusOrder) statusorder;
    } else if (ACCESS_ORDER[id]->fulfillment == 100) {
        statusorder = 2;
        ACCESS_ORDER[id]->statusorder = (StatusOrder) statusorder;
    }
}
