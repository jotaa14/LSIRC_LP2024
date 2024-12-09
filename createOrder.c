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
    
    time_t now = time(NULL); 
    struct tm *local_time = localtime(&now); 

    management->order[management->order_counter]->registration_day = local_time->tm_mday;
    management->order[management->order_counter]->registration_month = local_time->tm_mon + 1; 
    management->order[management->order_counter]->registration_year = local_time->tm_year + 1900; 

    puts(CREATE_ORDER_PRIORITY);
    int priority = OrderPriorityMenu();
    management->order[management->order_counter]->priority = (Priority) priority;

    management->order[management->order_counter]->fulfillment = 0;
    
    AssociateStatusToFulfillment (management, management->order_counter);

    AssociateCustomerWithOrder(management);
    AssociateProductWithOrder(management);        
    management->order_counter++;
}

void AssociateCustomerWithOrder(Management *management) {
    int customer_id;
    if (management->customer_counter <= 0) {
        puts(ERROR_CUSTOMER_EMPTY);
        CreateCustomers(management);
    }

    do {
    customer_id = ChooseCustomer(management);
    } while (customer_id == -1);

    management->order[management->order_counter]->customer = management->customer[customer_id];
    management->customer[customer_id]->used_by_order++;
}

void AssociateProductWithOrder(Management *management) {
    if (management->product_counter <= 0) {
        puts(ERROR_NO_PRODUCTS);
        return;
    }

    Order *current_order = management->order[management->order_counter];
    int next_product_index = 0;

    for (int i = 0; i < PRODUCTS_SIZE; i++) {
        if (current_order->product[i] == NULL) {
            next_product_index = i;
            break;
        }
    }

    int option;

    while (1) {
        AssociateProductWithOrderOutput();
        scanf("%d", &option);
        ClearInputBuffer();

        if (option == 0) {
            break; 
        } else if (option == 1) {
            if (next_product_index >= PRODUCTS_SIZE) {
                puts(ERROR_MAX_PRODUCTS);
                break;
            }

            int product_id = ChooseProduct(management);
            if (product_id == -1) {
                continue;
            }

            bool already_associated = false;
            for (int i = 0; i < PRODUCTS_SIZE; i++) {
                if (current_order->product[i] == management->product[product_id]) {
                    already_associated = true;
                    break;
                }
            }

            if (already_associated) {
                puts(ERROR_PRODUCT_ALREADY_ASSOCIATED);
                continue;
            }

            int quantity;
            printf(GET_PRODUCT_QUANTITY, management->product[product_id]->name);
            scanf("%d", &quantity);
            ClearInputBuffer();

            if (quantity <= 0) {
                puts(ERROR_INVALID_QUANTITY);
                continue;
            }

            current_order->product[next_product_index] = management->product[product_id];
            current_order->product_quantity[next_product_index] = quantity;
            management->product[product_id]->total_selled = management->product[product_id]->total_selled + quantity;
            management->product[product_id]->used_by_order++;
            current_order->order_pvp = current_order->order_pvp + (management->product[product_id]->pvp*quantity);
            next_product_index++;

            printf(SUCCESS_ADD_PRODUCT, management->product[product_id]->name);
            printf(PRINT_QUANTITY, quantity);
        } else {
            puts(ERROR_MENU);
        }
    }

    if (next_product_index == 0) {
        puts(ERROR_PRODUCT_NO_ADDED);
    } else {
        puts(SECCESS_ADD_PRODUCTS);
    }
}


