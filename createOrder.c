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

void CreateOrder(Management *management) {
    if (ACCESS_TO_ORDER_COUNTER >= ORDERS_SIZE) {
        puts(ERROR_ORDERS_REACHED);
        return;
    }

    ACCESS_TO_ORDER_BY_COUNTER = malloc(sizeof (Order)*100);
    if (ACCESS_TO_ORDER_BY_COUNTER == NULL) {
        puts(ERROR_MEMORY_ALLOCATION);
        return;
    }

    ACCESS_TO_ORDER_PRODUCT_COUNTER = 0;
    ACCESS_TO_ORDER_ORDER_PVP = 0;
    ACCESS_TO_ORDER_TOTAL_HOURS = 0;
    ACCESS_TO_ORDER_TOTAL_MINUTES = 0;
    ACCESS_TO_ORDER_TOTAL_SECONDS = 0;
    ACCESS_TO_ORDER_FULFILLMENT = 0;
    ACCESS_TO_ORDER_ORDERID=0;
    ACCESS_TO_ORDER_REGISTRATION_DAY=0;
    ACCESS_TO_ORDER_REGISTRATION_MONTH=0;
    ACCESS_TO_ORDER_REGISTRATION_YEAR=0;
    ACCESS_TO_ORDER_ORDERID = ACCESS_TO_ORDER_COUNTER + 1;

    time_t now = time(NULL);
    struct tm *local_time = localtime(&now);

    ACCESS_TO_ORDER_REGISTRATION_DAY = local_time->tm_mday;
    ACCESS_TO_ORDER_REGISTRATION_MONTH = local_time->tm_mon + 1;
    ACCESS_TO_ORDER_REGISTRATION_YEAR = local_time->tm_year + 1900;

    puts(CREATE_ORDER_PRIORITY);
    int priority = OrderPriorityMenu();
    ACCESS_TO_ORDER_PRIORITY = (Priority) priority;

    AssociateStatusToFulfillment(management, ACCESS_TO_ORDER_COUNTER);
    AssociateCustomerWithOrder(management);
    AssociateProductWithOrder(management);

    puts(ORDER_LIST_STUFF_OBSERVATION);
    fgets(ACCESS_TO_ORDER_OBSERVATION, OBSERVATION_SIZE, stdin);

    size_t len = strlen(ACCESS_TO_ORDER_OBSERVATION);
    if (len > 0 && ACCESS_TO_ORDER_OBSERVATION[len - 1] == '\n') {
        ACCESS_TO_ORDER_OBSERVATION[len - 1] = '\0';
    }

    ACCESS_TO_ORDER_COUNTER++;

    UpdateOrderTotalTime(management, ACCESS_TO_ORDER_COUNTER - 1);


    puts(ORDER_CREATED);
}

void AssociateCustomerWithOrder(Management *management) {
    int customer_id;
    if (ACCESS_TO_CUSTOMER_COUNTER <= 0) {
        puts(ERROR_CUSTOMER_EMPTY);
        CreateCustomers(management);
    }
    do {
        customer_id = ChooseCustomer(management);
    } while (customer_id == -1);

    ACCESS_TO_ORDER_CUSTOMER = ACCESS_TO_CUSTOMER_BY_CUSTOMER_ID;
    ACCESS_TO_CUSTOMER_USED_BY_ORDER_BY_CUSTOMER_ID++;
}

void AssociateProductWithOrder(Management *management) {
    if (ACCESS_TO_PRODUCT_COUNTER <= 0) {
        puts(ERROR_NO_PRODUCTS);
        return;
    }

    Order *current_order = ACCESS_TO_ORDER_BY_COUNTER;
    int next_product_index = 0;

    for (int i = 0; i < PRODUCTS_SIZE; i++) {
        if (ACCESS_TO_CURRENT_ORDER_PRODUCT_I == NULL) {
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
                if (current_order->product[i] == ACCESS_TO_PRODUCT_BY_PRODUCT_ID) {
                    already_associated = true;
                    break;
                }
            }

            if (already_associated) {
                puts(ERROR_PRODUCT_ALREADY_ASSOCIATED);
                continue;
            }

            int quantity;
            printf(GET_PRODUCT_QUANTITY, ACCESS_TO_PRODUCT_NAME_BY_PRODUCT_ID);
            scanf("%d", &quantity);
            ClearInputBuffer();

            if (quantity <= 0) {
                puts(ERROR_INVALID_QUANTITY);
                continue;
            }

            if (ACCESS_TO_PRODUCT_USED_BY_ORDER_PRODUCT_ID < 0) {
                ACCESS_TO_PRODUCT_USED_BY_ORDER_PRODUCT_ID = 0;
            }

            ACCESS_TO_CURRENT_ORDER_PRODUCT_QUANTITY_NEXT_PRODUCT_INDEX = 0;
            ACCESS_TO_CURRENT_ORDER_PRODUCT_NEXT_PRODUCT_INDEX = ACCESS_TO_PRODUCT_BY_PRODUCT_ID;
            ACCESS_TO_CURRENT_ORDER_PRODUCT_QUANTITY_NEXT_PRODUCT_INDEX = quantity;
            ACCESS_TO_PRODUCT_TOTAL_SELLED_BY_PRODUCT_ID = ACCESS_TO_PRODUCT_TOTAL_SELLED_BY_PRODUCT_ID + quantity;
            ACCESS_TO_PRODUCT_USED_BY_ORDER_PRODUCT_ID++;
            ACCESS_TO_CURRENT_ORDER_PVP = ACCESS_TO_CURRENT_ORDER_PVP + (ACCESS_TO_PRODUCT_PVP_BY_PRODUCT_ID * quantity);
            ACCESS_TO_ORDER_PRODUCT_COUNTER++;
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

    Order *order = ACCESS_ORDER[order_id];

    ACCESS_ORDER_TOTAL_HOURS = 0;
    ACCESS_ORDER_TOTAL_MINUTES = 0;
    ACCESS_ORDER_TOTAL_SECONDS = 0;

    for (int i = 0; i < ACCESS_TO_ORDER_COUNTER; i++) {

        if (ACCESS_ORDER_PRODUCT[i] != NULL) {
            int quantity = ACCESS_ORDER_PRODUCT_QUANTITY[i];
            Product *product = ACCESS_ORDER_PRODUCT[i];


            if (quantity < 0) {
                printf(ERROR_INVALID_QUANTITY_UPDATE_ORDER_TOTAL_TIME, i);
                continue;
            }


            ACCESS_ORDER_TOTAL_HOURS += ACCESS_PRODUCT_TOTAL_HOURS * quantity;
            ACCESS_ORDER_TOTAL_MINUTES += ACCESS_PRODUCT_TOTAL_MINUTES * quantity;
            ACCESS_ORDER_TOTAL_SECONDS += ACCESS_PRODUCT_TOTAL_SECONDS * quantity;
        }
    }


    if (ACCESS_ORDER_TOTAL_SECONDS >= 60) {
        ACCESS_ORDER_TOTAL_MINUTES += ACCESS_ORDER_TOTAL_SECONDS / 60;
        ACCESS_ORDER_TOTAL_SECONDS %= 60;
    }


    if (ACCESS_ORDER_TOTAL_MINUTES >= 60) {
        ACCESS_ORDER_TOTAL_HOURS += ACCESS_ORDER_TOTAL_MINUTES / 60;
        ACCESS_ORDER_TOTAL_MINUTES %= 60;
    }

}

void SynchronizeOrdersAfterProductUpdate(Management *management, int product_id) {
    if (product_id < 0 || product_id >= PRODUCTS_SIZE || ACCESS_TO_PRODUCT_BY_PRODUCT_ID == NULL) {
        puts(ERROR_PRODUCT_NOT_EXIST);
        return;
    }

    for (int i = 0; i < ACCESS_TO_ORDER_COUNTER; i++) {
        Order *order = ACCESS_ORDER[i];


        for (int j = 0; j < ACCESS_ORDER_PRODUCT_COUNTER; j++) {
            if (ACCESS_ORDER_PRODUCT[j] == ACCESS_TO_PRODUCT_BY_PRODUCT_ID) {
                UpdateOrderTotalTime(management, i);
                break;
            }
        }
    }
}
