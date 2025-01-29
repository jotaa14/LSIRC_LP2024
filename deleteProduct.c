/**
 * @file deleteProduct.c
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains functions for deleting existing products.
 */


#include "functions.h"

void DeleteProduct(Management *management) {
    ListAllProducts(management);
    if (ACCESS_TO_PRODUCT_COUNTER == 0) {
        return;
    }
    int id = GetProductPosition(*management, GetInt(MIN_SIZE, PRODUCTS_SIZE, MSG_GET_PRODUCT));

    if (id == -1) {
        puts(ERROR_PRODUCT_NOT_EXIST);
        return;
    }

    if (strcmp(ACCESS_TO_PRODUCT_STATUS_BY_ID, "Inactive") == 0) {
            for (int j = 0; j < ACCESS_TO_PRODUCT_PROCESS_COUNTER_BY_ID; j++) {
                free(ACCESS_TO_PROCESS_J_BY_PRODUCT_ID);
            }
            free(ACCESS_TO_PRODUCT_BY_ID);
            for (int i = id; i < ACCESS_TO_PRODUCT_COUNTER - 1; i++) {
                ACCESS_TO_PRODUCT_BY_I = ACCESS_PRODUCT[i + 1];
                ACCESS_TO_PRODUCT_BY_I_ID = i + 1;
            }

            ACCESS_PRODUCT[ACCESS_TO_PRODUCT_COUNTER - 1] = NULL;

            ACCESS_TO_PRODUCT_COUNTER--;

            puts(PRODUCT_DELETED);
    } else {
        puts(ERROR_DELETE_STATUS);
    }
}