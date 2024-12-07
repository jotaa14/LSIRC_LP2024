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
                if(management->order[id]->statusorder != 3){
                    management->order[id]->fulfillment = GetInt(MIN_FULFILLMENT_VALUE, MAX_FULFILLMENT_VALUE, GET_ORDER_FULFILLMENT_VALUE);
                    AssociateStatusToFulfillment (management, id);
                }else{
                 puts(ERROR_ORDER_ALREADY_CANCELED);   
                }
                break;
            case 3:
                if(management->order[id]->fulfillment==0){
                    int statusorder = 3;
                    management->order[id]->statusorder = (StatusOrder) statusorder;
                }else{
                    puts(ERROR_STATUS_CANCELED_CANNOT_BE_SELECTED);
                }
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
