#include "functions.h"

void EditCustomer(Management *management) {
    int menu;
    ListCustomers(management);
    if(management->customer_counter==0){
        return;
    }
    int id = GetCustomerPosition(*management, GetInt(MIN_CUSTOMERS_SIZE, CUSTOMERS_SIZE, CUSTOMER_ID));

    if (id == -1) {
        puts(ERROR_CUSTOMER_EMPTY);
        return;
    }
    do {
        CustomerEditMenuOutput();
        scanf("%d", &menu);
        ClearInputBuffer();
        switch (menu) {
            case 1:
                puts(CUSTOMER_NAME);
                fgets(management->customer[id]->name, CUSTOMER_NAME_SIZE, stdin);
                size_t len = strlen(management->customer[id]->name);
                if (len > 0 && management->customer[id]->name[len - 1] == '\n') {
                    management->customer[id]->name[len - 1] = '\0';
                }
                break;
            case 2:
                management->customer[id]->phone_number = GetInt(CUSTOMER_PHONE_NUMBER_SIZE_MIN, CUSTOMER_PHONE_NUMBER_SIZE_MAX, CUSTOMER_PHONE_NUMBER);
                break;
            case 3:
                puts(CUSTOMER_EMAIL);
                fgets(management->customer[id]->email, CUSTOMER_EMAIL_SIZE, stdin);
                size_t leni = strlen(management->customer[id]->email);
                if (leni > 0 && management->customer[id]->email[leni - 1] == '\n') {
                    management->customer[id]->email[leni - 1] = '\0';
                }                
		break;
            case 4:
                management->customer[id]->nif = GetInt(CUSTOMER_NIF_SIZE_MIN, CUSTOMER_NIF_SIZE_MAX, CUSTOMER_NIF);
                break;
            case 5:
                CustomerEditStatus(management, id);
                break;
            case 0:
                break;
            default:
                puts(ERROR_MENU);
                break;
        }

    } while (menu != 0);
}

void CustomerEditStatus(Management *management, int id) {
    int menu;
    do {
        CustomerEditStatusMenuOutput();
        scanf("%d", &menu);
        ClearInputBuffer();
        switch (menu) {
            case 1:
                strcpy(management->customer[id]->status, "Active");
                break;
            case 2:
                strcpy(management->customer[id]->status, "Inactive");
                break;
            case 0:
                break;
            default:
                puts(ERROR_MENU);
                break;
        }
    }while (menu != 0);
}
