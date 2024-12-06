#include "functions.h"

void EditProduct(Management *management){
    int menu;
    ListProducts(management);
    int id = GetProductPosition(*management, GetInt(MIN_SIZE, PRODUCTS_SIZE, MSG_GET_PRODUCT));
    
    if(id==-1){
        puts(ERROR_PRODUCT_NOT_EXIST);
        return;
    }
    do{
        ProductEditMenuOutput();
        scanf("%d", &menu);
        ClearInputBuffer();
        switch(menu){
            case 1:
                printf(EDIT_PRODUCT_GET_NAME);
                fgets(ACCESS_TO_PRODUCT_NAME_BY_ID, PRODUCT_NAME_SIZE, stdin);
                size_t len = strlen(ACCESS_TO_PRODUCT_NAME_BY_ID);
                if (len > 0 && ACCESS_TO_PRODUCT_NAME_BY_ID[len - 1] == '\n') {
                    ACCESS_TO_PRODUCT_NAME_BY_ID[len - 1] = '\0';
                }
                break;
            case 2:
                puts(EDIT_PRODUCT_GET_CATEGORY);
                int category = ProductCategoryMenu();
                ACCESS_TO_PRODUCT_CATEGORY_BY_ID = (Category)category;
                break;
            case 3:
                ProductEditStatus(management, id);
                break;
            case 0:
                break;
            default:
                puts(ERROR_MENU);
                break;
        }
        
    }while(menu!=0);
}

void ProductEditStatus(Management *management, int id) {
    int menu;
    do {
        ProductEditStatusMenuOutput();
        scanf("%d", &menu);
        switch (menu) {
            case 1:
                strcpy(ACCESS_TO_PRODUCT_STATUS_BY_ID, "Active");
                break;
            case 2:
                strcpy(ACCESS_TO_PRODUCT_STATUS_BY_ID, "In Stock");
                break;
            case 3:
                strcpy(ACCESS_TO_PRODUCT_STATUS_BY_ID, "Sold Out");
                break;
            case 4:
                strcpy(ACCESS_TO_PRODUCT_STATUS_BY_ID, "Discontinued");
                break;
            case 5:
                strcpy(ACCESS_TO_PRODUCT_STATUS_BY_ID, "Inactive");
                break;
            case 0:
                break;
            default:
                puts(ERROR_MENU);
                break;
        }
    } while (menu<1 && menu>2);
}

void EditProcess(Management *management){
    int product_id, process_id;
    ListProducts(management);
    do{
        product_id = ChooseProduct(management);
        if(product_id==-1){
            puts(ERROR_PRODUCT_NOT_EXIST);
        }
    }while(product_id==-1);
    
    ListProductsProcesses(management, product_id);
    do{
        process_id = ChooseProcess(management, product_id);
        if(process_id==-1){
            puts(ERROR_PROCESS_NOT_EXIST);
        }
    }while(process_id==-1);
    
    
    
}
