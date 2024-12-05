#include "functions.h"

void DeleteProduct(Management *management) {
    ListProducts(management);
    int id = GetProductPosition(*management, GetInt(MIN_SIZE, PRODUCTS_SIZE, MSG_GET_PRODUCT));

    if (id == -1) {
        puts(ERROR_PRODUCT_NOT_EXIST);
        return;
    }
    
    if (strcmp(ACCESS_TO_PRODUCT_STATUS_BY_ID, "Inactive") == 0) {
        
        free(ACCESS_TO_PRODUCT_BY_ID);

        //TODO: RESOLVER DELETE PROCESSES
        /*for(int j = 0; j<management->product[management->product_counter]->process_counter; j++){
            free(management->product[management->product_counter]->process[j]);
        }*/ 
        
        for (int i = id; i < ACCESS_TO_PRODUCT_COUNTER - 1; i++) {
            ACCESS_TO_PRODUCT_BY_I = management->product[i + 1];
            ACCESS_TO_PRODUCT_BY_I_ID = i + 1;
        }

        management->product[ACCESS_TO_PRODUCT_COUNTER - 1] = NULL;

        ACCESS_TO_PRODUCT_COUNTER--;

        puts(PRODUCT_DELETED);
    } else {
        puts(ERROR_DELETE_STATUS);
    }
}



void CleanDataProduct(Product *product) {
    ACCESS_PRODUCT_ID=0;
    strcpy(ACCESS_PRODUCT_NAME, "");
    ACCESS_PRODUCT_CATEGORY = 0;
    product->total_hours = 0;
    product->total_minutes = 0;
    product->total_seconds = 0;
    product->process_counter = 0;
    product->used_by_order = 0;
    product->searched = 0;
    product->pvp = 0;
    
    strcpy(ACCESS_PRODUCT_STATUS, "");
}

void CleanDataProcess(Process *process){
    process->id=0;
    process->machine = 0;
    process->process_hours = 0;
    process->process_minutes = 0;
    process->process_seconds = 0;
    strcpy(process->report, "");
    strcpy(process->status, "");
           
}
    