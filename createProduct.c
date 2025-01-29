/**
 * @file createProduct.c
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains functions for creating new products.
 */


#include "functions.h"

void CreateProduct(Management *management) {
    if (ACCESS_TO_PRODUCT_COUNTER >= PRODUCTS_SIZE) {
        puts(ERROR_PRODUCTS_REACHED);
        return;
    }

    ACCESS_TO_PRODUCT_BY_COUNTER = malloc(sizeof (Product)*100);
    if (ACCESS_TO_PRODUCT_BY_COUNTER == NULL) {
        puts(ERROR_MEMORY_ALLOCATION);
        return;
    }
    ACCESS_TO_PRODUCT_PROCESS_COUNTER = 0;
    ACCESS_TO_PRODUCT_TOTAL_SELLED = 0;
    ACCESS_TO_PRODUCT_TOTAL_SECONDS = 0;
    ACCESS_TO_PRODUCT_TOTAL_MINUTES = 0;
    ACCESS_TO_PRODUCT_TOTAL_HOURS = 0;
    ACCESS_TO_PRODUCT_USED_BY_ORDER = 0;   
    ACCESS_TO_PRODUCT_STATUS_NUM = 0;
    ACCESS_TO_PRODUCT_PVP=0;
    ACCESS_TO_PRODUCT_ID=0;

    ACCESS_TO_PRODUCT_ID = ACCESS_TO_PRODUCT_COUNTER + 1;
    
    puts(CREATE_PRODUCT_NAME);
    fgets(ACCESS_TO_PRODUCT_NAME, PRODUCT_NAME_SIZE, stdin);

    size_t len = strlen(ACCESS_TO_PRODUCT_NAME);
    if (len > 0 && ACCESS_TO_PRODUCT_NAME[len - 1] == '\n') {
        ACCESS_TO_PRODUCT_NAME[len - 1] = '\0';
    }

    puts(CREATE_PRODUCT_CATEGORY);
    int category = ProductCategoryMenu();
    ACCESS_TO_PRODUCT_CATEGORY = (Category) category;

    strcpy(ACCESS_TO_PRODUCT_STATUS, "Active");

    puts(GET_PRODUCT_PRICE);
    scanf("%f", &ACCESS_TO_PRODUCT_PVP);

    ProcessMenu(management);
    for (int i = 0; i < ACCESS_TO_PRODUCT_PROCESS_COUNTER; i++) {
        ACCESS_TO_PRODUCT_TOTAL_SECONDS = ACCESS_TO_PRODUCT_TOTAL_SECONDS + ACCESS_TO_PROCESS_i_SECONDS;
        ACCESS_TO_PRODUCT_TOTAL_MINUTES = ACCESS_TO_PRODUCT_TOTAL_MINUTES + ACCESS_TO_PROCESS_i_MINUTES;
        ACCESS_TO_PRODUCT_TOTAL_HOURS = ACCESS_TO_PRODUCT_TOTAL_HOURS + ACCESS_TO_PROCESS_i_HOURS;
    }
    TotalTimeProduct(management, ACCESS_TO_PRODUCT_COUNTER);
    ACCESS_TO_PRODUCT_COUNTER++;
    puts(PRODUCT_CREATED);
}

void AssociateMachineWithProduct(Management *management) {
    int machine_id;
    if (ACCESS_TO_MACHINE_COUNTER > 0) {
        do {
            machine_id = ChooseMachine(management);
        } while (machine_id == -1);

        ACCESS_TO_PROCESS_MACHINE = ACCESS_TO_MACHINE_BY_MACHINE_ID
                ACCESS_TO_MACHINE_USED_BY_PRODUCT_BY_MACHINE_ID++;
    } else {
        int machine_id;
        CreateMachine(management);
        do {
            machine_id = ChooseMachine(management);
        } while (machine_id == -1);

        ACCESS_TO_PROCESS_MACHINE = ACCESS_TO_MACHINE_BY_MACHINE_ID;
        ACCESS_TO_MACHINE_USED_BY_PRODUCT_BY_MACHINE_ID++;
    }
}

void ProcessMenu(Management *management) {
    int menu;
    do {
        ProcessMenuOutput();
        scanf("%d", &menu);
        ClearInputBuffer();
        switch (menu) {
            case 1:
                ACCESS_TO_PROCESS = malloc(sizeof (Process));
                if (ACCESS_TO_PROCESS == NULL) {
                    puts(ERROR_MEMORY_ALLOCATION);
                    return;
                }
                ACCESS_TO_PROCESS_ID = 0;
                ACCESS_TO_PROCESS_HOURS = 0;
                ACCESS_TO_PROCESS_MINUTES = 0;
                ACCESS_TO_PROCESS_SECONDS = 0;
                ACCESS_TO_PROCESS_ID = ACCESS_TO_PRODUCT_PROCESS_COUNTER + 1;

                AssociateMachineWithProduct(management);

                ACCESS_TO_PROCESS_HOURS = GetInt(MIN_HOURS_WASTED, MAX_HOURS_WASTED, MSG_GET_HOURS_WASTED);

                ACCESS_TO_PROCESS_MINUTES = GetInt(MIN_MINUTES_WASTED, MAX_MINUTES_WASTED, MSG_GET_MINUTES_WASTED);

                ACCESS_TO_PROCESS_SECONDS = GetInt(MIN_SECONDS_WASTED, MAX_SECONDS_WASTED, MSG_GET_SECONDS_WASTED);

                puts(CREATE_PRODUCT_REPORT);
                fgets(ACCESS_TO_PROCESS_REPORT, REPORT_SIZE, stdin);

                ACCESS_TO_PRODUCT_PROCESS_COUNTER++;
                puts(PROCESS_CREATED);
                break;
            case 2:
                break;
            default:
                puts(ERROR_MENU);
                break;
        }
    } while (menu != 2);
}

void TotalTimeProduct(Management *management, int product_id) {
    do {
        if (ACCESS_TO_PRODUCT_TOTAL_SECONDS_BY_PRODUCT_ID >= 60) {
            ACCESS_TO_PRODUCT_TOTAL_SECONDS_BY_PRODUCT_ID = ACCESS_TO_PRODUCT_TOTAL_SECONDS_BY_PRODUCT_ID - 60;
            ACCESS_TO_PRODUCT_TOTAL_MINUTES_BY_PRODUCT_ID = ACCESS_TO_PRODUCT_TOTAL_MINUTES_BY_PRODUCT_ID + 1;
        }
    } while (ACCESS_TO_PRODUCT_TOTAL_SECONDS_BY_PRODUCT_ID >= 60);

    do {
        if (ACCESS_TO_PRODUCT_TOTAL_MINUTES_BY_PRODUCT_ID >= 60) {
            ACCESS_TO_PRODUCT_TOTAL_MINUTES_BY_PRODUCT_ID = ACCESS_TO_PRODUCT_TOTAL_MINUTES_BY_PRODUCT_ID - 60;
            ACCESS_TO_PRODUCT_TOTAL_HOURS_BY_PRODUCT_ID = ACCESS_TO_PRODUCT_TOTAL_HOURS_BY_PRODUCT_ID + 1;
        }

    } while (ACCESS_TO_PRODUCT_TOTAL_MINUTES_BY_PRODUCT_ID >= 60);
}