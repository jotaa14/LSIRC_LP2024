#include "functions.h"

void DeleteMachine(Management *management) {
    ListMachines(management);
    if(management->machine_counter==0){
        return;
    }
    int id = GetMachinePosition(*management, GetInt(MIN_SIZE, PRODUCTS_SIZE, MSG_GET_PRODUCT));

    if (id == -1) {
        puts(ERROR_MACHINE_NOT_EXIST);
        return;
    }

    if (management->machine[id]->machinestatus == 2) {
        if (management->machine[id]->used_by_product == 0) {
            free(management->machine[id]);


            for (int i = id; i < management->machine_counter - 1; i++) {
                management->machine[i] = management->machine[i + 1];
                management->machine[i]->id = i + 1;
            }

            management->machine[management->machine_counter - 1] = NULL;

            management->machine_counter--;

            puts(PRODUCT_DELETED);
        } else {

        }
    } else {
        puts(ERROR_DELETE_STATUS);
    }
}


