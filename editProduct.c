/**
 * @file editProduct.c
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains functions for editing the details of existing products.
 */


#include "functions.h"

void EditProduct(Management *management) {
    int menu;
    ListAllProducts(management);
    if (ACCESS_TO_PRODUCT_COUNTER == 0) {
        return;
    }
    int id = GetProductPosition(*management, GetInt(MIN_SIZE, PRODUCTS_SIZE, MSG_GET_PRODUCT));

    if (id == -1) {
        puts(ERROR_PRODUCT_NOT_EXIST);
        return;
    }
    do {
        ProductEditMenuOutput();
        scanf("%d", &menu);
        ClearInputBuffer();
        switch (menu) {
            case 1:
                printf(EDIT_PRODUCT_GET_NAME);
                fgets(ACCESS_TO_PRODUCT_NAME_BY_ID, PRODUCT_NAME_SIZE, stdin);
                size_t len = strlen(ACCESS_TO_PRODUCT_NAME_BY_ID);
                if (len > 0 && ACCESS_TO_PRODUCT_NAME_BY_ID[len - 1] == '\n') {
                    ACCESS_TO_PRODUCT_NAME_BY_ID[len - 1] = '\0';
                }
                puts(SUCESS_PRODUCT_EDIT_NAME);
                break;
            case 2:
                puts(EDIT_PRODUCT_GET_CATEGORY);
                int category = ProductCategoryMenu();
                ACCESS_TO_PRODUCT_CATEGORY_BY_ID = (Category) category;
                puts(SUCESS_PRODUCT_EDIT_CATEGORY);
                break;
            case 3:
                ProductEditStatus(management, id);
                puts(SUCESS_PRODUCT_EDIT_STATUS);
                break;
            case 0:
                break;
            default:
                puts(ERROR_MENU);
                break;
        }

    } while (menu != 0);
}

void ProductEditStatus(Management *management, int id) {
    int menu;
    do {
        ProductEditStatusMenuOutput();
        scanf("%d", &menu);
        ClearInputBuffer();
        switch (menu) {
            case 1:
                strcpy(ACCESS_TO_PRODUCT_STATUS_BY_ID, "Active");
                ACCESS_TO_PRODUCT_STATUS_NUM_BY_ID = 0;
                break;
            case 2:
                strcpy(ACCESS_TO_PRODUCT_STATUS_BY_ID, "In Stock");
                ACCESS_TO_PRODUCT_STATUS_NUM_BY_ID = 1;
                break;
            case 3:
                strcpy(ACCESS_TO_PRODUCT_STATUS_BY_ID, "Sold Out");
                ACCESS_TO_PRODUCT_STATUS_NUM_BY_ID = 2;
                break;
            case 4:
                strcpy(ACCESS_TO_PRODUCT_STATUS_BY_ID, "Discontinued");
                ACCESS_TO_PRODUCT_STATUS_NUM_BY_ID = 3;
                break;
            case 5:
                strcpy(ACCESS_TO_PRODUCT_STATUS_BY_ID, "Inactive");
                ACCESS_TO_PRODUCT_STATUS_NUM_BY_ID = 4;
                break;
            case 0:
                break;
            default:
                puts(ERROR_MENU);
                break;
        }
    } while (menu < 1 && menu > 2);
}

void EditProcess(Management *management) {
    int product_id = -1, process_id = -1;

    if (ACCESS_TO_PRODUCT_COUNTER == 0) {
        puts(ERROR_NO_PRODUCTS);
        return;
    }

    do {
        ListAllProducts(management);
        product_id = GetProductPosition(*management, GetInt(MIN_SIZE, PRODUCTS_SIZE, MSG_GET_PRODUCT));
        if (product_id == -1 || product_id >= ACCESS_TO_PRODUCT_COUNTER) {
            puts(ERROR_PRODUCT_NOT_EXIST);
        }
    } while (product_id == -1 || product_id >= ACCESS_TO_PRODUCT_COUNTER);

    Product *product = ACCESS_TO_PRODUCT_PRODUCT_ID;

    if (ACCESS_PRODUCT_PROCESS_COUNTER == 0) {
        puts(ERROR_NO_PROCESS);
        return;
    }

    do {
        process_id = ChooseProcess(management, product_id);
        if (process_id == -1 || process_id >= ACCESS_PRODUCT_PROCESS_COUNTER) {
            puts(ERROR_PROCESS_NOT_EXIST);
        }
    } while (process_id == -1 || process_id >= ACCESS_PRODUCT_PROCESS_COUNTER);

    Process *selected_process = ACCESS_PRODUCT_PROCESS_PROCESS_ID;

    int menu;
    do {
        EditProcessOutput();
        scanf("%d", &menu);
        ClearInputBuffer();

        switch (menu) {
            case 1:
                ACCESS_PRODUCT_TOTAL_HOURS -= selected_process->process_hours;
                selected_process->process_hours = GetInt(MIN_HOURS_WASTED, MAX_HOURS_WASTED, MSG_GET_HOURS_WASTED);
                ACCESS_PRODUCT_TOTAL_HOURS += selected_process->process_hours;
                TotalTimeProduct(management, product_id);
                SynchronizeOrdersAfterProductUpdate(management, product_id);
                puts(SUCESS_PROCESS_EDIT_HOUR);
                break;

            case 2:
                ACCESS_PRODUCT_TOTAL_MINUTES -= selected_process->process_minutes;
                selected_process->process_minutes = GetInt(MIN_MINUTES_WASTED, MAX_MINUTES_WASTED, MSG_GET_MINUTES_WASTED);
                ACCESS_PRODUCT_TOTAL_MINUTES += selected_process->process_minutes;
                TotalTimeProduct(management, product_id);
                SynchronizeOrdersAfterProductUpdate(management, product_id);
                puts(SUCESS_PROCESS_EDIT_MINUTES);
                break;

            case 3:
                ACCESS_PRODUCT_TOTAL_SECONDS -= selected_process->process_seconds;
                selected_process->process_seconds = GetInt(MIN_SECONDS_WASTED, MAX_SECONDS_WASTED, MSG_GET_SECONDS_WASTED);
                ACCESS_PRODUCT_TOTAL_SECONDS += selected_process->process_seconds;
                TotalTimeProduct(management, product_id);
                SynchronizeOrdersAfterProductUpdate(management, product_id);
                puts(SUCESS_PROCESS_EDIT_SECONDS);
                break;

            case 4:
                puts(EDIT_PROCESS_GET_REPORT);
                fgets(selected_process->report, REPORT_SIZE, stdin);
                size_t len = strlen(selected_process->report);
                if (len > 0 && selected_process->report[len - 1] == '\n') {
                    selected_process->report[len - 1] = '\0';
                }
                puts(SUCESS_PROCESS_EDIT_REPORTS);
                break;

            case 5:
                selected_process->machine->used_by_product--;
                int new_machine_id = ChooseMachine(management);
                if (new_machine_id == -1) {
                    puts(ERROR_MACHINE_NOT_EXIST);
                    break;
                }
                selected_process->machine = management->machine[new_machine_id];
                selected_process->ACCESS_TO_MACHINE_USED_BY_PRODUCT++;
                puts(SUCESS_PROCESS_EDIT_MACHINE);
                break;
            case 0:
                break;

            default:
                puts(ERROR_MENU);
                break;
        }
    } while (menu != 0);
}
