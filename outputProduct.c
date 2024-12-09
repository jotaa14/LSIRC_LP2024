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
    printf(PROCESS_ID, product->process[i]->id);
    printf(PROCESS_MACHINE, product->process[i]->machine->id);
    printf(PROCESS_TIME, product->process[i]->process_hours, product->process[i]->process_minutes, product->process[i]->process_seconds);
    printf(PROCESS_REPORT, product->process[i]->report);
    puts(MENU_BOTTOM);
}

void ListProductsProcesses(Management *management, int product_id){
    if(management->product_counter==0){
        puts(ERROR_NO_PRODUCTS);
        return;
    }
    if(management->product[product_id]->process_counter>0){
        for (int i = 0; i < management->product[product_id]->process_counter; i++) {
            PrintProductsProcess(management->product[product_id], i);
        }
    }else{
        puts(ERROR_NO_PROCESS);
    }
}

void PrintProducts(Product *product) {
    printf(PRODUCT_ID, ACCESS_PRODUCT_ID);
    printf(PRODUCT_NAME, ACCESS_PRODUCT_NAME);
    printf(PRODUCT_CATEGORY, PrintProductCategory(ACCESS_PRODUCT_CATEGORY));
    printf(PRODUCT_TOTAL_TIME, product->total_hours, product->total_minutes, product->total_seconds);
    printf(PRODUCT_STATUS, ACCESS_PRODUCT_STATUS);
    printf(PRODUCT_SELLED, product->total_selled);
    printf(PRODUCT_PVP, product->pvp);
    puts(MENU_BOTTOM);
}

void ListProducts(Management *management) {
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
    if (ACCESS_TO_PRODUCT_COUNTER > 0){
        int category;
        category = ProductCategoryMenu();
        for(int id = 0; id<ACCESS_TO_PRODUCT_COUNTER;id++){
            if(ACCESS_TO_PRODUCT_CATEGORY_BY_ID==category){
                PrintProducts(ACCESS_TO_PRODUCT_BY_ID);
            }
        }
    }else{
        puts(ERROR_NO_PRODUCTS);
    }
}

void ListProductsByHighestDemand(Management *management){
    if (management->product_counter <= 0) {
        puts(ERROR_NO_PRODUCTS);
        return;
    }

    int product_indices[PRODUCTS_SIZE];
    for (int i = 0; i < management->product_counter; i++) {
        product_indices[i] = i;
    }

    for (int i = 0; i < management->product_counter - 1; i++) {
        for (int j = i + 1; j < management->product_counter; j++) {
            Product *product_i = management->product[product_indices[i]];
            Product *product_j = management->product[product_indices[j]];

            if (product_j->total_selled > product_i->total_selled) {
                int temp = product_indices[i];
                product_indices[i] = product_indices[j];
                product_indices[j] = temp;
            }
        }
    }

    
    for (int i = 0; i < management->product_counter; i++) {
        Product *product = management->product[product_indices[i]];
        PrintProducts(product);
    }
}
