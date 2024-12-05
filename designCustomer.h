#ifndef DESIGNCUSTOMER_H
#define DESIGNCUSTOMER_H

#ifdef __cplusplus
extern "C" {
#endif

//CUSTOMER MENU DESIGN
#define CUSTOMER_MENU_HEADER "------------CUSTOMER MENU-----------"
#define CUSTOMER_CREATE      "| 1-Create Customer                |"
#define CUSTOMER_EDIT        "| 2-Edit Customer                  |"
#define CUSTOMER_DELETE      "| 3-Delete Customer                |"
#define CUSTOMER_LIST        "| 4-Reports Customers              |"
    
//CUSTOMER MENU DESIGN
#define EDIT_CUSTOMER_HEADER       "----------EDIT CUSTOMER MENU---------"
#define EDIT_CUSTOMER_NAME         "| 1-Edit Customer Name              |"   
#define EDIT_CUSTOMER_PHONE_NUMBER "| 2-Edit Customer Phone Number      |"   
#define EDIT_CUSTOMER_EMAIL        "| 3-Edit Customer Email             |"
#define EDIT_CUSTOMER_NIF          "| 4-Edit Customer Nif               |"
#define EDIT_CUSTOMER_DAY          "| 5-Edit Customer Registration Day  |"
#define EDIT_CUSTOMER_MONTH        "| 6-Edit Customer Registration Month|"
#define EDIT_CUSTOMER_YEAR         "| 7-Edit Customer Registration Year |"
#define EDIT_CUSTOMER_STATUS       "| 8-Edit Customer Status            |"
#define EDIT_CUSTOMER_END          "| 0-Exit                            |"    
  
//CUSTOMER LIST MEMU DESIGN    
#define GET_CUSTOMER_ID "\nCustomer ID: %d"
#define GET_CUSTOMER_NAME "\nCustomer name: %s"
#define GET_CUSTOMER_PHONE_NUMBER "\nCustomer phone number: %d"
#define GET_CUSTOMER_EMAIL "\nCustomer email: %s"
#define GET_CUSTOMER_NIF "\nCustomer nif: %d\n"
#define GET_CUSTOMER_DAY "Day: "
#define GET_CUSTOMER_MONTH "Month: "
#define GET_CUSTOMER_YEAR "Year: "
#define GET_CUSTOMER_STATUS "Customer status: %s\n"    
#define CUSTOMER_CREATED "\nCustomer created."

//EDIT STATUS PRODUCT MENU DESIGN
#define EDIT_CUSTOMER_STATUS_MENU_HEADER  "----------EDIT STATUS MENU----------"
#define EDIT_CUSTOMER_ACTIVATE_STATUS     "| 1-Status: Active                 |"
#define EDIT_CUSTOMER_INACTIVE_STATUS     "| 2-Status: Inactive               |"
#define EDIT_CUSTOMER_STATUS_END          "| 0-Exit                           |"
   
//CUSTOMER LIST MENU DESIGN
#define CUSTOMER_LIST_MENU_HEADER "---------CUSTOMER LIST MENU---------"
#define LIST_CUSTOMER             "| 1-List Customers                 |"
#define LIST_CUSTOMER_BY_NAME     "| 2-List Customers By NAME         |"    
#define LIST_CUSTOMER_STATUS_END  "| 0-Exit                           |"

#define CUSTOMER_ID "Customer ID: "
#define CUSTOMER_NAME "Customer name: "
#define CUSTOMER_PHONE_NUMBER "Customer phone number: "
#define CUSTOMER_EMAIL "Customer email: "
#define CUSTOMER_NIF "Customer nif: "
#define CUSTOMER_DAY "Day: "
#define CUSTOMER_MONTH "Month: "
#define CUSTOMER_YEAR "Year: "
#define CUSTOMER_STATUS "Customer status: "       

#define ERROR_CUSTOMER_EMPTY "ERROR: There's no customer associated!"
#define ERROR_CUSTOMER_EXIST "The customer already exists!"
#define ERROR_CUSTOMER_FULL_LIST "The list is full!"
#define ERROR_CUSTOMER_DELETE_STATUS "ERROR: Customer cannot be deleted because status is Active!"
    
#define CUSTOMER_DELETED "Customer Deleted!"
    
#define CREATE_NEW_CUSTOMER "Create a new Customer:(PRESS ENTER)"



#ifdef __cplusplus
}
#endif

#endif /* DESIGNCUSTOMER_H */

