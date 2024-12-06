#include "functions.h"

void DeleteOrder(Management *management) {
    ListOrders(management);
    int id = GetOrderPosition(*management, GetInt(MIN_SIZE, ORDERS_SIZE, MSG_GET_ORDER));

    if (id == -1) {
        puts(ERROR_ORDER_NOT_EXIST);
        return;
    }
    if (management->order[id]->statusorder == 2) {
        free(management->order[id]);

        for (int i = id; i < management->order_counter - 1; i++) {
            management->order[i] = management->order[i + 1];
            management->order[i]->orderid = i + 1;
        }

        management->order[management->order_counter - 1] = NULL;

        management->order_counter--;

        puts(PRODUCT_DELETED);

    } else {
        puts(ERROR_DELETE_STATUS);
    }
}
