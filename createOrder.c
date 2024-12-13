/**
 * @file createOrder.c
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains functions for creating new orders.
 */


#include "functions.h"
#include "structs.h"

void CreateOrder(Management *management) {
    if (management->order_counter >= ORDERS_SIZE) {
        puts(ERROR_ORDERS_REACHED);
        return;
    }

    management->order[management->order_counter] = malloc(sizeof(Order));
    if (management->order[management->order_counter] == NULL) {
        puts(ERROR_MEMORY_ALLOCATION);
        return;
    }

    management->order[management->order_counter]->orderid = management->order_counter + 1;
    management->order[management->order_counter]->product_counter = 0;
    management->order[management->order_counter]->order_pvp = 0;
    management->order[management->order_counter]->total_hours = 0;
    management->order[management->order_counter]->total_minutes = 0;
    management->order[management->order_counter]->total_seconds = 0;
    
    time_t now = time(NULL);
    struct tm *local_time = localtime(&now);

    management->order[management->order_counter]->registration_day = local_time->tm_mday;
    management->order[management->order_counter]->registration_month = local_time->tm_mon + 1;
    management->order[management->order_counter]->registration_year = local_time->tm_year + 1900;

    puts(CREATE_ORDER_PRIORITY);
    int priority = OrderPriorityMenu();
    management->order[management->order_counter]->priority = (Priority) priority;

    management->order[management->order_counter]->fulfillment = 0;

    AssociateStatusToFulfillment(management, management->order_counter);
    AssociateCustomerWithOrder(management);
    AssociateProductWithOrder(management);
    management->order_counter++;

    UpdateOrderTotalTime(management, management->order_counter-1);


    puts(ORDER_CREATED);
}


void AssociateCustomerWithOrder(Management *management) {
    int customer_id;
    if (management->customer_counter <= 0) {
        puts(ERROR_CUSTOMER_EMPTY);
        CreateCustomers(management);
    }

    do {
        customer_id = ChooseCustomer(management);
    } while (customer_id == -1);

    management->order[management->order_counter]->customer = management->customer[customer_id];
    management->customer[customer_id]->used_by_order++;
}

void AssociateProductWithOrder(Management *management) {
    if (management->product_counter <= 0) {
        puts(ERROR_NO_PRODUCTS);
        return;
    }



    Order *current_order = management->order[management->order_counter];
    int next_product_index = 0;
    
    for (int i = 0; i < PRODUCTS_SIZE; i++) {
        if (current_order->product[i] == NULL) {
            next_product_index = i;
            break;
        }
    }

    int option;

    while (1) {
        AssociateProductWithOrderOutput();
        scanf("%d", &option);
        ClearInputBuffer();

        if (option == 0) {
            break;
        } else if (option == 1) {
            if (next_product_index >= PRODUCTS_SIZE) {
                puts(ERROR_MAX_PRODUCTS);
                break;
            }

            int product_id = ChooseProduct(management);
            if (product_id == -1) {
                continue;
            }



            bool already_associated = false;
            for (int i = 0; i < PRODUCTS_SIZE; i++) {
                if (current_order->product[i] == management->product[product_id]) {
                    already_associated = true;
                    break;
                }
            }

            if (already_associated) {
                puts(ERROR_PRODUCT_ALREADY_ASSOCIATED);
                continue;
            }

            int quantity;
            printf(GET_PRODUCT_QUANTITY, management->product[product_id]->name);
            scanf("%d", &quantity);
            ClearInputBuffer();

            if (quantity <= 0) {
                puts(ERROR_INVALID_QUANTITY);
                continue;
            }

            if (management->product[product_id]->used_by_order < 0) {
                management->product[product_id]->used_by_order = 0;
            }

            current_order->product_quantity[next_product_index] = 0;
            current_order->product[next_product_index] = management->product[product_id];
            current_order->product_quantity[next_product_index] = quantity;
            management->product[product_id]->total_selled = management->product[product_id]->total_selled + quantity;
            management->product[product_id]->used_by_order++;
            current_order->order_pvp = current_order->order_pvp + (management->product[product_id]->pvp * quantity);
            management->order[management->order_counter]->product_counter++;
            next_product_index++;
        } else {
            puts(ERROR_MENU);
        }
    }

    if (next_product_index == 0) {
        puts(ERROR_PRODUCT_NO_ADDED);
    } else {
        puts(SECCESS_ADD_PRODUCTS);
    }
}

void UpdateOrderTotalTime(Management *management, int order_id) {
    if (order_id < 0) {
        puts(ERROR_ORDER_NOT_EXIST);
        return;
    }

    Order *order = management->order[order_id];

    order->total_hours = 0;
    order->total_minutes = 0;
    order->total_seconds = 0;

    for (int i = 0; i < order->product_counter; i++) {

        if (order->product[i] != NULL) {
            int quantity = order->product_quantity[i];
            Product *product = order->product[i];


            if (quantity < 0) {
                printf(ERROR_INVALID_QUANTITY_UPDATE_ORDER_TOTAL_TIME, i);
                continue;  
            }


            order->total_hours += product->total_hours * quantity;
            order->total_minutes += product->total_minutes * quantity;
            order->total_seconds += product->total_seconds * quantity;
        }
    }


    if (order->total_seconds >= 60) {
        order->total_minutes += order->total_seconds / 60;
        order->total_seconds %= 60;  
    }

    // Normaliza os minutos para horas
    if (order->total_minutes >= 60) {
        order->total_hours += order->total_minutes / 60;
        order->total_minutes %= 60;  
    }

}

void SynchronizeOrdersAfterProductUpdate(Management *management, int product_id) {
    if (product_id < 0 || product_id >= PRODUCTS_SIZE || management->product[product_id] == NULL) {
        puts(ERROR_PRODUCT_NOT_EXIST);
        return;
    }

    for (int i = 0; i < management->order_counter; i++) {
        Order *order = management->order[i];


        for (int j = 0; j < order->product_counter; j++) {
            if (order->product[j] == management->product[product_id]) {

                UpdateOrderTotalTime(management, i);
                break;
            }
        }
    }
}
