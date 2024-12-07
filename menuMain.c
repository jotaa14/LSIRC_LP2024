#include "functions.h"

void Menu(Management *management) {
    int menu;
    do {
        MenuOutput();
        scanf("%d", &menu);
        ClearInputBuffer();
        switch (menu) {
            case 1:
                ProductMenu(management);
                break;
            case 2:
                CustomerMenu(management);
                break;
            case 3:
                OrderMenu(management);
                break;
            case 4:
                MachineMenu(management);
                break;
            case 0:
                break;
            default:
                puts(ERROR_MENU);
                break;
        }
    } while (menu != 0);
}

