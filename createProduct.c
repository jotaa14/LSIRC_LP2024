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

    ACCESS_TO_PRODUCT_BY_COUNTER = malloc(sizeof (Product));
    if (ACCESS_TO_PRODUCT_BY_COUNTER == NULL) {
        puts(ERROR_MEMORY_ALLOCATION);
        return;
    }

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
    management->product[management->product_counter]->status_num=0;
    puts("Enter Product Price(euros): ");
    scanf("%f", &management->product[management->product_counter]->pvp);
    management->product[management->product_counter]->process_counter=0;
    management->product[management->product_counter]->total_selled=0;
    management->product[management->product_counter]->total_seconds=0;
    management->product[management->product_counter]->total_minutes=0;
    management->product[management->product_counter]->total_hours=0;
    management->product[management->product_counter]->used_by_order=0;    
    ProcessMenu(management);
    for (int i = 0; i < management->product[management->product_counter]->process_counter; i++) {
        management->product[management->product_counter]->total_seconds = management->product[management->product_counter]->total_seconds + management->product[management->product_counter]->process[i]->process_seconds;
        management->product[management->product_counter]->total_minutes = management->product[management->product_counter]->total_minutes + management->product[management->product_counter]->process[i]->process_minutes;
        management->product[management->product_counter]->total_hours = management->product[management->product_counter]->total_hours + management->product[management->product_counter]->process[i]->process_hours;
    }
    TotalTimeProduct(management, management->product_counter);
    management->product_counter++;
    puts(PRODUCT_CREATED);
}

void AssociateMachineWithProduct(Management *management) {
    int machine_id;
    if (management->machine_counter > 0) {
        do {
            machine_id = ChooseMachine(management);
        } while (machine_id == -1);

        management->product[management->product_counter]->process[management->product[management->product_counter]->process_counter]->machine = management->machine[machine_id];
        management->machine[machine_id]->used_by_product++;
    } else {
        int machine_id;
        CreateMachine(management);
        do {
            machine_id = ChooseMachine(management);
        } while (machine_id == -1);

        management->product[management->product_counter]->process[management->product[management->product_counter]->process_counter]->machine = management->machine[machine_id];
        management->machine[machine_id]->used_by_product++;
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
                
                management->product[management->product_counter]->process[management->product[management->product_counter]->process_counter] = malloc(sizeof (Process));
                if (management->product[management->product_counter]->process[management->product[management->product_counter]->process_counter] == NULL) {
                    puts(ERROR_MEMORY_ALLOCATION);
                    return;
                }
                management->product[management->product_counter]->process[management->product[management->product_counter]->process_counter]->id = management->product[management->product_counter]->process_counter + 1;

                AssociateMachineWithProduct(management);

                management->product[management->product_counter]->process[management->product[management->product_counter]->process_counter]->process_hours = GetInt(MIN_HOURS_WASTED, MAX_HOURS_WASTED, MSG_GET_HOURS_WASTED);

                management->product[management->product_counter]->process[management->product[management->product_counter]->process_counter]->process_minutes = GetInt(MIN_MINUTES_WASTED, MAX_MINUTES_WASTED, MSG_GET_MINUTES_WASTED);

                management->product[management->product_counter]->process[management->product[management->product_counter]->process_counter]->process_seconds = GetInt(MIN_SECONDS_WASTED, MAX_SECONDS_WASTED, MSG_GET_SECONDS_WASTED);

                puts(CREATE_PRODUCT_REPORT);
                fgets(management->product[management->product_counter]->process[management->product[management->product_counter]->process_counter]->report, REPORT_SIZE, stdin);

                management->product[management->product_counter]->process_counter++;
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
        if (management->product[product_id]->total_seconds >= 60) {
            management->product[product_id]->total_seconds = management->product[product_id]->total_seconds - 60;
            management->product[product_id]->total_minutes = management->product[product_id]->total_minutes + 1;
        }
    } while (management->product[product_id]->total_seconds >= 60);

    do {
        if (management->product[product_id]->total_minutes >= 60) {
            management->product[product_id]->total_minutes = management->product[product_id]->total_minutes - 60;
            management->product[product_id]->total_hours = management->product[product_id]->total_hours + 1;
        }

    } while (management->product[product_id]->total_minutes >= 60);
}