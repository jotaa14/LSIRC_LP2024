/**
 * @file outputOrder.c
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains functions for outputting order information.
 */


#include "functions.h"

char* PrintOrderPriority(Priority priority) {
    switch (priority) {
        case PRIORITY_LOW: return "Low";
        case PRIORITY_MEDIUM: return "Medium";
        case PRIORITY_HIGH: return "High";
    }
}

char* PrintOrderStatus(StatusOrder statusorder) {
    switch (statusorder) {
        case STATUS_OPEN: return "Open";
        case STATUS_PRODUCTION: return "Production";
        case STATUS_CLOSED: return "Closed";
        case STATUS_CANCELED: return"Canceled";
    }
}

void PrintOrders(Order *order) {
    puts(ORDER_PRINTED_HEADER);
    printf(ORDER_ID, order->orderid);
    printf(ORDER_DATE, order->registration_day, order->registration_month, order->registration_year);
    printf(ORDER_PRIORITY, PrintOrderPriority(order->priority));
    printf(ORDER_STATUS, PrintOrderStatus(order->statusorder));
    printf(ORDER_FULFILLMENT, order->fulfillment);
    printf(ORDER_TOTAL_TIME, order->total_hours, order->total_minutes , order->total_seconds);
    printf(ORDER_CUSTOMER, order->customer->id);
    printf(ORDER_CUSTOMER_PHONE_NUMBER, order->customer->phone_number);
    printf(ORDER_PVP, order->order_pvp);
    puts(MENU_BOTTOM);
}

void ListOrders(Management *management) {
    if (management->order_counter > 0) {
        int found = 0;
        for (int id = 0; id < management->order_counter; id++) {
            PrintOrders(management->order[id]);
            found = 1;
        }
        if (!found) {
            puts(ERROR_ORDER_NOT_EXIST);
            return;
        }
    } else {
        puts(ERROR_ORDER_NOT_EXIST);
        return;
    }
}

void PrintOrderProducts(Order *order) {
    bool has_products = false;

    for (int i = 0; i < order->product_counter; i++) {
        if (order->product[i] != NULL) {
            has_products = true;
            printf(ORDER_PRODUCT, order->product[i]->name);
            printf(ORDER_PRODUCT_QUANTITY, order->product_quantity[i]);
            printf(MENU_BOTTOM);
        }
    }

    if (!has_products) {
        puts(ERROR_PRODUCT_NO_ADDED);
    }
}

void DisplayOrderDetails(Management *management) {
    if (management->order_counter <= 0) {
        puts(ERROR_NO_ORDERS);
        return;
    }

    int order_id = ChooseOrder(management);

    if (order_id < 0 || order_id >= management->order_counter) {
        puts(ERROR_ORDER_NOT_EXIST);
        return;
    }

    Order *selected_order = management->order[order_id];
    PrintOrders(selected_order);
    PrintOrderProducts(selected_order);
}

void ListOrdersByPriority(Management *management) {
    if (management->order_counter <= 0) {
        puts(ERROR_ORDER_NOT_EXIST);
        return;
    }

    Order * sorted_orders[management->order_counter];
    for (int i = 0; i < management->order_counter; i++) {
        sorted_orders[i] = management->order[i];
    }

    for (int i = 0; i < management->order_counter - 1; i++) {
        for (int j = 0; j < management->order_counter - i - 1; j++) {
            if (sorted_orders[j]->priority < sorted_orders[j + 1]->priority) {
                Order *temp = sorted_orders[j];
                sorted_orders[j] = sorted_orders[j + 1];
                sorted_orders[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < management->order_counter; i++) {
        PrintOrders(sorted_orders[i]);
    }
}

void ListOrdersByStatus(Management *management) {
    if (management->order_counter <= 0) {
        puts(ERROR_ORDER_NOT_EXIST);
        return;
    }

    Order * sorted_orders[management->order_counter];
    for (int i = 0; i < management->order_counter; i++) {
        sorted_orders[i] = management->order[i];
    }

    for (int i = 0; i < management->order_counter - 1; i++) {
        for (int j = 0; j < management->order_counter - i - 1; j++) {
            if (sorted_orders[j]->statusorder > sorted_orders[j + 1]->statusorder) {
                Order *temp = sorted_orders[j];
                sorted_orders[j] = sorted_orders[j + 1];
                sorted_orders[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < management->order_counter; i++) {
        PrintOrders(sorted_orders[i]);
    }
}

void ListOrdersByPrice(Management *management) {
    if (management->order_counter <= 0) {
        puts(ERROR_ORDER_NOT_EXIST);
        return;
    }

    Order * sorted_orders[management->order_counter];
    for (int i = 0; i < management->order_counter; i++) {
        sorted_orders[i] = management->order[i];
    }

    for (int i = 0; i < management->order_counter - 1; i++) {
        for (int j = 0; j < management->order_counter - i - 1; j++) {
            if (sorted_orders[j]->order_pvp < sorted_orders[j + 1]->order_pvp) {
                Order *temp = sorted_orders[j];
                sorted_orders[j] = sorted_orders[j + 1];
                sorted_orders[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < management->order_counter; i++) {
        PrintOrders(sorted_orders[i]);
    }
}

void OrderListFulfillment(Management *management) {
    int menu;
    do {
        OrderListFulfillmentMenu();
        scanf("%d", &menu);
        ClearInputBuffer();
        switch (menu) {
            case 1:
            {
                Order * sorted_orders[management->order_counter];
                for (int i = 0; i < management->order_counter; i++) {
                    sorted_orders[i] = management->order[i];
                }

                for (int i = 0; i < management->order_counter - 1; i++) {
                    for (int j = 0; j < management->order_counter - i - 1; j++) {
                        if (sorted_orders[j]->fulfillment < sorted_orders[j + 1]->fulfillment) {
                            Order *temp = sorted_orders[j];
                            sorted_orders[j] = sorted_orders[j + 1];
                            sorted_orders[j + 1] = temp;
                        }
                    }
                }

                for (int i = 0; i < management->order_counter; i++) {
                    PrintOrders(sorted_orders[i]);
                }
                break;
            }
            case 2:
            {
                Order * sorted_orders[management->order_counter];
                for (int i = 0; i < management->order_counter; i++) {
                    sorted_orders[i] = management->order[i];
                }

                for (int i = 0; i < management->order_counter - 1; i++) {
                    for (int j = 0; j < management->order_counter - i - 1; j++) {
                        if (sorted_orders[j]->fulfillment > sorted_orders[j + 1]->fulfillment) {
                            Order *temp = sorted_orders[j];
                            sorted_orders[j] = sorted_orders[j + 1];
                            sorted_orders[j + 1] = temp;
                        }
                    }
                }

                for (int i = 0; i < management->order_counter; i++) {
                    PrintOrders(sorted_orders[i]);
                }
                break;
            }
            case 0:
                break;
            default:
                puts(ERROR_MENU);
        }
    } while (menu != 0);

}