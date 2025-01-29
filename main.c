/**
 * @file main.c
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains the main entry point of the program.
 */


#include "functions.h"

int main() {
    
    const char *filename = "management_data.bin";
    Management *management;
    management = NULL;
    if(management==NULL){
        management = malloc(1 * sizeof(Management));
        management->product_counter=0;
        management->machine_counter=0;
        management->order_counter=0;
        management->customer_counter=0;
    }
    
    LoadManagementFromFile(management, filename);
    
    Menu(management);
    SaveManagementToFile(management, filename);
    free(management);
    
    return (EXIT_SUCCESS);
}