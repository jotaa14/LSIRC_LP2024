/**
 * @file createCustomer.c
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains functions for creating new customers.
 */

#include "functions.h"

void CreateCustomers(Management *management){
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

    printf(CUSTOMER_NAME);
    fgets(management->customer[management->customer_counter]->name, CUSTOMERS_SIZE, stdin);

    size_t len = strlen(management->customer[management->customer_counter]->name);
    if (len > 0 && management->customer[management->customer_counter]->name [len - 1] == '\n') {
        management->customer[management->customer_counter]->name [len - 1] = '\0';
    }
    
     if (len > 0 && isalpha(management->customer[management->customer_counter]->name[0])) {
        management->customer[management->customer_counter]->name[0] = toupper(management->customer[management->customer_counter]->name[0]);
    }

    management->customer[management->customer_counter]->phone_number = GetInt(CUSTOMER_PHONE_NUMBER_SIZE_MIN, CUSTOMER_PHONE_NUMBER_SIZE_MAX, CUSTOMER_PHONE_NUMBER);

    printf(CUSTOMER_EMAIL);
    fgets(management->customer[management->customer_counter]->email, CUSTOMER_EMAIL_SIZE, stdin);
    
    size_t leni = strlen(management->customer[management->customer_counter]->email);
    if (leni > 0 && management->customer[management->customer_counter]->email [leni - 1] == '\n') {
        management->customer[management->customer_counter]->email [leni - 1] = '\0';
    }
    
    management->customer[management->customer_counter]->nif = GetInt(CUSTOMER_NIF_SIZE_MIN, CUSTOMER_NIF_SIZE_MAX, CUSTOMER_NIF);
    
    time_t now = time(NULL); 
    struct tm *local_time = localtime(&now); 

    management->customer[management->customer_counter]->registration_day = local_time->tm_mday;
    management->customer[management->customer_counter]->registration_month = local_time->tm_mon + 1; 
    management->customer[management->customer_counter]->registration_year = local_time->tm_year + 1900; 
    strcpy(management->customer[management->customer_counter]->status, "Active");
    management->customer[management->customer_counter]->status_num=0;
    management->customer[management->customer_counter]->used_by_order=0;
    management->customer_counter++;

    puts(CUSTOMER_CREATED);
}
