#include "functions.h"

void EditOrder (Management *management){
    int menu;
    ListOrders(management);
    if(management->order_counter==0){
        return;
    }
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
                puts(EDIT_ORDER_GET_PRIORITY);
                int priority = OrderPriorityMenu();
                management->order[id]->priority = (Priority)priority;
                break;
            case 2:
                int statusorder;
                puts(EDIT_ORDER_GET_STATUS);
                do{
                    statusorder = OrderStatusMenu();
                    management->order[id]->statusorder = (StatusOrder)statusorder;
                    if(statusorder==3 && management->order[id]->fulfillment>0){
                        puts(ERROR_STATUS_CANCELED_CANNOT_BE_SELECTED);
                        statusorder=-1;
                    }
                }while(statusorder=-1);
                break;
            case 3:
                management->order[id]->fulfillment = GetInt(MIN_FULFILLMENT_VALUE, MAX_FULFILLMENT_VALUE, GET_ORDER_FULFILLMENT_VALUE);
                break;
            case 4:
                
                break;
            case 5:
                
                break;
            case 0:
                break;
            default:
                puts(ERROR_MENU);
                break;
        }
    }while(menu!=0);
    
}
