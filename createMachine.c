/**
 * @file createMachine.c
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains functions for creating new machines.
 */


#include "functions.h"

void CreateMachine (Management *management){
    if(ACCESS_TO_MACHINE_COUNTER >= MACHINES_SIZE){
        puts(ERROR_MACHINES_REACHED);
        return;
    }
    ACCESS_TO_MACHINE_BY_MACHINE_COUNTER = malloc(sizeof(Machine)*100);
    if(ACCESS_TO_MACHINE_BY_MACHINE_COUNTER == NULL) {
        puts(ERROR_MEMORY_ALLOCATION);
    }
    ACCESS_TO_MACHINE_USED_BY_PRODUCT_BY_MACHINE_COUNTER=0;
    ACCESS_TO_MACHINE_ID_BY_MACHINE_COUNTER=0;
    
    ACCESS_TO_MACHINE_ID_BY_MACHINE_COUNTER = ACCESS_TO_MACHINE_COUNTER + 1;
    
    puts(CREATE_MACHINE_NAME);
    fgets(ACCESS_TO_MACHINE_NAME_BY_MACHINE_COUNTER, MACHINE_NAME_SIZE, stdin);
    
    size_t len = strlen(ACCESS_TO_MACHINE_NAME_BY_MACHINE_COUNTER);
    if (len > 0 && ACCESS_TO_MACHINE_NAME_BY_MACHINE_COUNTER[len - 1] == '\n') {
        ACCESS_TO_MACHINE_NAME_BY_MACHINE_COUNTER[len - 1] = '\0';
    }
    
    puts(CREATE_MACHINE_TYPE);
    int machinetype = MachineTypeMenu();
    ACCESS_TO_MACHINE_TYPE_BY_MACHINE_COUNTER = (MachineType)machinetype;
    
    puts(CREATE_MACHINE_STATUS);
    int machinestatus = MachineStatusMenu();
    ACCESS_TO_MACHINE_STATUS_BY_MACHINE_COUNTER = (MachineStatus)machinestatus;
    ACCESS_TO_MACHINE_COUNTER++;
    puts(MACHINE_CREATED);
}