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
                //ACCESS_TO_PRODUCT_MACHINEID_BY_ID = GetInt(MIN_SIZE_MACHINE, MACHINES_SIZE, MSG_GET_MACHINE);
                break;
            case 4:
                //ACCESS_TO_PRODUCT_HOURS_WASTED_BY_ID = GetInt(MIN_HOURS_WASTED, MAX_HOURS_WASTED, MSG_GET_HOURS_WASTED);
                break;
            case 5:
               // ACCESS_TO_PRODUCT_MINUTES_WASTED_BY_ID = GetInt(MIN_MINUTES_WASTED, MAX_MINUTES_WASTED, MSG_GET_MINUTES_WASTED);
                break;
            case 6:
              //  ACCESS_TO_PRODUCT_SECONDS_WASTED_BY_ID = GetInt(MIN_SECONDS_WASTED, MAX_SECONDS_WASTED, MSG_GET_SECONDS_WASTED);
                break;
            case 7:
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