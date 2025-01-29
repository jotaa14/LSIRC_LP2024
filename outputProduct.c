/**
 * @file outputProduct.c
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains functions for outputting product information.
 */


#include "functions.h"

char* PrintProductCategory(Category category) {
    switch (category) {
        case Industrial: return "Industrial";
        case Automobile: return "Automobile";
        case Aeronautical: return "Aeronautical";
        case Construction: return "Construction";
        case Furniture: return "Furniture";
        case Packages: return "Packages";
        case Undefined: return "Undefined";
    }
}

void PrintProductsProcess(Product *product, int i) {
    puts(MENU_BOTTOM);
    printf(PROCESS_ID, ACCESS_PROCESS_I_ID);
    printf(PROCESS_MACHINE, ACCESS_PROCESS_I_MACHINE_ID);
    printf(PROCESS_TIME, ACCESS_PROCESS_I_HOURS, ACCESS_PROCESS_I_MINUTES, ACCESS_PROCESS_I_SECONDS);
    printf(PROCESS_REPORT, ACCESS_PROCESS_I_REPORT);
    puts(MENU_BOTTOM);
}

void ListProductsProcesses(Management *management, int product_id) {
    if (ACCESS_TO_PRODUCT_COUNTER == 0) {
        puts(ERROR_NO_PROCESS);
        return;
    }
    if (ACCESS_TO_PRODUCT_PROCESS_COUNTER_BY_PRODUCT_ID > 0) {
        for (int i = 0; i < ACCESS_TO_PRODUCT_PROCESS_COUNTER_BY_PRODUCT_ID; i++) {
            PrintProductsProcess(ACCESS_TO_PRODUCT_BY_PRODUCT_ID, i);
        }
    } else {
        puts(ERROR_NO_PROCESS);
    }
}

void PrintProducts(Product *product) {
    printf(PRODUCT_ID, ACCESS_PRODUCT_ID);
    printf(PRODUCT_NAME, ACCESS_PRODUCT_NAME);
    printf(PRODUCT_CATEGORY, PrintProductCategory(ACCESS_PRODUCT_CATEGORY));
    printf(PRODUCT_TOTAL_TIME, ACCESS_PRODUCT_TOTAL_HOURS, ACCESS_PRODUCT_TOTAL_MINUTES, ACCESS_PRODUCT_TOTAL_SECONDS);
    printf(PRODUCT_STATUS, ACCESS_PRODUCT_STATUS);
    printf(PRODUCT_SELLED, ACCESS_PRODUCT_TOTAL_SELLED);
    printf(PRODUCT_PVP, ACCESS_PRODUCT_PVP);
    puts(MENU_BOTTOM);
}

void ListProducts(Management *management) {
    if (ACCESS_TO_PRODUCT_COUNTER > 0) {
        int found = 0;
        for (int id = 0; id < ACCESS_TO_PRODUCT_COUNTER; id++) {
            if(ACCESS_TO_PRODUCT_STATUS_NUM_BY_ID==0 || ACCESS_TO_PRODUCT_STATUS_NUM_BY_ID==1){
                PrintProducts(ACCESS_TO_PRODUCT_BY_ID);
                found = 1;
            }    
        }
        if (!found) {
            puts(ERROR_NO_PRODUCTS);
            return;
        }
    } else {
        puts(ERROR_NO_PRODUCTS);
        return;
    }
}

void ListAllProducts(Management *management) {
    if (ACCESS_TO_PRODUCT_COUNTER > 0) {
        int found = 0;
        for (int id = 0; id < ACCESS_TO_PRODUCT_COUNTER; id++) {
                PrintProducts(ACCESS_TO_PRODUCT_BY_ID);
                found = 1;    
        }
        if (!found) {
            puts(ERROR_NO_PRODUCTS);
            return;
        }
    } else {
        puts(ERROR_NO_PRODUCTS);
        return;
    }
}

void ListProductsByCategories(Management *management) {
    if (ACCESS_TO_PRODUCT_COUNTER > 0) {
        int category;
        category = ProductCategoryMenu();
        for (int id = 0; id < ACCESS_TO_PRODUCT_COUNTER; id++) {
            if (ACCESS_TO_PRODUCT_CATEGORY_BY_ID == category) {
                PrintProducts(ACCESS_TO_PRODUCT_BY_ID);
            }
        }
    } else {
        puts(ERROR_NO_PRODUCTS);
    }
}

void ListProductsByHighestDemand(Management *management) {
    if (ACCESS_TO_PRODUCT_COUNTER <= 0) {
        puts(ERROR_NO_PRODUCTS);
        return;
    }

    int product_indices[PRODUCTS_SIZE];
    for (int i = 0; i < ACCESS_TO_PRODUCT_COUNTER; i++) {
        product_indices[i] = i;
    }

    for (int i = 0; i < ACCESS_TO_PRODUCT_COUNTER - 1; i++) {
        for (int j = i + 1; j < ACCESS_TO_PRODUCT_COUNTER; j++) {
            Product *product_i = ACCESS_PRODUCT[product_indices[i]];
            Product *product_j = ACCESS_PRODUCT[product_indices[j]];

            if (product_j->total_selled > product_i->total_selled) {
                int temp = product_indices[i];
                product_indices[i] = product_indices[j];
                product_indices[j] = temp;
            }
        }
    }


    for (int i = 0; i < ACCESS_TO_PRODUCT_COUNTER; i++) {
        Product *product = ACCESS_PRODUCT[product_indices[i]];
        PrintProducts(product);
    }
}

void ListProductsByName(Management *management) {
    if (ACCESS_TO_PRODUCT_COUNTER <= 0) {
        puts(ERROR_NO_PRODUCTS);
        return;
    }

    Product * sorted_products[ACCESS_TO_PRODUCT_COUNTER];
    for (int i = 0; i < ACCESS_TO_PRODUCT_COUNTER; i++) {
        sorted_products[i] = ACCESS_PRODUCT[i];
    }

    for (int i = 0; i < ACCESS_TO_PRODUCT_COUNTER - 1; i++) {
        for (int j = 0; j < ACCESS_TO_PRODUCT_COUNTER - i - 1; j++) {
            if (strcmp(sorted_products[j]->name, sorted_products[j + 1]->name) > 0) {
                Product *temp = sorted_products[j];
                sorted_products[j] = sorted_products[j + 1];
                sorted_products[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < ACCESS_TO_PRODUCT_COUNTER; i++) {
        PrintProducts(sorted_products[i]);
    }
}

void ListProductsByPrice(Management *management) {
    if (ACCESS_TO_PRODUCT_COUNTER <= 0) {
        puts(ERROR_ORDER_NOT_EXIST);
        return;
    }

    Product *sorted_products[ACCESS_TO_PRODUCT_COUNTER];
    for (int i = 0; i < ACCESS_TO_PRODUCT_COUNTER; i++) {
        sorted_products[i] = ACCESS_TO_PRODUCT_BY_I;
    }

    for (int i = 0; i < ACCESS_TO_PRODUCT_COUNTER - 1; i++) {
        for (int j = 0; j < ACCESS_TO_PRODUCT_COUNTER - i - 1; j++) {
            if (sorted_products[j]->pvp < sorted_products[j + 1]->pvp) {
                Product *temp = sorted_products[j];
                sorted_products[j] = sorted_products[j + 1];
                sorted_products[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < ACCESS_TO_PRODUCT_COUNTER; i++) {
        PrintProducts(sorted_products[i]);
    }
}
