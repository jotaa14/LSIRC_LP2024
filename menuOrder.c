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
