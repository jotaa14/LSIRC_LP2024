/**
 * @file utilMachine.c
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains utility functions specific to machine management.
 */


#include "functions.h"

int GetMachinePosition(Management management, int number){
    int i;
    for (i=0; i<ACCESS_TO_MACHINE_COUNTER_1; i++){
        if(ACCESS_TO_MACHINE_ID_BY_I_1 == number){
            return i;
        }
    }
    return -1;
}

int ChooseMachine(Management *management){
    ListMachines(management);
    int machine_choice = GetInt(MIN_SIZE, MACHINES_SIZE, MSG_GET_MACHINE);
    if(machine_choice < 0 || machine_choice > ACCESS_TO_MACHINE_COUNTER){
        puts(ERROR_MACHINE_NOT_EXIST);
        return -1;
    }
    return machine_choice-1;
}