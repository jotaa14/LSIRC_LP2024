#include "functions.h"

void DeleteCustomer(Management *management) {
    ListCustomers(management);
    int id = GetCustomerPosition(*management, GetInt(MIN_CUSTOMERS_SIZE, CUSTOMERS_SIZE, CUSTOMER_ID));

    if (id == -1) {
        puts(ERROR_CATEGORY_EMPTY);
        return;
    }
    if (strcmp(management->customer[id]->status, "Inactive") == 0) {

        free(management->customer[id]);

        for (int i = id; i < management->customer_counter - 1; i++) {
            management->customer[i] = management->customer[i + 1];
            management->customer[i]->id = i + 1;
        }

        management->customer[management->customer_counter - 1] == NULL;

        management->customer_counter--;

        puts(CUSTOMER_DELETED);
    } else {
        puts(ERROR_CUSTOMER_DELETE_STATUS);
    }
}

void CleanDataCustomer(Customer *customer) {
    customer->id = 0;
    strcpy(customer->name, "");
    customer->phone_number = 0;
    strcpy(customer->email, "");
    customer->nif = 0;
    customer->registration_day = 0;
    customer->registration_month = 0;
    customer->registration_year = 0;
}
