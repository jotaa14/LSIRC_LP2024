/**
 * @file editOrder.c
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains functions for editing the details of orders.
 */


#include "functions.h"

void EditOrder(Management *management) {
    int menu;
    ListOrders(management);
    if (management->order_counter == 0) {
        return;
    }
    int id = GetOrderPosition(*management, GetInt(MIN_SIZE, ORDERS_SIZE, MSG_GET_ORDER));

    if (id == -1) {
        puts(ERROR_ORDER_NOT_EXIST);
        return;
    }

    do {
        OrderEditMenuOutput();
        scanf("%d", &menu);
        ClearInputBuffer();
        switch (menu) {
            case 1:
                puts(EDIT_ORDER_GET_PRIORITY);
                int priority = OrderPriorityMenu();
                management->order[id]->priority = (Priority) priority;
                puts(SUCEES_EDIT_ORDER_PRIORITY);
                break;
            case 2:
                if (management->order[id]->statusorder != 3) {
                    management->order[id]->fulfillment = GetInt(MIN_FULFILLMENT_VALUE, MAX_FULFILLMENT_VALUE, GET_ORDER_FULFILLMENT_VALUE);
                    AssociateStatusToFulfillment(management, id);
                    ReduceProductUsedByOrder (management->order[id]);
                    puts(SUCEES_EDIT_ORDER_FULFILLMENT);
                } else {
                    puts(ERROR_ORDER_ALREADY_CANCELED);
                }
                break;
            case 3:
                if (management->order[id]->fulfillment == 0) {
                    int statusorder = 3;
                    management->order[id]->statusorder = (StatusOrder) statusorder;
                    ReduceProductUsedByOrder (management->order[id]);
                    UpdateTotalPurchasedProducts(management, id);
                    puts(SUCEES_EDIT_ORDER_CANCELED);
                } else {
                    puts(ERROR_STATUS_CANCELED_CANNOT_BE_SELECTED);
                }
                break;
            case 0:
                break;
            default:
                puts(ERROR_MENU);
                break;
        }
    } while (menu != 0);

}

void ReduceProductUsedByOrder(Order *order) {
    for (int i = 0; i < order->product_counter; i++) {
        if (order->product[i] != NULL) {
            if (order->product[i]->used_by_order > 0) {
                order->product[i]->used_by_order--;
            }
        }
    }
}