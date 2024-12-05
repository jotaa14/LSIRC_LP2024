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

