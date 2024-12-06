#ifndef DESIGNPRODUCTS_H
#define DESIGNPRODUCTS_H

#ifdef __cplusplus
extern "C" {
#endif

//ERROR DESIGN
#define ERROR_NO_PRODUCTS "ERROR: Product list is empty!"
#define ERROR_NO_PROCESSES "ERROR: Process list is empty!"    
#define ERROR_CATEGORY_EMPTY "ERROR: There's no product associated to the category!"
#define ERROR_PRODUCT_NOT_EXIST "ERROR: Product do not exist!"
#define ERROR_NO_ONE_CATEGORY_SELECTED "ERROR: No category selected! Product creation canceled!"
#define ERROR_DELETE_STATUS "ERROR: Product cannot be deleted because status is Active!"
#define ERROR_NO_PROCESS "ERROR: Process list is empty!"

//GET MESSAGES DESIGN
#define MSG_GET_PRODUCT "Introduce the product ID: "
#define MSG_GET_PROCESS "Introduce the process ID: "    
#define MSG_GET_HOURS_WASTED "Introduce the hours wasted to produce the product: "
#define MSG_GET_MINUTES_WASTED "Introduce the minutes wasted to produce the product: "
#define MSG_GET_SECONDS_WASTED "Introduce the seconds wasted to produce the product: "
    
//PRODUCT MENU DESIGN
#define PRODUCT_MENU_HEADER "-----------PRODUCT MENU-----------"
#define PRODUCT_CREATE "| 1-Create Product               |"
#define PRODUCT_EDIT "| 2-Edit Product                 |"
#define PRODUCT_DELETE "| 3-Delete Product               |"
#define PRODUCT_LIST "| 4-Reports Products             |"

//CREATE PRODUCT DESIGN
#define CREATE_PRODUCT_NAME "Enter product name: "
#define CREATE_PRODUCT_CATEGORY "Select category: "

//CREATE PRODUCT CATEGORY DESIGN        
#define CATEGORY_MENU_HEADER "-----------CATEGORY MENU----------"
#define CATEGORY_INDUSTRIAL "| 1-Industrial                   |"
#define CATEGORY_AUTOMOBILE "| 2-Automobile                   |"
#define CATEGORY_AERONAUTICAL "| 3-Aeronautical                 |"
#define CATEGORY_CONSTRUCTION "| 4-Construction                 |"
#define CATEGORY_FURNITURE "| 5-Furniture                    |"
#define CATEGORY_PACKAGES "| 6-Packages                     |"
#define CATEGORY_UNDEFINED "| 7-Undefined                    |"
#define PRODUCT_CREATED "Product created sucessfully!\n"
    
//CREATE PRODUCT PROCESS DESIGN
#define PROCESS_MENU_HEADER "-----------PROCESS MENU-----------"
#define PROCESS_CREATE "| 1-Create Process               |"    
#define PROCESS_FINISH "| 2-Finish                       |"
#define CREATE_PRODUCT_REPORT "Enter the report for this process: "

//EDIT PRODUCT MENU DESIGN       
#define PRODUCT_EDIT_MENU_HEADER "---------EDIT PRODUCT MENU--------"
#define EDIT_PRODUCT_NAME "|1-Edit Product Name             |"
#define EDIT_PRODUCT_CATEGORY "|2-Edit Product Category         |" 
#define EDIT_PRODUCT_STATUS "|3-Edit Product Status           |"
#define EDIT_PRODUCT_GET_NAME "Enter new product name: "
#define EDIT_PRODUCT_GET_CATEGORY "Select new category: "

//EDIT STATUS PRODUCT MENU DESIGN
#define PRODUCT_EDIT_STATUS_MENU_HEADER "---------EDIT STATUS MENU---------"
#define EDIT_PRODUCT_ACTIVATE_STATUS    "|1-Status: Active                |"
#define EDIT_PRODUCT_IN_STOCK_STATUS "|2-Status: In Stock              |"
#define EDIT_PRODUCT_SOLD_OUT_STATUS "|3-Status: Sold Out              |"
#define EDIT_PRODUCT_DISCONTINUED_STATUS "|4-Status: Discontinued          |"
#define EDIT_PRODUCT_INACTIVE_STATUS "|5-Status: Inactive              |"

//PRODUCT LIST MENU DESIGN
#define PRODUCT_LIST_MENU_HEADER "---------PRODUCT LIST MENU--------"
#define LIST_PRODUCTS "| 1-List Products                |"
#define LIST_PRODUCTS_BY_CATEGORY "| 2-List Products By Category    |"
#define LIST_DEMAND_FOR_PRODUCTS "| 3-List Demand For Products     |"

//PRODUCT LIST DESIGN
#define PRODUCT_ID "\nProduct ID: %d"
#define PRODUCT_NAME "\nProduct Name: %s"
#define PRODUCT_CATEGORY "\nProduct Category: %s"
#define PRODUCT_TOTAL_TIME "\nTotal Time: %02d:%02d:%02d"
#define PRODUCT_STATUS "\nStatus: %s"  
#define PRODUCT_PVP "\nPVP: %.2f euros\n"
    
#define PROCESS_ID "\nProcess ID: %d"
#define PROCESS_MACHINE "\nMachine ID: %d"
#define PROCESS_TIME "\nExecution Time: %02d:%02d:%02d"
#define PROCESS_REPORT "\nReport: %s"
#define PROCESS_STATUS "\nStatus: %s\n"    
//SUCCESS MESSAGES DESIGN
#define PRODUCT_DELETED "Product deleted with success."

#define CREATE_NEW_PRODUCTS "Create a new Product:(PRESS ENTER)"
    
#ifdef __cplusplus
}
#endif

#endif /* DESIGNPRODUCTS_H */

