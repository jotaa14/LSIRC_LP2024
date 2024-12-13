/**
 * @file utilCustomer.c
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains utility functions specific to customer management.
 */


#include "functions.h"

int GetCustomerPosition(Management management, int num) {
    int i;
    for (i = 0; i < management.customer_counter; i++) {
        if (management.customer[i]->id == num) {
            return i;
        }
    }
    return -1;
}

int ChooseCustomer(Management *management){
    ListCustomers(management);
    int customer_choice = GetInt(MIN_CUSTOMERS_SIZE, CUSTOMERS_SIZE, CUSTOMER_ID);
    if(customer_choice < 0 || customer_choice > management->customer_counter){
        puts(ERROR_CUSTOMER_EMPTY);
        return -1;
    }
    return customer_choice-1;
}
