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
#define CREATE_STATUS_PRIORITY "Select Status Option: "
#define GET_ORDER_FULFILLMENT_VALUE "Enter the fulfillment value (0-100%): "

//ERROR DESIGN    
#define ERROR_ORDERS_REACHED "ERROR: Maximum number of orders reached!"    
#define ERROR_ORDER_NOT_EXIST "ERROR: Order do not exist!"
    
//ORDER PRIORITY MENU        
#define PRIORITY_MENU_HEADER "-----------PRIORITY MENU----------"
#define PRIORITY_LOW_OPTION "| 1-Priority Low                 |"
#define PRIORITY_MEDIUM_OPTION "| 2-Priority Medium              |"
#define PRIORITY_HIGH_OPTION "| 3-Priority High                |"
    
//ORDER STATUS MENU
#define STATUS_MENU_HEADER "------------STATUS MENU-----------"   
#define STATUS_OPEN_OPTION "| 1-Open                         |"
#define STATUS_PRODUCTION_OPTION "| 2-Production                   |"
#define STATUS_CLOSED_OPTION "| 3-Closed                       |"

//EDIT ORDER MENU                    
#define ORDER_EDIT_MENU_HEADER "----------EDIT ORDER MENU---------"
#define EDIT_ORDER_REGISTRATION_DAY "|1-Edit Registration Day         |"
#define EDIT_ORDER_REGISTRATION_MONTH "|2-Edit Registration Month       |"
#define EDIT_ORDER_REGISTRATION_YEAR "|3-Edit Registration Year        |" 
#define EDIT_ORDER_PRIORITY "|4-Edit Order Priority           |"
#define EDIT_ORDER_STATUS "|5-Edit Order Status             |"
#define EDIT_ORDER_FULFILLMENT "|6-Edit Order Fulfillment        |"
#define EDIT_ORDER_CUSTOMER "|7-Edit Order Customer           |"
#define EDIT_ORDER_PRODUCTS "|8-Edit Order Products           |"
#define EDIT_ORDER_GET_PRIORITY "Select new priority: "
#define EDIT_ORDER_GET_STATUS "Select new status: "

//ORDER PRINT STUFF
#define ORDER_PRINTD_HEADER     "----------Customer order---------"
#define ORDER_PRIORITY          "Order Priority: %s              \n"
#define ORDER_STATUS            "Order Status: %s                \n"
#define ORDER_FULFILLMENT       "Order Fulfillment: %d         \n"
#define ORDER_CUSTOMER          "Order Customer: %d            \n"
#define ORDER_PRODUCTS          "Order Products: %d            \n"
   
//ORDER LIST MENU    
#define ORDER_LIST_MENU_HEADER   "------------REPORT MENU-----------"
#define ORDER_LIST_MENU_LIST     "| 1-List Orders                  |"
#define ORDER_LIST_MENU_NAME     "| 2-List Orders By Name          |"
#define ORDER_LIST_MENU_PRIORITY "| 3-List Orders By Priority      |"    
      
#ifdef __cplusplus
}
#endif

#endif /* DESIGNORDERS_H */
