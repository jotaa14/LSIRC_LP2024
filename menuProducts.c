/**
 * @file menuProducts.c
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains the menu functionality for managing products.
 */


#include "functions.h"

void ProductMenu(Management *management) {
    int menu;
    do {
        ProductMenuOutput();
        scanf("%d", &menu);
        ClearInputBuffer();
        switch (menu) {
            case 1:
                CreateProduct(management);
                break;
            case 2:
                EditProduct(management);
                break;
            case 3:
                EditProcess(management);
                break;
            case 4:
                DeleteProduct(management);
                break;
            case 5:
                ProductListMenu(management);
                break;
            case 0:
                break;
            default:
                puts(ERROR_MENU);
                break;
        }
    } while (menu != 0);
}

void ProductListMenu(Management *management) {
    int menu;
    do {
        ProductListMenuOutput();
        scanf("%d", &menu);
        ClearInputBuffer();
        switch (menu) {
            case 1:
                ListAllProducts(management);
                break;
            case 2:
                ListProductsByCategories(management);
                break;
            case 3:
                int product_id = ChooseProduct(management);
                if(product_id == -1){
                    return;
                }
                ListProductsProcesses(management, product_id);
                break;
            case 4:
                ListProductsByHighestDemand(management);
                break;
            case 5:
                ListProductsByName(management);
                break;
            case 6:
                ListProductsByPrice(management);
                break;
            case 0:
                break;
            default:
                puts(ERROR_MENU);
                break;
        }
    } while (menu != 0);
}

int ProductCategoryMenu() {
    int category;
    do {
        ProductCategoryMenuOutput();
        scanf("%d", &category);
        ClearInputBuffer();
        if (category < 1 || category > 7) {
            puts(ERROR_MENU);
        }
    } while (category < 1 || category > 7);

    return category - 1;
}

