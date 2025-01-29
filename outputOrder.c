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
    printf(ORDER_ID, ACCESS_ORDER_ORDERID);
    printf(ORDER_DATE, ACCESS_ORDER_REGISTRATION_DAY, ACCESS_ORDER_REGISTRATION_MONTH, ACCESS_ORDER_REGISTRATION_YEAR);
    printf(ORDER_PRIORITY, PrintOrderPriority(ACCESS_ORDER_PRIORITY));
    printf(ORDER_STATUS, PrintOrderStatus(ACCESS_ORDER_STATUSORDER));
    printf(ORDER_FULFILLMENT, ACCESS_ORDER_FULFILLMENT);
    printf(ORDER_TOTAL_TIME, ACCESS_ORDER_TOTAL_HOURS, ACCESS_ORDER_TOTAL_MINUTES, ACCESS_ORDER_TOTAL_SECONDS);
    printf(ORDER_CUSTOMER, ACCESS_ORDER_CUSTOMER_ID);
    printf(ORDER_CUSTOMER_PHONE_NUMBER, ACCESS_ORDER_CUSTOMER_PHONE_NUMBER);
    printf(ORDER_PVP, ACCESS_ORDER_ORDER_PVP);
    puts(MENU_BOTTOM);
    printf(ORDER_OBSERVATION, ACCESS_ORDER_OBSERVATION);
    puts(MENU_BOTTOM); 
}

void ListOrders(Management *management) {
    if (ACCESS_TO_ORDER_COUNTER > 0) {
        int found = 0;
        for (int id = 0; id < ACCESS_TO_ORDER_COUNTER; id++) {
            PrintOrders(ACCESS_ORDER[id]);
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

    for (int i = 0; i < ACCESS_ORDER_PRODUCT_COUNTER; i++) {
        if (ACCESS_ORDER_PRODUCT[i] != NULL) {
            has_products = true;
            printf(ORDER_PRODUCT, order->product[i]->name);
            printf(ORDER_PRODUCT_QUANTITY, ACCESS_ORDER_PRODUCT_QUANTITY[i]);
            printf(MENU_BOTTOM);
        }
    }

    if (!has_products) {
        puts(ERROR_PRODUCT_NO_ADDED);
    }
}

void DisplayOrderDetails(Management *management) {
    if (ACCESS_TO_ORDER_COUNTER <= 0) {
        puts(ERROR_NO_ORDERS);
        return;
    }

    int order_id = ChooseOrder(management);

    if (order_id < 0 || order_id >= ACCESS_TO_ORDER_COUNTER) {
        puts(ERROR_ORDER_NOT_EXIST);
        return;
    }

    Order *selected_order = ACCESS_ORDER[order_id];
    PrintOrders(selected_order);
    PrintOrderProducts(selected_order);
}

void ListOrdersByPriority(Management *management) {
    if (ACCESS_TO_ORDER_COUNTER <= 0) {
        puts(ERROR_ORDER_NOT_EXIST);
        return;
    }

    Order * sorted_orders[ACCESS_TO_ORDER_COUNTER];
    for (int i = 0; i < ACCESS_TO_ORDER_COUNTER; i++) {
        sorted_orders[i] = ACCESS_ORDER[i];
    }

    for (int i = 0; i < ACCESS_TO_ORDER_COUNTER - 1; i++) {
        for (int j = 0; j < ACCESS_TO_ORDER_COUNTER - i - 1; j++) {
            if (sorted_orders[j]->priority < sorted_orders[j + 1]->priority) {
                Order *temp = sorted_orders[j];
                sorted_orders[j] = sorted_orders[j + 1];
                sorted_orders[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < ACCESS_TO_ORDER_COUNTER; i++) {
        PrintOrders(sorted_orders[i]);
    }
}

void ListOrdersByStatus(Management *management) {
    if (ACCESS_TO_ORDER_COUNTER <= 0) {
        puts(ERROR_ORDER_NOT_EXIST);
        return;
    }

    Order * sorted_orders[ACCESS_TO_ORDER_COUNTER];
    for (int i = 0; i < ACCESS_TO_ORDER_COUNTER; i++) {
        sorted_orders[i] = ACCESS_ORDER[i];
    }

    for (int i = 0; i < ACCESS_TO_ORDER_COUNTER - 1; i++) {
        for (int j = 0; j < ACCESS_TO_ORDER_COUNTER - i - 1; j++) {
            if (sorted_orders[j]->statusorder > sorted_orders[j + 1]->statusorder) {
                Order *temp = sorted_orders[j];
                sorted_orders[j] = sorted_orders[j + 1];
                sorted_orders[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < ACCESS_TO_ORDER_COUNTER; i++) {
        PrintOrders(sorted_orders[i]);
    }
}

void ListOrdersByPrice(Management *management) {
    if (ACCESS_TO_ORDER_COUNTER <= 0) {
        puts(ERROR_ORDER_NOT_EXIST);
        return;
    }

    Order * sorted_orders[ACCESS_TO_ORDER_COUNTER];
    for (int i = 0; i < ACCESS_TO_ORDER_COUNTER; i++) {
        sorted_orders[i] = ACCESS_ORDER[i];
    }

    for (int i = 0; i < ACCESS_TO_ORDER_COUNTER - 1; i++) {
        for (int j = 0; j < ACCESS_TO_ORDER_COUNTER - i - 1; j++) {
            if (sorted_orders[j]->order_pvp < sorted_orders[j + 1]->order_pvp) {
                Order *temp = sorted_orders[j];
                sorted_orders[j] = sorted_orders[j + 1];
                sorted_orders[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < ACCESS_TO_ORDER_COUNTER; i++) {
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
                Order * sorted_orders[ACCESS_TO_ORDER_COUNTER];
                for (int i = 0; i < ACCESS_TO_ORDER_COUNTER; i++) {
                    sorted_orders[i] = ACCESS_ORDER[i];
                }

                for (int i = 0; i < ACCESS_TO_ORDER_COUNTER - 1; i++) {
                    for (int j = 0; j < ACCESS_TO_ORDER_COUNTER - i - 1; j++) {
                        if (sorted_orders[j]->fulfillment < sorted_orders[j + 1]->fulfillment) {
                            Order *temp = sorted_orders[j];
                            sorted_orders[j] = sorted_orders[j + 1];
                            sorted_orders[j + 1] = temp;
                        }
                    }
                }

                for (int i = 0; i < ACCESS_TO_ORDER_COUNTER; i++) {
                    PrintOrders(sorted_orders[i]);
                }
                break;
            }
            case 2:
            {
                Order * sorted_orders[ACCESS_TO_ORDER_COUNTER];
                for (int i = 0; i < ACCESS_TO_ORDER_COUNTER; i++) {
                    sorted_orders[i] = ACCESS_ORDER[i];
                }

                for (int i = 0; i < ACCESS_TO_ORDER_COUNTER - 1; i++) {
                    for (int j = 0; j < ACCESS_TO_ORDER_COUNTER - i - 1; j++) {
                        if (sorted_orders[j]->fulfillment > sorted_orders[j + 1]->fulfillment) {
                            Order *temp = sorted_orders[j];
                            sorted_orders[j] = sorted_orders[j + 1];
                            sorted_orders[j + 1] = temp;
                        }
                    }
                }

                for (int i = 0; i < ACCESS_TO_ORDER_COUNTER; i++) {
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