/**
 * @file outputCustomer.c
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains functions for outputting customer information.
 */


#include "functions.h"

void PrintCustomers(Customer *customer) {
    printf(MENU_BOTTOM);
    printf(GET_CUSTOMER_ID, customer->id);
    printf(GET_CUSTOMER_NAME, customer->name);
    printf(GET_CUSTOMER_PHONE_NUMBER, customer->phone_number);
    printf(GET_CUSTOMER_EMAIL, customer->email);
    printf(GET_CUSTOMER_NIF, customer->nif);
    printf(GET_CUSTOMER_DATE, customer->registration_day, customer->registration_month, customer->registration_year);
    printf(GET_CUSTOMER_STATUS, customer->status);
    puts(MENU_BOTTOM);
}

void ListCustomers(Management *management) {
    if (management->customer_counter > 0) {
        int found = 0;
        for (int id = 0; id < management->customer_counter; id++) {
            if(management->customer[id]->status_num==0){
                PrintCustomers(management->customer[id]);
                found = 1;
            }  
        }

        if (!found) {
            puts(ERROR_CUSTOMER_EMPTY);
            return;
        }
    } else {
        puts(ERROR_CUSTOMER_EMPTY);
        return;
    }
}

void ListAllCustomers(Management *management) {
    if (management->customer_counter > 0) {
        int found = 0;
        for (int id = 0; id < management->customer_counter; id++) {
            PrintCustomers(management->customer[id]);
            found = 1;
        }

        if (!found) {
            puts(ERROR_CUSTOMER_EMPTY);
            return;
        }
    } else {
        puts(ERROR_CUSTOMER_EMPTY);
        return;
    }
}

void DisplayOrdersByCustomer(Management *management) {
    if (management->customer_counter <= 0) {
        puts(ERROR_CUSTOMER_EMPTY);
        return;
    }

    int customer_id = ChooseCustomer(management);

    if (customer_id < 0 || customer_id >= management->customer_counter) {
        puts(ERROR_CUSTOMER_NOT_EXIST);
        return;
    }

    Customer *selected_customer = management->customer[customer_id];
    bool has_orders = false;


    for (int i = 0; i < management->order_counter; i++) {
        Order *order = management->order[i];
        if (order->customer == selected_customer) {
            has_orders = true;
            PrintOrders(order);
            PrintOrderProducts(order);
        }
    }

    if (!has_orders) {
        puts(ERROR_CUSTOMER_DO_NOT_HAVE_ORDER);
    }

    return;
}

void ListCustomersByName(Management *management) {
    if (management->customer_counter <= 0) {
        puts(ERROR_CUSTOMER_EMPTY);
        return;
    }

    Customer * sorted_customers[management->customer_counter];
    for (int i = 0; i < management->customer_counter; i++) {
        sorted_customers[i] = management->customer[i];
    }

    for (int i = 0; i < management->customer_counter - 1; i++) {
        for (int j = 0; j < management->customer_counter - i - 1; j++) {
            if (strcmp(sorted_customers[j]->name, sorted_customers[j + 1]->name) > 0) {
                Customer *temp = sorted_customers[j];
                sorted_customers[j] = sorted_customers[j + 1];
                sorted_customers[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < management->customer_counter; i++) {
        PrintCustomers(sorted_customers[i]);
    }
}
