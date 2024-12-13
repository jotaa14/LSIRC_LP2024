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
    if(management->order_counter==0){
        return;
    }
    int id = GetOrderPosition(*management, GetInt(MIN_SIZE, ORDERS_SIZE, MSG_GET_ORDER));

    if (id == -1) {
        puts(ERROR_ORDER_NOT_EXIST);
        return;
    }
    
    if (management->order[id]->statusorder == 2 || management->order[id]->statusorder == 3) {
        free(management->order[id]);

        for (int i = id; i < management->order_counter - 1; i++) {
            management->order[i] = management->order[i + 1];
            management->order[i]->orderid = i + 1;
        }

        management->order[management->order_counter - 1] = NULL;

        management->order_counter--;

        puts(ORDER_DELETED);

    } else {
        puts(ERROR_DELETE_STATUS);
    }
}
