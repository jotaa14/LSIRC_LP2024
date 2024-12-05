#include "functions.h"

int GetProductPosition(Management management, int number){
    int i;
    for (i=0; i<ACCESS_TO_PRODUCT_COUNTER_UTIL; i++){
        if(ACCESS_TO_PRODUCT_BY_I_ID_UTIL == number){
            return i;
        }
    }
    return -1;
}

int ChooseProduct(Management *management){
    ListProducts(management);
    int product_choice = GetInt(MIN_SIZE, PRODUCTS_SIZE, MSG_GET_PRODUCT);
    if(product_choice < 0 || product_choice > management->product_counter){
        puts(ERROR_NO_PRODUCTS);
        return -1;
    }
    return product_choice-1;
}








