/**
 * @file files.c
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains functions for saving and loading program data to and from files.
 */


#include "functions.h"

/*void LoadDataProduct (Management *management, char *filename){
    int i, success_product=0, success_machine=0, success_order=0, success_customer=0;
    FILE *fp = fopen(filename, "rb");
    
    fread(&management->product_counter, sizeof (int), 1, fp);
    fread(&management->order_counter, sizeof (int), 1, fp);
    fread(&management->machine_counter, sizeof (int), 1, fp);
    fread(&management->customer_counter, sizeof (int), 1, fp);
    
    if(management->product_counter > 0){
        management->product = (Product*) calloc(management->product_counter, sizeof (Product));
        for (i=0; i < management->product_counter; i++){
            fread(&management->product[i], sizeof(Product), 1, fp);
            if(management->product[i]->process_counter>0){
                management->product[i]->process = (Process*) alloc_in_array(management->product[i]->process_counter);
                fread(management->product[i]->process, sizeof(Process),management->product[i]->process_counter,fp);
            }
            
        }
        success_product = 1;
    }
    fclose(fp);
    
    if(!success_product){
        fp = fopen(filename, "wb");
        if(fp != NULL){
            management->product = (Product*) calloc(management->product_counter, sizeof(Product));
            management->product_counter = 0;
            fclose(fp);
        }
    }
    return management;
}

void *alloc_in_array (int size){
    return (Process*) calloc(size, sizeof(Process));
}*/

//Management *InitLoadData (Management *management){
    /*management->product = NULL;
    management->machine = NULL;
    management->order = NULL;
    management->customer = NULL;
    management->customer_counter=0;
    management->machine_counter=0;
    management->order_counter=0;
    management->product_counter=0;*/
    /*management = ProductLoad(management, FILENAME_PRODUCTS);
}

Management *ProductLoad(Management *management, char *filename){
    FILE *fp = fopen(filename, "rb");
    if (fp == NULL) {
        puts("Sem dados.");
        return management; 
    }
    
    fread(&PRODUCTS_SIZE, sizeof(int), 1, fp);
    if (PRODUCTS_SIZE > 0) {
        management->product = (Product *) calloc(PRODUCTS_SIZE, sizeof(Product));
        for (int i = 0; i < PRODUCTS_SIZE; i++) {
            fread(&management->product[i], sizeof(Product), 1, fp);
            if (management->product[i]->process != 0) {
                management->product[i]->process =
                    AllocProcessArray(management->product[i]->process);
                fread(management->product[i]->process,
                      sizeof(Process),
                      management->product[i]->process,
                      fp);
            }
        }
    }

    fclose(fp);
    return management;
}

Process *AllocProcessArray(int size) {
    return (Process *) calloc(size, sizeof(Process));
}
*/