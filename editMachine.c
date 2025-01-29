/**
 * @file editMachine.c
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains functions for editing machine details.
 */


#include "functions.h"

void EditMachine (Management *management){
    int menu;
    ListAllMachines(management);
    if(ACCESS_TO_MACHINE_COUNTER==0){
        return;
    }
    int id = GetMachinePosition(*management, GetInt(MIN_SIZE, MACHINES_SIZE, MSG_GET_MACHINE));
    
    if(id==-1){
        puts(ERROR_MACHINE_NOT_EXIST);
        return;
    }
    
    do{
        MachineEditMenuOutput();
        scanf("%d", &menu);
        ClearInputBuffer();
        switch(menu){
            case 1:
                puts(EDIT_MACHINE_GET_NAME);
                fgets(ACCESS_TO_MACHINE_NAME_BY_ID, MACHINE_NAME_SIZE, stdin);
                size_t len = strlen(ACCESS_TO_MACHINE_NAME_BY_ID);
                if (len > 0 && ACCESS_TO_MACHINE_NAME_BY_ID[len - 1] == '\n') {
                    ACCESS_TO_MACHINE_NAME_BY_ID[len - 1] = '\0';
                }
                puts(SUCCESS_EDIT_MACHINE_NAME);
                break;
            case 2:
                puts(EDIT_MACHINE_GET_TYPE);
                int machinetype = MachineTypeMenu();
                ACCESS_TO_MACHINE_TYPE_BY_ID = (MachineType)machinetype;
                puts(SUCCESS_EDIT_MACHINE_TYPE);
                break;
            case 3:
                puts(EDIT_MACHINE_GET_STATUS);
                int machinestatus = MachineStatusMenu();
                ACCESS_TO_MACHINE_STATUS_BY_ID = (MachineStatus)machinestatus;
                puts(SUCCESS_EDIT_MACHINE_STATUS);
                break;
            case 0:
                break;
            default:
                puts(ERROR_MENU);
                break;
        }
        
    }while(menu!=0);
}
