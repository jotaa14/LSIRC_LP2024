/**
 * @file editCustomer.c
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains functions for editing customer details.
 */


#include "functions.h"

void EditCustomer(Management *management) {
    int menu;
    ListAllCustomers(management);
    if (ACCESS_TO_CUSTOMER_COUNTER == 0) {
        return;
    }
    int id = GetCustomerPosition(*management, GetInt(MIN_CUSTOMERS_SIZE, CUSTOMERS_SIZE, CUSTOMER_ID));

    if (id == -1) {
        puts(ERROR_CUSTOMER_EMPTY);
        return;
    }
    do {
        CustomerEditMenuOutput();
        scanf("%d", &menu);
        ClearInputBuffer();
        switch (menu) {
            case 1:
                puts(CUSTOMER_NAME);
                fgets(ACCESS_TO_CUSTOMER_NAME_BY_ID, CUSTOMER_NAME_SIZE, stdin);
                size_t len = strlen(ACCESS_TO_CUSTOMER_NAME_BY_ID);
                if (len > 0 && ACCESS_TO_CUSTOMER_NAME_BY_ID[len - 1] == '\n') {
                    ACCESS_TO_CUSTOMER_NAME_BY_ID[len - 1] = '\0';
                }
                puts(SUCCESS_CUSTOMER_EDIT_NAME);
                break;
            case 2:
                (ACCESS_TO_CUSTOMER_PHONE_NUMBER_BY_ID) = GetInt(CUSTOMER_PHONE_NUMBER_SIZE_MIN, CUSTOMER_PHONE_NUMBER_SIZE_MAX, CUSTOMER_PHONE_NUMBER);
                puts(SUCCESS_CUSTOMER_EDIT_PHONE_NUMBER);
                break;
            case 3:
                puts(CUSTOMER_EMAIL);
                fgets(ACCESS_TO_CUSTOMER_EMAIL_BY_ID, CUSTOMER_EMAIL_SIZE, stdin);
                size_t leni = strlen(ACCESS_TO_CUSTOMER_EMAIL_BY_ID);
                if (leni > 0 && ACCESS_TO_CUSTOMER_EMAIL_BY_ID[leni - 1] == '\n') {
                    ACCESS_TO_CUSTOMER_EMAIL_BY_ID[leni - 1] = '\0';
                }
                puts(SUCCESS_CUSTOMER_EDIT_EMAIL);
                break;
            case 4:
                (ACCESS_TO_CUSTOMER_NIF_BY_ID) = GetInt(CUSTOMER_NIF_SIZE_MIN, CUSTOMER_NIF_SIZE_MAX, CUSTOMER_NIF);
                puts(SUCCESS_CUSTOMER_EDIT_NIF);
                break;
            case 5:
                CustomerEditStatus(management, id);
                puts(SUCCESS_CUSTOMER_EDIT_STATUS);
                break;
            case 6:
                puts(CUSTOMER_DISTRICT);
                fgets(ACCESS_TO_CUSTOMER_DISTRICT_BY_ID, CUSTOMER_DISTRICT_SIZE, stdin);
                size_t len2 = strlen(ACCESS_TO_CUSTOMER_DISTRICT_BY_ID);
                if (len2 > 0 && ACCESS_TO_CUSTOMER_DISTRICT_BY_ID[len2 - 1] == '\n') {
                    ACCESS_TO_CUSTOMER_DISTRICT_BY_ID[len2 - 1] = '\0';
                }
                puts(SUCCESS_CUSTOMER_EDIT_DISTRICT);
                break;
            case 7:
                puts(CUSTOMER_CITY);
                fgets(ACCESS_TO_CUSTOMER_CITY_BY_ID, CUSTOMER_CITY_SIZE, stdin);
                size_t len4 = strlen(ACCESS_TO_CUSTOMER_CITY_BY_ID);
                if (len4 > 0 && ACCESS_TO_CUSTOMER_CITY_BY_ID[len4 - 1] == '\n') {
                    ACCESS_TO_CUSTOMER_CITY_BY_ID[len4 - 1] = '\0';
                }
                puts(SUCCESS_CUSTOMER_EDIT_CITY);
                break;
            case 8:
                puts(CUSTOMER_STREET);
                fgets(ACCESS_TO_CUSTOMER_STREET_BY_ID, CUSTOMER_STREET_SIZE, stdin);
                size_t len3 = strlen(ACCESS_TO_CUSTOMER_STREET_BY_ID);
                if (len3 > 0 && ACCESS_TO_CUSTOMER_STREET_BY_ID[len3 - 1] == '\n') {
                    ACCESS_TO_CUSTOMER_STREET_BY_ID[len3 - 1] = '\0';
                }
                puts(SUCCESS_CUSTOMER_EDIT_STREET);
                break;
            case 0:
                break;
            default:
                puts(ERROR_MENU);
                break;
        }

    } while (menu != 0);
}

void CustomerEditStatus(Management *management, int id) {

    int can_be_inactive = 1;
    for (int i = 0; i < ACCESS_TO_ORDER_COUNTER; i++) {
        Order *order = ACCESS_ORDER[i];
        if (order != NULL && ACCESS_ORDER_CUSTOMER == (ACCESS_TO_CUSTOMER_BY_ID)) {
            if (ACCESS_ORDER_STATUSORDER != STATUS_CANCELED && ACCESS_ORDER_STATUSORDER != STATUS_CLOSED) {
                can_be_inactive = 0;
                break;
            }
        }
    }

    int menu;
    do {
        CustomerEditStatusMenuOutput();
        scanf("%d", &menu);
        ClearInputBuffer();
        switch (menu) {
            case 1:
                strcpy(ACCESS_TO_CUSTOMER_STATUS_BY_ID, "Active");
                ACCESS_TO_CUSTOMER_STATUS_NUM_BY_ID = 0;
                break;
            case 2:
                if (can_be_inactive) {
                    strcpy(ACCESS_TO_CUSTOMER_STATUS_BY_ID, "Inactive");
                    (ACCESS_TO_CUSTOMER_STATUS_NUM_BY_ID) = 1;
                } else {
                    puts(ERROR_CUSTOMER_INACTIVE_STATUS_HAVE_ORDERS);
                }
                break;
            case 0:
                break;
            default:
                puts(ERROR_MENU);
                break;
        }
    } while (menu != 0);
}
