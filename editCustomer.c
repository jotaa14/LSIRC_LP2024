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
    if(management->customer_counter==0){
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
                fgets(management->customer[id]->name, CUSTOMER_NAME_SIZE, stdin);
                size_t len = strlen(management->customer[id]->name);
                if (len > 0 && management->customer[id]->name[len - 1] == '\n') {
                    management->customer[id]->name[len - 1] = '\0';
                }
                puts(SUCCESS_CUSTOMER_EDIT_NAME);
                break;
            case 2:
                management->customer[id]->phone_number = GetInt(CUSTOMER_PHONE_NUMBER_SIZE_MIN, CUSTOMER_PHONE_NUMBER_SIZE_MAX, CUSTOMER_PHONE_NUMBER);
                puts(SUCCESS_CUSTOMER_EDIT_PHONE_NUMBER);
                break;
            case 3:
                puts(CUSTOMER_EMAIL);
                fgets(management->customer[id]->email, CUSTOMER_EMAIL_SIZE, stdin);
                size_t leni = strlen(management->customer[id]->email);
                if (leni > 0 && management->customer[id]->email[leni - 1] == '\n') {
                    management->customer[id]->email[leni - 1] = '\0';
                }                
		puts(SUCCESS_CUSTOMER_EDIT_EMAIL);
                break;
            case 4:
                management->customer[id]->nif = GetInt(CUSTOMER_NIF_SIZE_MIN, CUSTOMER_NIF_SIZE_MAX, CUSTOMER_NIF);
                puts(SUCCESS_CUSTOMER_EDIT_NIF);
                break;
            case 5:
                CustomerEditStatus(management, id);
                puts(SUCCESS_CUSTOMER_EDIT_STATUS);
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
    for (int i = 0; i < management->order_counter; i++) {
        Order *order = management->order[i];
        if (order != NULL && order->customer == management->customer[id]) {
            if (order->statusorder != STATUS_CANCELED && order->statusorder != STATUS_CLOSED) {
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
                strcpy(management->customer[id]->status, "Active");
                management->customer[id]->status_num=0;
                break;
            case 2:
                if (can_be_inactive) {
                    strcpy(management->customer[id]->status, "Inactive");
                    management->customer[id]->status_num=1;
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
    }while (menu != 0);
}
