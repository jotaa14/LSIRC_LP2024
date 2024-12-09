#include "functions.h"

char* PrintOrderPriority(Priority priority) {
    switch (priority) {
        case PRIORITY_LOW: return "Low";
        case PRIORITY_MEDIUM: return "Medium";
        case PRIORITY_HIGH: return "High";
    }
}

char* PrintOrderStatus(StatusOrder statusorder) {
    switch (statusorder) {
        case STATUS_OPEN: return "Open";
        case STATUS_PRODUCTION: return "Production";
        case STATUS_CLOSED : return "Closed";
        case STATUS_CANCELED : return"Canceled";
    }
}

int PrintOrders(Order *order){
    puts(ORDER_PRINTED_HEADER);
    printf(ORDER_ID, order->orderid);
    printf(ORDER_DATE, order->registration_day, order->registration_month, order->registration_year );
    printf(ORDER_PRIORITY, PrintOrderPriority(order->priority));
    printf(ORDER_STATUS, PrintOrderStatus(order->statusorder));
    printf(ORDER_FULFILLMENT, order->fulfillment);
    printf(ORDER_CUSTOMER, order->customer->id);
    printf(ORDER_CUSTOMER_PHONE_NUMBER, order->customer->phone_number);
    printf(ORDER_PVP, order->order_pvp);
    puts(MENU_BOTTOM);
}

void ListOrders(Management *management) {
    if(management->order_counter > 0){
        int found = 0;
        for(int id = 0; id < management->order_counter; id++){
            PrintOrders(management->order[id]);
            found = 1;
        }
        if(!found){
            puts(ERROR_ORDER_NOT_EXIST);
            return;
        }
    }else{
        puts(ERROR_ORDER_NOT_EXIST);
        return;
    }
}

void DisplayOrderDetails(Management *management) {
    if (management->order_counter <= 0) {
        puts(ERROR_NO_ORDERS);
        return;
    }

    int order_id = ChooseOrder(management);

    if (order_id < 0 || order_id > management->order_counter) {
        puts(ERROR_ORDER_NOT_EXIST);
        return;
    }

    Order *selected_order = management->order[order_id];
    
    PrintOrders(management->order[order_id]);
    bool has_products = false;
    puts(ORDER_PRODUCTS);
    printf(MENU_BOTTOM);
    for (int i = 0; i < PRODUCTS_SIZE; i++) {
        if (selected_order->product[i] != NULL) {
            has_products = true;
            printf(ORDER_PRODUCT, selected_order->product[i]->name);
            printf(ORDER_PRODUCT_QUANTITY, selected_order->product_quantity[i]);
            printf(MENU_BOTTOM);
        }
    }

    if (!has_products) {
        puts(ERROR_PRODUCT_NO_ADDED);
    }
}
