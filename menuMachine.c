/**
 * @file menuMachine.c
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains the menu functionality for managing machines.
 */


#include "functions.h"

void MachineMenu(Management *management) {
    int menu;
    do {
        MachineMenuOutput();
        scanf("%d", &menu);
        ClearInputBuffer();
        switch (menu) {
            case 1:
                CreateMachine(management);
                break;
            case 2:
                EditMachine(management);
                break;
            case 3:
                DeleteMachine(management);
                break;
            case 4:
                ListAllMachines(management);
                break;
            case 0:
                break;
            default:
                puts(ERROR_MENU);
                break;
        }
    } while (menu != 0);
}

int MachineTypeMenu() {
    int type;
    do {
        MachineTypeMenuOutput();
        scanf("%d", &type);
        ClearInputBuffer();
        if (type < 1 || type > 7) {
            puts(ERROR_MENU);
        }
    } while (type < 1 || type > 7);

    return type - 1;
}

int MachineStatusMenu() {
    int status;
    do {
        MachineStatusMenuOutput();
        scanf("%d", &status);
        ClearInputBuffer();
        if (status < 1 || status > 3) {
            puts(ERROR_MENU);
        }
    } while (status < 1 || status > 3);

    return status - 1;
}