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
    for (i = 0; i < ACCESS_TO_CUSTOMER_COUNTER_UTIL; i++) {
        if ((ACCESS_TO_CUSTOMER_ID_BY_I_UTIL) == num) {
            return i;
        }
    }
    return -1;
}

int ChooseCustomer(Management *management){
    ListCustomers(management);
    int customer_choice = GetInt(MIN_CUSTOMERS_SIZE, CUSTOMERS_SIZE, CUSTOMER_ID);
    if(customer_choice < 0 || customer_choice > ACCESS_TO_CUSTOMER_COUNTER){
        puts(ERROR_CUSTOMER_EMPTY);
        return -1;
    }
    return customer_choice-1;
}

