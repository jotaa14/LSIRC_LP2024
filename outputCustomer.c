#include "functions.h"

void PrintCustomers(Customer *customer) {
    printf("----------------------------------");
    printf(GET_CUSTOMER_ID, customer->id);
    printf(GET_CUSTOMER_NAME, customer->name);
    printf(GET_CUSTOMER_PHONE_NUMBER, customer->phone_number);
    printf(GET_CUSTOMER_EMAIL, customer->email);
    printf(GET_CUSTOMER_NIF, customer->nif);
    printf("Date: %d-%d-%d\n", customer->registration_day, customer->registration_month, customer->registration_year);
    printf(GET_CUSTOMER_STATUS, customer->status);
    puts("----------------------------------");
}

void ListCustomers(Management *management) {
    if (management->customer_counter > 0) {
        int found = 0;
        for (int id = 0; id < management->customer_counter; id++) {
            PrintCustomers(management->customer[id]);
            found = 1;
        }

        if (!found) {
            puts(ERROR_CATEGORY_EMPTY);
            return;
        }
    } else {
        puts(ERROR_CATEGORY_EMPTY);
        return;
    }
}
