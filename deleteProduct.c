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

        for(int j = 0; j<management->product[id]->process_counter; j++){
            free(management->product[id]->process[j]);
        }
        
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
