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
    }
}

int PrintOrders(Order *order){  //ARGUMRNTO TEM DE SER ORDER *order MUDAR
    puts(ORDER_PRINTD_HEADER);
    printf("Registration date: %02d-%02d-%02d",order->registration_day,order->registration_month,order->registration_year );
    printf(ORDER_PRIORITY, order->priority);
    printf(ORDER_STATUS, order->statusorder);
    printf(ORDER_FULFILLMENT, order->fulfillment);
    printf(ORDER_CUSTOMER, order->customerID);
    printf(ORDER_PRODUCTS, order->productID);
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
        }
    }else{
        puts(ERROR_ORDER_NOT_EXIST);
    }
}