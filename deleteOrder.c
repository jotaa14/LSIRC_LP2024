/**
 * @file deleteOrder.c
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains functions for deleting orders.
 */


#include "functions.h"

void DeleteOrder(Management *management) {
    ListOrders(management);
    if(ACCESS_TO_ORDER_COUNTER==0){
        return;
    }
    int id = GetOrderPosition(*management, GetInt(MIN_SIZE, ORDERS_SIZE, MSG_GET_ORDER));

    if (id == -1) {
        puts(ERROR_ORDER_NOT_EXIST);
        return;
    }
    
    if (ACCESS_ORDER[id]->statusorder == 2 || ACCESS_ORDER[id]->statusorder == 3) {
        free(ACCESS_ORDER[id]);

        for (int i = id; i < ACCESS_TO_ORDER_COUNTER - 1; i++) {
            ACCESS_ORDER[i] = ACCESS_ORDER[i + 1];
            ACCESS_ORDER[i]->orderid = i + 1;
        }

        ACCESS_ORDER[ACCESS_TO_ORDER_COUNTER - 1] = NULL;

        ACCESS_TO_ORDER_COUNTER--;

        puts(ORDER_DELETED);

    } else {
        puts(ERROR_DELETE_STATUS);
    }
}
