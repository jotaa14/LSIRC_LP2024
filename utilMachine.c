#include "functions.h"

int GetMachinePosition(Management management, int number){
    int i;
    for (i=0; i<management.machine_counter; i++){
        if(management.machine[i]->id == number){
            return i;
        }
    }
    return -1;
}

int ChooseMachine(Management *management){
    ListMachines(management);
    int machine_choice = GetInt(MIN_SIZE, MACHINES_SIZE, MSG_GET_MACHINE);
    if(machine_choice < 0 || machine_choice > management->machine_counter){
        puts(ERROR_MACHINE_NOT_EXIST);
        return -1;
    }
    return machine_choice-1;
}