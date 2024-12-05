#include "functions.h"

void EditOrder (Management *management){
    int menu;
    ListOrders(management);
    int id = GetOrderPosition(*management, GetInt(MIN_SIZE, ORDERS_SIZE, MSG_GET_ORDER));
    
    if(id==-1){
        puts(ERROR_ORDER_NOT_EXIST);
        return;
    }
    
    do{
        OrderEditMenuOutput();
        scanf("%d", &menu);
        ClearInputBuffer();
        switch(menu){
            case 1:
                management->order[id]->registration_day = GetInt(MIN_DATE_DAY, MAX_DATE_DAY, GET_ORDER_DATE_DAY);
                break;
            case 2:
                management->order[id]->registration_month = GetInt(MIN_DATE_MONTH, MAX_DATE_MONTH, GET_ORDER_DATE_MONTH);
                break;
            case 3:
                management->order[id]->registration_year = GetInt(MIN_DATE_YEAR, MAX_DATE_YEAR, GET_ORDER_DATE_YEAR);
                break;
            case 4:
                puts(EDIT_ORDER_GET_PRIORITY);
                int priority = OrderPriorityMenu();
                management->order[id]->priority = (Priority)priority;
                break;
            case 5:
                puts(EDIT_ORDER_GET_STATUS);
                int statusorder = OrderStatusMenu();
                management->order[id]->statusorder = (StatusOrder)statusorder;
                break;
            case 6:
                management->order[id]->fulfillment = GetInt(MIN_FULFILLMENT_VALUE, MAX_FULFILLMENT_VALUE, GET_ORDER_FULFILLMENT_VALUE);
                break;
            case 7:
                
                break;
            case 8:
                
                break;
            case 0:
                break;
            default:
                puts(ERROR_MENU);
                break;
        }
    }while(menu!=0);
    
}