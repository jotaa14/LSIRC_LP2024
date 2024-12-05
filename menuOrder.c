#include "functions.h"

void OrderMenu(Management *management) {
    int menu;
    do {
        OrderMenuOutput();
        scanf("%d", &menu);
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

        if (priority < 1 || priority > 3) {
            puts(ERROR_MENU);
        }
    } while (priority < 1 || priority > 3);

    return priority - 1;
}

int OrderStatusMenu() {
    int status;
    do {
        OrderStatusMenuOutput();
        scanf("%d", &status);

        if (status < 1 || status > 3) {
            puts(ERROR_MENU);
        }
    } while (status < 1 || status > 3);

    return status - 1;
}

void OrderListMenu(Management *management) {
    int menu;
    do {
        OrderListMenuOuput();
        scanf("%d", &menu);
        switch (menu) {
            case 1:
                ListOrders(management);
                break;
            case 2:
                //ListOrdersByName(management);
                break;
            case 3:
                //ListOrdersByPriority(management);
                break;

            case 0:
                break;

        }
    } while (menu != 0);
}

void ListOrdersByName(Management *management){
    
}

void ListOrdersByPriority(Management *management){
    
}