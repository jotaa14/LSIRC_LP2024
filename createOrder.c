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

    management->order[management->order_counter]->registration_day = GetInt(MIN_DATE_DAY, MAX_DATE_DAY, GET_ORDER_DATE_DAY);
    management->order[management->order_counter]->registration_month = GetInt(MIN_DATE_MONTH, MAX_DATE_MONTH, GET_ORDER_DATE_MONTH);
    management->order[management->order_counter]->registration_year = GetInt(MIN_DATE_YEAR, MAX_DATE_YEAR, GET_ORDER_DATE_YEAR);

    puts(CREATE_ORDER_PRIORITY);
    int priority = OrderPriorityMenu();
    management->order[management->order_counter]->priority = (Priority) priority;

    puts(CREATE_STATUS_PRIORITY);
    int statusorder = OrderStatusMenu();
    management->order[management->order_counter]->statusorder = (StatusOrder) statusorder;

    management->order[management->order_counter]->fulfillment = GetInt(MIN_FULFILLMENT_VALUE, MAX_FULFILLMENT_VALUE, GET_ORDER_FULFILLMENT_VALUE);

    //AssociateCustomerWithOrder(management);
    //AssociateProductWithOrder(management);
            
    management->order_counter++;
}
/*
void AssociateCustomerWithOrder(Management *management) {
    if (management->customer_counter <= 0) {
        puts(ERROR_CUSTOMER_EMPTY);
        puts(CREATE_NEW_CUSTOMER);
        CreateCustomers(management);
    }

    do {
    int customer_id = ChooseCustomer(management);
    } while (customer_id == -1);

    management->order[management->order_counter]->customerID = management->customer[customer_id]->id;
}

void AssociateProductWithOrder(Management *management) {
    if (management->product_counter <= 0) {
        puts(ERROR_NO_PRODUCTS);
        puts(CREATE_NEW_PRODUCTS);
        CreateProduct(management);
    }

    do {
    int product_id = ChooseProduct(management);
    } while (product_id == -1);

    management->order[management->order_counter]->productID = management->product[product_id]->id;
    management->product[product_id]->used_by_order++;
}
*/