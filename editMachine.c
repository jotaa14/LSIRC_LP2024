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
    if(management->machine_counter==0){
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
                fgets(management->machine[id]->name, MACHINE_NAME_SIZE, stdin);
                size_t len = strlen(management->machine[id]->name);
                if (len > 0 && management->machine[id]->name[len - 1] == '\n') {
                    management->machine[id]->name[len - 1] = '\0';
                }
                puts(SUCCESS_EDIT_MACHINE_NAME);
                break;
            case 2:
                puts(EDIT_MACHINE_GET_TYPE);
                int machinetype = MachineTypeMenu();
                management->machine[id]->machinetype = (MachineType)machinetype;
                puts(SUCCESS_EDIT_MACHINE_TYPE);
                break;
            case 3:
                puts(EDIT_MACHINE_GET_STATUS);
                int machinestatus = MachineStatusMenu();
                management->machine[id]->machinestatus = (MachineStatus)machinestatus;
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
