/**
 * @file menuCustomer.c
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains the menu functionality for managing customers.
 */


#include "functions.h"

void CustomerMenu(Management *management) {
    int menu;
    do {
        CustomerMenuOutput();
        scanf("%d", &menu);
        ClearInputBuffer();
        switch (menu) {
            case 1:
                CreateCustomers(management);
                break;
            case 2:
                EditCustomer(management);
                break;
            case 3:
                DeleteCustomer(management);
                break;
            case 4:
                CustomerListMenu(management);
                break;
            case 0:
                break;
            default:
                puts(ERROR_MENU);
                break;
        }
    } while (menu != 0);
}

void CustomerListMenu(Management *management) {
    int menu;
    do {
        CustomerListMenuOutput();
        scanf("%d", &menu);
        ClearInputBuffer();
        switch (menu) {
            case 1:
                ListAllCustomers(management);
                break;
            case 2:
                DisplayOrdersByCustomer(management);
                break;
            case 3:
                ListCustomersByName(management);
                break;
            case 0:
                break;
            default:
                puts(ERROR_MENU);
                break;

        }
    } while (menu != 0);
}
