#ifndef FUCNTIONSORDER_H
#define FUCNTIONSORDER_H

#ifdef __cplusplus
extern "C" {
#endif

//utilOrder.c
int GetOrderPosition(Management management, int number);
void AssociateStatusToFulfillment (Management *management, int id);
//createOrder.c
void CreateOrder(Management *management);
void AssociateCustomerWithOrder(Management *management);
//void AssociateProductWithOrder(Management *management);
//editOrder.c
void EditOrder (Management *management);
//deleteOrder.c
void DeleteOrder(Management *management);
//outputOrder.c
char* PrintOrderPriority(Priority priority);
char* PrintOrderStatus(StatusOrder statusorder);
int PrintOrders(Order *order);
void ListOrders(Management *management);
//menuOrder.c
void OrderMenu(Management *management);
void OrderListMenu(Management *management);
int OrderPriorityMenu();


#ifdef __cplusplus
}
#endif

#endif /* FUCNTIONSORDER_H */

