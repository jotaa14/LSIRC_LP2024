/**
 * @file deleteMachine.c
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains functions for deleting machines.
 */


#include "functions.h"

void DeleteMachine(Management *management) {
    ListAllMachines(management);
    if(ACCESS_TO_MACHINE_COUNTER==0){
        return;
    }
    int id = GetMachinePosition(*management, GetInt(MIN_SIZE, PRODUCTS_SIZE, MSG_GET_PRODUCT));

    if (id == -1) {
        puts(ERROR_MACHINE_NOT_EXIST);
        return;
    }
    
    if (ACCESS_TO_MACHINE_STATUS_BY_ID == 2) {
            free(ACCESS_TO_MACHINE_BY_ID);


            for (int i = id; i < ACCESS_TO_MACHINE_COUNTER - 1; i++) {
                ACCESS_TO_MACHINE_BY_I = ACCESS_TO_MACHINE[i + 1];
                ACCESS_TO_MACHINE_ID_BY_I = i + 1;
            }

            ACCESS_TO_MACHINE[ACCESS_TO_MACHINE_COUNTER - 1] = NULL;

            ACCESS_TO_MACHINE_COUNTER--;

            puts(MACHINE_DELETED);
    } else {
        puts(ERROR_DELETE_STATUS);
    }
}


