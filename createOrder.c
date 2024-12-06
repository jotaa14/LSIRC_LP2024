#include "functions.h"

void CreateOrder(Management *management) {

    if (management->order_counter >= ORDERS_SIZE) {
        puts(ERROR_ORDERS_REACHED);
        return;
    }

    management->order[management->order_counter] = malloc(sizeof (Order));
    if (management->order[management->order_counter] == NULL) {
        puts(ERROR_MEMORY_ALLOCATION);
        return;
    }

    management->order[management->order_counter]->orderid = management->order_counter + 1;
    ClearInputBuffer();
    
    time_t now = time(NULL); 
    struct tm *local_time = localtime(&now); 

    management->order[management->order_counter]->registration_day = local_time->tm_mday;
    management->order[management->order_counter]->registration_month = local_time->tm_mon + 1; 
    management->order[management->order_counter]->registration_year = local_time->tm_year + 1900; 

    puts(CREATE_ORDER_PRIORITY);
    int priority = OrderPriorityMenu();
    management->order[management->order_counter]->priority = (Priority) priority;

    puts(CREATE_STATUS_PRIORITY);
    int statusorder = OrderStatusMenu();
    management->order[management->order_counter]->statusorder = (StatusOrder) statusorder;

    management->order[management->order_counter]->fulfillment = 0;

    AssociateCustomerWithOrder(management);
            
    management->order_counter++;
}

void AssociateCustomerWithOrder(Management *management) {
    int customer_id;
    if (management->customer_counter <= 0) {
        puts(ERROR_CUSTOMER_EMPTY);
        puts(CREATE_NEW_CUSTOMER);
        CreateCustomers(management);
    }

    do {
    customer_id = ChooseCustomer(management);
    } while (customer_id == -1);

    management->order[management->order_counter]->customer = management->customer[customer_id];
    management->customer[customer_id]->used_by_order++;
}

void AssociateProductWithOrder(Management *management) {
    int product_id;
    if (management->product_counter <= 0) {
        puts(ERROR_NO_PRODUCTS);
        puts(CREATE_NEW_PRODUCTS);
        CreateProduct(management);
    }

    do {
    product_id = ChooseProduct(management);
    } while (product_id == -1);

    //management->order[management->order_counter]->product = management->product[product_id];
    management->product[product_id]->used_by_order++;
}
