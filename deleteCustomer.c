/**
 * @file deleteCustomer.c
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains functions for deleting customers.
 */


#include "functions.h"

void DeleteCustomer(Management *management) {
    ListAllCustomers(management);
    if (ACCESS_TO_CUSTOMER_COUNTER == 0) {
        return;
    }
    int id = GetCustomerPosition(*management, GetInt(MIN_CUSTOMERS_SIZE, CUSTOMERS_SIZE, CUSTOMER_ID));

    if (id == -1) {
        puts(ERROR_CATEGORY_EMPTY);
        return;
    }
    if (strcmp(ACCESS_TO_CUSTOMER_STATUS_BY_ID, "Inactive") == 0) {

        free(ACCESS_TO_CUSTOMER_BY_ID);

        for (int i = id; i < ACCESS_TO_CUSTOMER_COUNTER - 1; i++) {
            (ACCESS_TO_CUSTOMER_BY_I) = (ACCESS_TO_CUSTOMER_BY_I_PLUS);
            (ACCESS_TO_CUSTOMER_ID_BY_I) = i + 1;
        }

        (ACCESS_TO_CUSTOMER_COUNTER_LESS) == NULL;

        ACCESS_TO_CUSTOMER_COUNTER--;

        puts(CUSTOMER_DELETED);
    } else {
        puts(ERROR_CUSTOMER_DELETE_STATUS);
    }
}