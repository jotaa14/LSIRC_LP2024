#ifndef DESIGNORDERS_H
#define DESIGNORDERS_H

#ifdef __cplusplus
extern "C" {
#endif
    
//MSG GET
#define MSG_GET_ORDER "Introduce the order ID: "

//ORDER MENU DESIGN
#define ORDER_MENU_HEADER "------------ORDER MENU------------"
#define ORDER_CREATE "| 1-Create Order                 |"
#define ORDER_EDIT "| 2-Edit Order                   |"
#define ORDER_DELETE "| 3-Delete Order                 |"
#define ORDER_LIST "| 4-Reports Order                |"

//CREATE ORDER DESIGN
#define GET_ORDER_DATE_DAY "Enter the day of the order: "
#define GET_ORDER_DATE_MONTH "Enter the month of the order: "
#define GET_ORDER_DATE_YEAR "Enter the year of the order: "
#define CREATE_ORDER_PRIORITY "Select Priority Option: "
#define GET_ORDER_FULFILLMENT_VALUE "Enter the fulfillment value (0-100%): "
#define GET_PRODUCT_QUANTITY "Enter the quantity of product %s: "

//ERROR DESIGN    
#define ERROR_ORDERS_REACHED "ERROR: Maximum number of orders reached!"    
#define ERROR_ORDER_NOT_EXIST "ERROR: Order do not exist!"
#define ERROR_STATUS_CANCELED_CANNOT_BE_SELECTED "ERROR: You cannot cancel this order becaus is in Production."
#define ERROR_ORDER_ALREADY_CANCELED "ERROR: You cannot edit order fulfillment because order was Canceled."
#define ERROR_MAX_PRODUCTS "ERROR: Product limit are reached!"
#define ERROR_PRODUCT_ALREADY_ASSOCIATED "ERROR: Product already associated to this orrder!"  
#define ERROR_INVALID_QUANTITY "ERROR: Invalid Quantity!"
#define ERROR_PRODUCT_NO_ADDED "ERROR: No one product is associated to order!"    
#define ERROR_NO_ORDERS "ERROR: Orders list is empty!"
    
//ORDER PRIORITY MENU        
#define PRIORITY_MENU_HEADER "-----------PRIORITY MENU----------"
#define PRIORITY_LOW_OPTION "| 1-Priority Low                 |"
#define PRIORITY_MEDIUM_OPTION "| 2-Priority Medium              |"
#define PRIORITY_HIGH_OPTION "| 3-Priority High                |"
    
#define ASSOCIATE_PRODUCT_MENU_HEADER "\n------ASSOCIATE PRODUCT MENU------"
#define ASSOCIATE_PRODUCT_MENU_ADD_OPTION "| 1-Associate Product            |"
                         
//EDIT ORDER MENU                    
#define ORDER_EDIT_MENU_HEADER "----------EDIT ORDER MENU---------"
#define EDIT_ORDER_PRIORITY "| 1-Edit Order Priority          |"
#define EDIT_ORDER_FULFILLMENT "| 2-Edit Order Fulfillment       |"
#define EDIT_CANCEL_ORDER "| 3-Cancel Order                 |"
#define EDIT_ORDER_CUSTOMER "| 4-Edit Order Customer          |"
#define EDIT_ORDER_PRODUCTS "| 5-Edit Order Products          |"
#define EDIT_ORDER_GET_PRIORITY "Select new priority: "
#define EDIT_ORDER_GET_STATUS "Select new status: "

//ORDER PRINT STUFF              
#define ORDER_PRINTED_HEADER "--------------ORDER---------------\n"
#define ORDER_ID "Order ID: %d\n"    
#define ORDER_DATE "Registration date: %02d-%02d-%04d\n"             
#define ORDER_PRIORITY "Order Priority: %s\n"
#define ORDER_STATUS "Order Status: %s\n"
#define ORDER_FULFILLMENT "Order Fulfillment: %d\n"
#define ORDER_CUSTOMER "Order Customer: %d\n"
#define ORDER_CUSTOMER_PHONE_NUMBER "Customer Phone Number: %d\n"
#define ORDER_PRODUCTS "Products: "
#define ORDER_PRODUCT "\nProduct: %s\n"
#define ORDER_PRODUCT_QUANTITY "Quantity: %d\n"
#define ORDER_PVP "PVP: %deuros\n"
   
//ORDER LIST MENU    
#define ORDER_LIST_MENU_HEADER "------------REPORT MENU-----------"
#define ORDER_LIST_MENU_LIST "| 1-List Orders                  |"
#define ORDER_LIST_MENU_DEATAILS "| 2-List Order Details           |"
#define ORDER_LIST_MENU_PRIORITY "| 3-List Orders By Priority      |"   
    
#define SUCCESS_ADD_PRODUCT "%s is added with sucess!\n"
#define SECCESS_ADD_PRODUCTS "Products added with sucess!"

#define PRINT_QUANTITY "Quantity: %d\n"
#ifdef __cplusplus
}
#endif

#endif /* DESIGNORDERS_H */
