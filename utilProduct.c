/**
 * @file utilProduct.c
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains utility functions specific to product management.
 */


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

int ChooseProcess(Management *management, int product_id){   
    ListProductsProcesses(management, product_id);
    int process_id = GetInt(MIN_SIZE, PROCESS_SIZE, MSG_GET_PROCESS);
    if(process_id < 0 || process_id > management->product[product_id]->process_counter){
        puts(ERROR_NO_PROCESS);
        return -1;
    }
    return process_id-1;
}






