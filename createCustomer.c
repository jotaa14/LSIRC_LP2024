#include "functions.h"

void CreateCustomers(Management *management) {
    if (management->customer_counter >= CUSTOMERS_SIZE) {
        puts(ERROR_CUSTOMER_EXIST);
        return;
    }

    management->customer[management->customer_counter] = malloc(sizeof (Customer));
    if (management->customer[management->customer_counter] == NULL) {
        puts(ERROR_MEMORY_ALLOCATION);
        return;
    }

    management->customer[management->customer_counter]->id = management->customer_counter + 1;
    ClearInputBuffer();

    printf(CUSTOMER_NAME);
    fgets(management->customer[management->customer_counter]->name, CUSTOMERS_SIZE, stdin);

    size_t len = strlen(management->customer[management->customer_counter]->name);
    if (len > 0 && management->customer[management->customer_counter]->name [len - 1] == '\n') {
        management->customer[management->customer_counter]->name [len - 1] = '\0';
    }

    management->customer[management->customer_counter]->phone_number = GetInt(CUSTOMER_PHONE_NUMBER_SIZE_MIN, CUSTOMER_PHONE_NUMBER_SIZE_MAX, CUSTOMER_PHONE_NUMBER);

    printf(CUSTOMER_EMAIL);
    fgets(management->customer[management->customer_counter]->email, CUSTOMER_EMAIL_SIZE, stdin);
    
    size_t leni = strlen(management->customer[management->customer_counter]->email);
    if (leni > 0 && management->customer[management->customer_counter]->email [leni - 1] == '\n') {
        management->customer[management->customer_counter]->email [leni - 1] = '\0';
    }

    management->customer[management->customer_counter]->nif = GetInt(CUSTOMER_NIF_SIZE_MIN, CUSTOMER_NIF_SIZE_MAX, CUSTOMER_NIF);

    management->customer[management->customer_counter]->registration_day = GetInt(MIN_DAY, MAX_DAY, CUSTOMER_DAY);
    management->customer[management->customer_counter]->registration_month = GetInt(MIN_MONTH, MAX_MONTH, CUSTOMER_MONTH);
    management->customer[management->customer_counter]->registration_year = GetInt(MIN_YEAR, MAX_YEAR, CUSTOMER_YEAR);
    strcpy(management->customer[management->customer_counter]->status, "Active");

    management->customer_counter++;

    puts(CUSTOMER_CREATED);
}
