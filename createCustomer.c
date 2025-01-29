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

void CreateCustomers(Management *management) {
    if (ACCESS_TO_CUSTOMER_COUNTER >= CUSTOMERS_SIZE) {
        puts(ERROR_CUSTOMER_EXIST);
        return;
    }

    ACCESS_TO_CUSTOMER_BY_COUNTER = malloc(sizeof (Customer)*100);
    if (ACCESS_TO_CUSTOMER_BY_COUNTER == NULL) {
        puts(ERROR_MEMORY_ALLOCATION);
        return;
    }
    
    ACCESS_TO_CUSTOMER_STATUS_NUM = 0;
    ACCESS_TO_CUSTOMER_USED_BY_ORDER = 0;
    ACCESS_TO_CUSTOMER_ID=0;
    ACCESS_TO_CUSTOMER_PHONE_NUMBER=0;
    ACCESS_TO_CUSTOMER_NIF=0;
    ACCESS_TO_CUSTOMER_REGISTRATION_DAY=0;
    ACCESS_TO_CUSTOMER_REGISTRATION_MONTH=0;
    ACCESS_TO_CUSTOMER_REGISTRATION_YEAR=0;

    ACCESS_TO_CUSTOMER_ID = ACCESS_TO_CUSTOMER_COUNTER + 1;

    printf(CUSTOMER_NAME);
    fgets(ACCESS_TO_CUSTOMER_NAME, CUSTOMER_NAME_SIZE, stdin);

    size_t len = strlen(ACCESS_TO_CUSTOMER_NAME);
    if (len > 0 && ACCESS_TO_CUSTOMER_NAME [len - 1] == '\n') {
        ACCESS_TO_CUSTOMER_NAME [len - 1] = '\0';
    }

    ACCESS_TO_CUSTOMER_PHONE_NUMBER = GetInt(CUSTOMER_PHONE_NUMBER_SIZE_MIN, CUSTOMER_PHONE_NUMBER_SIZE_MAX, CUSTOMER_PHONE_NUMBER);

    printf(CUSTOMER_EMAIL);
    fgets(ACCESS_TO_CUSTOMER_EMAIL, CUSTOMER_EMAIL_SIZE, stdin);

    size_t len1 = strlen(ACCESS_TO_CUSTOMER_EMAIL);
    if (len1 > 0 && ACCESS_TO_CUSTOMER_EMAIL [len1 - 1] == '\n') {
        ACCESS_TO_CUSTOMER_EMAIL [len1 - 1] = '\0';
    }

    ACCESS_TO_CUSTOMER_NIF = GetInt(CUSTOMER_NIF_SIZE_MIN, CUSTOMER_NIF_SIZE_MAX, CUSTOMER_NIF);

    printf(CUSTOMER_DISTRICT);
    fgets(ACCESS_TO_CUSTOMER_DISTRICT, CUSTOMER_DISTRICT_SIZE, stdin);

    size_t len2 = strlen(ACCESS_TO_CUSTOMER_DISTRICT);
    if (len2 > 0 && ACCESS_TO_CUSTOMER_DISTRICT [len2 - 1] == '\n') {
        ACCESS_TO_CUSTOMER_DISTRICT [len2 - 1] = '\0';
    }

    printf(CUSTOMER_CITY);
    fgets(ACCESS_TO_CUSTOMER_CITY, CUSTOMER_CITY_SIZE, stdin);

    size_t len3 = strlen(ACCESS_TO_CUSTOMER_CITY);
    if (len3 > 0 && ACCESS_TO_CUSTOMER_CITY [len3 - 1] == '\n') {
        ACCESS_TO_CUSTOMER_CITY [len3 - 1] = '\0';
    }

    printf(CUSTOMER_STREET);
    fgets(ACCESS_TO_CUSTOMER_STREET, CUSTOMER_STREET_SIZE, stdin);

    size_t len4 = strlen(ACCESS_TO_CUSTOMER_STREET);
    if (len4 > 0 && ACCESS_TO_CUSTOMER_STREET [len4 - 1] == '\n') {
        ACCESS_TO_CUSTOMER_STREET [len4 - 1] = '\0';
    }

    time_t now = time(NULL);
    struct tm *local_time = localtime(&now);

    ACCESS_TO_CUSTOMER_REGISTRATION_DAY = local_time->tm_mday;
    ACCESS_TO_CUSTOMER_REGISTRATION_MONTH = local_time->tm_mon + 1;
    ACCESS_TO_CUSTOMER_REGISTRATION_YEAR = local_time->tm_year + 1900;
    strcpy((ACCESS_TO_CUSTOMER_STATUS), "Active");
    ACCESS_TO_CUSTOMER_COUNTER++;

    puts(CUSTOMER_CREATED);
}
