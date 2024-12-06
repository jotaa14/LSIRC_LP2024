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
    ClearInputBuffer();

    puts(CREATE_PRODUCT_NAME);
    fgets(ACCESS_TO_PRODUCT_NAME, PRODUCT_NAME_SIZE, stdin);

    size_t len = strlen(ACCESS_TO_PRODUCT_NAME);
    if (len > 0 && ACCESS_TO_PRODUCT_NAME[len - 1] == '\n') {
        ACCESS_TO_PRODUCT_NAME[len - 1] = '\0';
    }

    puts(CREATE_PRODUCT_CATEGORY);
    int category = ProductCategoryMenu();
    ACCESS_TO_PRODUCT_CATEGORY = (Category) category;

    ProcessMenu(management);

    TotalTimeProduct(management);

    strcpy(ACCESS_TO_PRODUCT_STATUS, "Active");

    puts("Enter Product Price(euros): ");
    scanf("%f", &management->product[management->product_counter]->pvp);

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

                break;
            case 2:
                break;
            default:
                puts(ERROR_MENU);
                break;
        }
    } while (menu != 2);
}

void TotalTimeProduct(Management *management) {
    for (int i = 0; i < management->product[management->product_counter]->process_counter; i++) {
        management->product[management->product_counter]->total_seconds = management->product[management->product_counter]->total_seconds + management->product[management->product_counter]->process[i]->process_seconds;
        management->product[management->product_counter]->total_minutes = management->product[management->product_counter]->total_minutes + management->product[management->product_counter]->process[i]->process_minutes;
        management->product[management->product_counter]->total_hours = management->product[management->product_counter]->total_hours + management->product[management->product_counter]->process[i]->process_hours;
    }
    do {
        if (management->product[management->product_counter]->total_seconds >= 60) {
            management->product[management->product_counter]->total_seconds = management->product[management->product_counter]->total_seconds - 60;
            management->product[management->product_counter]->total_minutes = management->product[management->product_counter]->total_minutes + 1;
        }
    } while (management->product[management->product_counter]->total_seconds >= 60);

    do {
        if (management->product[management->product_counter]->total_minutes >= 60) {
            management->product[management->product_counter]->total_minutes = management->product[management->product_counter]->total_minutes - 60;
            management->product[management->product_counter]->total_hours = management->product[management->product_counter]->total_hours + 1;
        }

    } while (management->product[management->product_counter]->total_minutes >= 60);
}
