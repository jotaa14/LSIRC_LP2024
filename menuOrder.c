/**
 * @file menuOrder.c
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains the menu functionality for managing orders.
 */


#include "functions.h"

void OrderMenu(Management *management) {
    int menu;
    do {
        OrderMenuOutput();
        scanf("%d", &menu);
        ClearInputBuffer();
        switch (menu) {
            case 1:
                CreateOrder(management);
                break;
            case 2:
                EditOrder(management);
                break;
            case 3:
                DeleteOrder(management);
                break;
            case 4:
                OrderListMenu(management);
                break;
            case 0:
                break;
            default:
                puts(ERROR_MENU);
                break;
        }
    } while (menu != 0);
}

int OrderPriorityMenu() {
    int priority;
    do {
        OrderPriorityMenuOutput();
        scanf("%d", &priority);
        ClearInputBuffer();
        if (priority < 1 || priority > 3) {
            puts(ERROR_MENU);
        }
    } while (priority < 1 || priority > 3);

    return priority - 1;
}

void OrderListMenu(Management *management) {
    int menu;
    do {
        OrderListMenuOuput();
        scanf("%d", &menu);
        ClearInputBuffer();
        switch (menu) {
            case 1:
                ListOrders(management);
                break;
            case 2:
                DisplayOrderDetails(management);
                break;
            case 3:
                ListOrdersByPriority(management);
                break;
            case 4:
                ListOrdersByStatus(management);
                break;
            case 5:
                ListOrdersByPrice(management);
                break;
            case 6:
                ListOrdersByProcess(management);
                break;
            case 0:
                break;

        }
    } while (menu != 0);
}

void ListOrdersByProcess(Management * management) {
    int menu;
    do {
        OrderListMenuProcessOuput();
        scanf("%d", &menu);
        ClearInputBuffer();
        switch (menu) {
            case 1:
                puts(ORDER_LIST_STUFF_STATUS);
                int status;
                scanf("%d", &status);
                for (int i = 0; i < management->order_counter; i++) {
                    if (management->order[i]->statusorder == status) {
                        PrintOrders(management->order[i]);
                    }
                }
                break;
            case 2:
                OrderListFulfillment(management);
                break;
            case 3:

                puts(ORDER_LIST_STUFF_DATE);
                int start_day, start_month, start_year;
                int end_day, end_month, end_year;

                puts(ORDER_LSIT_PROCESS_DATE_START);
                puts(ORDER_LSIT_PROCESS_DAY);
                scanf("%d", &start_day);
                if (start_day > ORDER_LSIT_PROCESS_DAY_MAX) {
                    puts(ERROR_MENU);
                    return;
                }
                puts(ORDER_LSIT_PROCESS_MONTH);
                scanf("%d", &start_month);
                if (start_month > ORDER_LSIT_PROCESS_MONTH_MAX) {
                    puts(ERROR_MENU);
                    return;
                }
                puts(ORDER_LSIT_PROCESS_YEAR);
                scanf("%d", &start_year);

                puts(ORDER_LSIT_PROCESS_DATE_END);
                puts(ORDER_LSIT_PROCESS_DAY);
                scanf("%d", &end_day);
                if (end_day > ORDER_LSIT_PROCESS_DAY_MAX) {
                    puts(ERROR_MENU);
                    return;
                }
                puts(ORDER_LSIT_PROCESS_MONTH);
                scanf("%d", &end_month);
                if (end_month > ORDER_LSIT_PROCESS_MONTH_MAX) {
                    puts(ERROR_MENU);
                    return;
                }
                puts(ORDER_LSIT_PROCESS_YEAR);
                scanf("%d", &end_year);


                for (int i = 0; i < management->order_counter; i++) {
                    Order *order = management->order[i];
                    if (start_year > end_year) {
                        puts(ERROR_MENU);
                        return;
                    }
                    if ((order->registration_year > start_year || (order->registration_year == start_year && order->registration_month > start_month) || (order->registration_year == start_year && order->registration_month == start_month && order->registration_day >= start_day)) &&
                            (order->registration_year < end_year || (order->registration_year == end_year && order->registration_month < end_month) || (order->registration_year == end_year && order->registration_month == end_month && order->registration_day <= end_day))) {
                        printf(ORDER_LIST_PROCESS_DATE, start_day, start_month, start_year, end_day, end_month, end_year);
                        PrintOrders(order);
                    }
                }
                break;
            case 4:
                int order_id = ChooseOrder(management);
                if (order_id < 0 || order_id >= management->order_counter) {
                    puts(ERROR_ORDER_NOT_EXIST);
                    break;
                }

                printf(ORDER_LIST_STUFF_OBSERVATION, order_id);
                fgets(management->order[order_id]->observation, OBSERVATION_SIZE, stdin);

                size_t len = strlen(management->order[order_id]->observation);
                if (len > 0 && management->order[order_id]->observation[len - 1] == '\n') {
                    management->order[order_id]->observation[len - 1] = '\0';
                }

                puts(SUSCESS_ADD_OBSERVATION);
                break;
            case 0:
                break;
            default:
                puts(ERROR_MENU);
        }
    } while (menu != 0);
}
