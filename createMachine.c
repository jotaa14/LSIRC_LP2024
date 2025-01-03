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
    if(management->machine_counter >= MACHINES_SIZE){
        puts(ERROR_MACHINES_REACHED);
        return;
    }
    management->machine[management->machine_counter] = malloc(sizeof(Machine));
    if(management->machine[management->machine_counter] == NULL) {
        puts(ERROR_MEMORY_ALLOCATION);
    }
    
    management->machine[management->machine_counter]->id = management->machine_counter + 1;
    
    puts(CREATE_MACHINE_NAME);
    fgets(management->machine[management->machine_counter]->name, MACHINE_NAME_SIZE, stdin);
    
    size_t len = strlen(management->machine[management->machine_counter]->name);
    if (len > 0 && management->machine[management->machine_counter]->name[len - 1] == '\n') {
        management->machine[management->machine_counter]->name[len - 1] = '\0';
    }
    
    puts(CREATE_MACHINE_TYPE);
    int machinetype = MachineTypeMenu();
    management->machine[management->machine_counter]->machinetype = (MachineType)machinetype;
    
    puts(CREATE_MACHINE_STATUS);
    int machinestatus = MachineStatusMenu();
    management->machine[management->machine_counter]->machinestatus = (MachineStatus)machinestatus;
    management->machine[management->machine_counter]->used_by_product=0;
    management->machine_counter++;
    puts(MACHINE_CREATED);
}