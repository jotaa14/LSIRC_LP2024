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

int ChooseOrder(Management *management){
    ListOrders(management);
    int order_choice = GetInt(MIN_SIZE, ORDERS_SIZE, MSG_GET_ORDER);
    if(order_choice < 0 || order_choice > management->order_counter){
        puts(ERROR_NO_ORDERS);
        return -1;
    }
    return order_choice-1;
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

void UpdateTotalPurchasedProducts(Management *management, int id) {
    if (management->order[id]->statusorder == 3) {
        Order *order = management->order[id];

        for (int i = 0; i < PRODUCTS_SIZE; i++) {
            if (order->product[i] != NULL) {
                Product *product = order->product[i];

                product->total_selled -= order->product_quantity[i];

                if (product->total_selled < 0) {
                    product->total_selled = 0;
                }

                order->product[i] = NULL;
                order->product_quantity[i] = 0;
            }
        }
    }
}
