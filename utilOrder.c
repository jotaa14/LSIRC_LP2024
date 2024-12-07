#include "functions.h"

int GetOrderPosition(Management management, int number){
    int i;
    for (i=0; i<management.order_counter; i++){
        if(management.order[i]->orderid == number){
            return i;
        }
    }
    return -1;
}

void AssociateStatusToFulfillment (Management *management, int id){
    int statusorder;
    if(management->order[id]->fulfillment == 0){
    statusorder = 0;
    management->order[id]->statusorder = (StatusOrder) statusorder;
    } else if(management->order[id]->fulfillment > 0 && management->order[id]->fulfillment < 100){
    statusorder = 1;
    management->order[id]->statusorder = (StatusOrder) statusorder;    
    } else if(management->order[id]->fulfillment == 100){
    statusorder = 2;
    management->order[id]->statusorder = (StatusOrder) statusorder;    
    }  
}
