/**
 * @file designProduct.h
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains design-related constants and macros for product management.
 */


#ifndef DESIGNPRODUCTS_H
#define DESIGNPRODUCTS_H

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief A string constant representing the error message when the product list is empty.
 *
 * This constant is used to display an error message when the product list is empty.
 */
#define ERROR_NO_PRODUCTS "ERROR: Product list is empty!"

/**
 * @brief A string constant representing the error message when the process list is empty.
 *
 * This constant is used to display an error message when there are no processes available.
 */
#define ERROR_NO_PROCESS "ERROR: Process list is empty!"

/**
 * @brief A string constant representing the error message when there are no products associated with a category.
 *
 * This constant is used to display an error message when a category has no associated products.
 */
#define ERROR_CATEGORY_EMPTY "ERROR: There's no product associated to the category!"

/**
 * @brief A string constant representing the error message when a product does not exist.
 *
 * This constant is used to display an error message when the product ID does not correspond to any existing product.
 */
#define ERROR_PRODUCT_NOT_EXIST "ERROR: Product do not exist!"

/**
 * @brief A string constant representing the error message when a process does not exist.
 *
 * This constant is used to display an error message when the process ID does not correspond to any existing process.
 */
#define ERROR_PROCESS_NOT_EXIST "ERROR: Process do not exist!"

/**
 * @brief A string constant representing the error message when no category is selected during product creation.
 *
 * This constant is used to display an error message when no category is selected while creating a product.
 */
#define ERROR_NO_ONE_CATEGORY_SELECTED "ERROR: No category selected! Product creation canceled!"

/**
 * @brief A string constant representing the error message when a product cannot be deleted because its status is Active.
 *
 * This constant is used to display an error message when a product with an "Active" status cannot be deleted.
 */
#define ERROR_DELETE_STATUS "ERROR: Product cannot be deleted because status is Active!"

/**
 * @brief A string constant representing the error message when a product cannot be deleted because it is being used in an order.
 *
 * This constant is used to display an error message when a product cannot be deleted because it is associated with an order in progress.
 */
#define ERROR_DELETE_PRODUCT_ORDER "ERROR: Product cannot be deleted because is used by order(s) in progress."


/**
 * @brief A string constant representing the prompt to enter the product ID.
 *
 * This constant is used to prompt the user to enter the product ID when creating or editing a product.
 */
#define MSG_GET_PRODUCT "Introduce the product ID: "

/**
 * @brief A string constant representing the prompt to enter the process ID.
 *
 * This constant is used to prompt the user to enter the process ID when creating or editing a process.
 */
#define MSG_GET_PROCESS "Introduce the process ID: "    

/**
 * @brief A string constant representing the prompt to enter the hours wasted during product production.
 *
 * This constant is used to prompt the user to enter the number of hours wasted in the production of a product.
 */
#define MSG_GET_HOURS_WASTED "Introduce the hours wasted to produce the product: "

/**
 * @brief A string constant representing the prompt to enter the minutes wasted during product production.
 *
 * This constant is used to prompt the user to enter the number of minutes wasted in the production of a product.
 */
#define MSG_GET_MINUTES_WASTED "Introduce the minutes wasted to produce the product: "

/**
 * @brief A string constant representing the prompt to enter the seconds wasted during product production.
 *
 * This constant is used to prompt the user to enter the number of seconds wasted in the production of a product.
 */
#define MSG_GET_SECONDS_WASTED "Introduce the seconds wasted to produce the product: "


/**
 * @brief A string constant representing the header for the product menu.
 *
 * This constant is used to display the header of the product menu in the system.
 */
#define PRODUCT_MENU_HEADER "-----------PRODUCT MENU-----------"

/**
 * @brief A string constant representing the option to create a new product in the product menu.
 *
 * This constant is used to display the option to create a new product in the product menu.
 */
#define PRODUCT_CREATE "| 1-Create Product               |"

/**
 * @brief A string constant representing the option to edit an existing product in the product menu.
 *
 * This constant is used to display the option to edit an existing product in the product menu.
 */
#define PRODUCT_EDIT "| 2-Edit Product                 |"

/**
 * @brief A string constant representing the option to edit a process in the product menu.
 *
 * This constant is used to display the option to edit a process related to a product in the product menu.
 */
#define PROCESS_EDIT "| 3-Edit Process                 |"

/**
 * @brief A string constant representing the option to delete a product in the product menu.
 *
 * This constant is used to display the option to delete a product in the product menu.
 */
#define PRODUCT_DELETE "| 4-Delete Product               |"

/**
 * @brief A string constant representing the option to list reports about products in the product menu.
 *
 * This constant is used to display the option to list reports related to products in the product menu.
 */
#define PRODUCT_LIST "| 5-Reports Products             |"


/**
 * @brief A string constant representing the prompt to enter the product name during creation.
 *
 * This constant is used to prompt the user to enter the name of a product during product creation.
 */
#define CREATE_PRODUCT_NAME "Enter product name: "

/**
 * @brief A string constant representing the prompt to select a product category during creation.
 *
 * This constant is used to prompt the user to select a category for the product during its creation.
 */
#define CREATE_PRODUCT_CATEGORY "Select category: "


/**
 * @brief A string constant representing the header for the category menu.
 *
 * This constant is used to display the header for the category selection menu in the system.
 */
#define CATEGORY_MENU_HEADER "-----------CATEGORY MENU----------"

/**
 * @brief A string constant representing the option to select the Industrial category in the category menu.
 *
 * This constant is used to display the option to select the "Industrial" category in the category menu.
 */
#define CATEGORY_INDUSTRIAL "| 1-Industrial                   |"

/**
 * @brief A string constant representing the option to select the Automobile category in the category menu.
 *
 * This constant is used to display the option to select the "Automobile" category in the category menu.
 */
#define CATEGORY_AUTOMOBILE "| 2-Automobile                   |"

/**
 * @brief A string constant representing the option to select the Aeronautical category in the category menu.
 *
 * This constant is used to display the option to select the "Aeronautical" category in the category menu.
 */
#define CATEGORY_AERONAUTICAL "| 3-Aeronautical                 |"

/**
 * @brief A string constant representing the option to select the Construction category in the category menu.
 *
 * This constant is used to display the option to select the "Construction" category in the category menu.
 */
#define CATEGORY_CONSTRUCTION "| 4-Construction                 |"

/**
 * @brief A string constant representing the option to select the Furniture category in the category menu.
 *
 * This constant is used to display the option to select the "Furniture" category in the category menu.
 */
#define CATEGORY_FURNITURE "| 5-Furniture                    |"

/**
 * @brief A string constant representing the option to select the Packages category in the category menu.
 *
 * This constant is used to display the option to select the "Packages" category in the category menu.
 */
#define CATEGORY_PACKAGES "| 6-Packages                     |"

/**
 * @brief A string constant representing the option to select the Undefined category in the category menu.
 *
 * This constant is used to display the option to select the "Undefined" category in the category menu.
 */
#define CATEGORY_UNDEFINED "| 7-Undefined                    |"


/**
 * @brief A string constant representing the header for the process menu.
 *
 * This constant is used to display the header for the process menu in the system.
 */
#define PROCESS_MENU_HEADER "-----------PROCESS MENU-----------"

/**
 * @brief A string constant representing the option to create a new process in the process menu.
 *
 * This constant is used to display the option to create a new process in the process menu.
 */
#define PROCESS_CREATE "| 1-Create Process               |"

/**
 * @brief A string constant representing the option to finish a process in the process menu.
 *
 * This constant is used to display the option to mark a process as finished in the process menu.
 */
#define PROCESS_FINISH "| 2-Finish                       |"

/**
 * @brief A string constant representing the prompt to enter a report for a process during creation.
 *
 * This constant is used to prompt the user to enter the report for a process during its creation.
 */
#define CREATE_PRODUCT_REPORT "Enter the report for this process: "


/**
 * @brief A string constant representing the header for the edit product menu.
 *
 * This constant is used to display the header for the product editing menu in the system.
 */
#define PRODUCT_EDIT_MENU_HEADER "---------EDIT PRODUCT MENU--------"

/**
 * @brief A string constant representing the option to edit the product name in the edit product menu.
 *
 * This constant is used to display the option to edit the product name in the product editing menu.
 */
#define EDIT_PRODUCT_NAME "|1-Edit Product Name             |"

/**
 * @brief A string constant representing the option to edit the product category in the edit product menu.
 *
 * This constant is used to display the option to edit the product category in the product editing menu.
 */
#define EDIT_PRODUCT_CATEGORY "|2-Edit Product Category         |"

/**
 * @brief A string constant representing the option to edit the product status in the edit product menu.
 *
 * This constant is used to display the option to edit the product status in the product editing menu.
 */
#define EDIT_PRODUCT_STATUS "|3-Edit Product Status           |"

/**
 * @brief A string constant representing the prompt to enter the new product name during editing.
 *
 * This constant is used to prompt the user to enter the new product name during product editing.
 */
#define EDIT_PRODUCT_GET_NAME "Enter new product name: "

/**
 * @brief A string constant representing the prompt to select the new product category during editing.
 *
 * This constant is used to prompt the user to select a new product category during product editing.
 */
#define EDIT_PRODUCT_GET_CATEGORY "Select new category: "


/**
 * @brief A string constant representing the header for the edit process menu.
 *
 * This constant is used to display the header for the process editing menu in the system.
 */
#define PROCESS_EDIT_MENU_HEADER "---------EDIT PROCESS MENU--------"

/**
 * @brief A string constant representing the option to edit the hours spent on a process in the edit process menu.
 *
 * This constant is used to display the option to edit the hours spent on a process in the process editing menu.
 */
#define EDIT_PROCESS_HOURS "|1-Edit Hours Spent              |"

/**
 * @brief A string constant representing the option to edit the minutes spent on a process in the edit process menu.
 *
 * This constant is used to display the option to edit the minutes spent on a process in the process editing menu.
 */
#define EDIT_PROCESS_MINUTES "|2-Edit Minutes Spent            |"

/**
 * @brief A string constant representing the option to edit the seconds spent on a process in the edit process menu.
 *
 * This constant is used to display the option to edit the seconds spent on a process in the process editing menu.
 */
#define EDIT_PROCESS_SECONDS "|3-Edit Seconds Spent            |"

/**
 * @brief A string constant representing the option to edit the process report in the edit process menu.
 *
 * This constant is used to display the option to edit the report of a process in the process editing menu.
 */
#define EDIT_PROCESS_REPORT "|4-Edit Report                   |"

/**
 * @brief A string constant representing the option to edit the machine used in a process in the edit process menu.
 *
 * This constant is used to display the option to edit the machine associated with a process in the process editing menu.
 */
#define EDIT_PROCESS_MACHINE "|5-Edit Machine                  |"

/**
 * @brief A string constant representing the prompt to enter a new report during process editing.
 *
 * This constant is used to prompt the user to enter a new report for a process during its editing.
 */
#define EDIT_PROCESS_GET_REPORT "Enter new report: "


/**
 * @brief A string constant representing the header for the product status editing menu.
 *
 * This constant is used to display the header for the product status editing menu.
 */
#define PRODUCT_EDIT_STATUS_MENU_HEADER "---------EDIT STATUS MENU--------"

/**
 * @brief A string constant representing the option to set the product status as Active in the status editing menu.
 *
 * This constant is used to display the option to set the product status to "Active" in the product status editing menu.
 */
#define EDIT_PRODUCT_ACTIVATE_STATUS    "|1-Status: Active                |"

/**
 * @brief A string constant representing the option to set the product status as In Stock in the status editing menu.
 *
 * This constant is used to display the option to set the product status to "In Stock" in the product status editing menu.
 */
#define EDIT_PRODUCT_IN_STOCK_STATUS "|2-Status: In Stock              |"

/**
 * @brief A string constant representing the option to set the product status as Sold Out in the status editing menu.
 *
 * This constant is used to display the option to set the product status to "Sold Out" in the product status editing menu.
 */
#define EDIT_PRODUCT_SOLD_OUT_STATUS "|3-Status: Sold Out              |"

/**
 * @brief A string constant representing the option to set the product status as Discontinued in the status editing menu.
 *
 * This constant is used to display the option to set the product status to "Discontinued" in the product status editing menu.
 */
#define EDIT_PRODUCT_DISCONTINUED_STATUS "|4-Status: Discontinued          |"

/**
 * @brief A string constant representing the option to set the product status as Inactive in the status editing menu.
 *
 * This constant is used to display the option to set the product status to "Inactive" in the product status editing menu.
 */
#define EDIT_PRODUCT_INACTIVE_STATUS "|5-Status: Inactive              |"


/**
 * @brief A string constant representing the header for the product list menu.
 *
 * This constant is used to display the header for the product list menu.
 */
#define PRODUCT_LIST_MENU_HEADER "---------PRODUCT LIST MENU--------"

/**
 * @brief A string constant representing the option to list all products in the product list menu.
 *
 * This constant is used to display the option to list all products in the product list menu.
 */
#define LIST_PRODUCTS "| 1-List All Products            |"

/**
 * @brief A string constant representing the option to list products by category in the product list menu.
 *
 * This constant is used to display the option to list products by category in the product list menu.
 */
#define LIST_PRODUCTS_BY_CATEGORY "| 2-List Products By Category    |"

/**
 * @brief A string constant representing the option to list processes associated with products in the product list menu.
 *
 * This constant is used to display the option to list the processes associated with each product.
 */
#define LIST_PROCESS_FOR_PRODUCTS "| 3-List Process For Product     |"

/**
 * @brief A string constant representing the option to list demand for products in the product list menu.
 *
 * This constant is used to display the option to list the demand for products in the product list menu.
 */
#define LIST_DEMAND_FOR_PRODUCTS "| 4-List Demand For Products     |"

/**
 * @brief A string constant representing the option to list products by name in the product list menu.
 *
 * This constant is used to display the option to list products by their name in the product list menu.
 */
#define LIST_PRODUCTS_BY_NAME "| 5-List Products By Name        |"

/**
 * @brief A string constant representing the option to list products by price in the product list menu.
 *
 * This constant is used to display the option to list products by their price in the product list menu.
 */
#define LIST_PRODUCTS_BY_PRICE "| 6-List Products By Price       |"


/**
 * @brief A string constant representing the format for displaying a product's ID.
 *
 * This constant is used to display the product ID in the product listing or detail view.
 */
#define PRODUCT_ID "\nProduct ID: %d"

/**
 * @brief A string constant representing the format for displaying a product's name.
 *
 * This constant is used to display the product name in the product listing or detail view.
 */
#define PRODUCT_NAME "\nProduct Name: %s"

/**
 * @brief A string constant representing the format for displaying a product's category.
 *
 * This constant is used to display the product category in the product listing or detail view.
 */
#define PRODUCT_CATEGORY "\nProduct Category: %s"

/**
 * @brief A string constant representing the format for displaying the total time spent on a product.
 *
 * This constant is used to display the total time spent on producing a product in hours, minutes, and seconds.
 */
#define PRODUCT_TOTAL_TIME "\nTotal Time: %02d:%02d:%02d"

/**
 * @brief A string constant representing the format for displaying a product's status.
 *
 * This constant is used to display the product status (e.g., Active, In Stock, etc.) in the product listing or detail view.
 */
#define PRODUCT_STATUS "\nStatus: %s"

/**
 * @brief A string constant representing the format for displaying the quantity sold of a product.
 *
 * This constant is used to display the quantity of a product that has been sold in the product listing or detail view.
 */
#define PRODUCT_SELLED "\nQuantity Selled: %d"

/**
 * @brief A string constant representing the format for displaying the selling price of a product.
 *
 * This constant is used to display the product's selling price in euros.
 */
#define PRODUCT_PVP "\nPVP: %.2f euros\n"


/**
 * @brief A string constant representing the format for displaying a process's ID.
 *
 * This constant is used to display the process ID in the process listing or detail view.
 */
#define PROCESS_ID "\nProcess ID: %d"

/**
 * @brief A string constant representing the format for displaying a process's machine ID.
 *
 * This constant is used to display the machine ID associated with a process in the process listing or detail view.
 */
#define PROCESS_MACHINE "\nMachine ID: %d"

/**
 * @brief A string constant representing the format for displaying the execution time of a process.
 *
 * This constant is used to display the execution time of a process in hours, minutes, and seconds.
 */
#define PROCESS_TIME "\nExecution Time: %02d:%02d:%02d"

/**
 * @brief A string constant representing the format for displaying a process's report.
 *
 * This constant is used to display the process report in the process listing or detail view.
 */
#define PROCESS_REPORT "\nReport: %s"

/**
 * @brief A string constant representing the format for displaying a process's status.
 *
 * This constant is used to display the process's status in the process listing or detail view.
 */
#define PROCESS_STATUS "\nStatus: %s\n"    


/**
 * @brief A string constant representing the success message for editing process hours.
 *
 * This constant is used to confirm that the process hours were successfully edited.
 */
#define SUCESS_PROCESS_EDIT_HOUR "Hours edited with success!"

/**
 * @brief A string constant representing the success message for editing process minutes.
 *
 * This constant is used to confirm that the process minutes were successfully edited.
 */
#define SUCESS_PROCESS_EDIT_MINUTES "Minutes edited with success!"

/**
 * @brief A string constant representing the success message for editing process seconds.
 *
 * This constant is used to confirm that the process seconds were successfully edited.
 */
#define SUCESS_PROCESS_EDIT_SECONDS "Seconds edited with success!"

/**
 * @brief A string constant representing the success message for editing a process report.
 *
 * This constant is used to confirm that the process report was successfully edited.
 */
#define SUCESS_PROCESS_EDIT_REPORTS "Report edited with success!"

/**
 * @brief A string constant representing the success message for editing a process's machine.
 *
 * This constant is used to confirm that the machine associated with a process was successfully edited.
 */
#define SUCESS_PROCESS_EDIT_MACHINE "Machine edited with success!"

/**
 * @brief A string constant representing the success message for editing a product's name.
 *
 * This constant is used to confirm that the product's name was successfully edited.
 */
#define SUCESS_PRODUCT_EDIT_NAME "Product name edited with success!"

/**
 * @brief A string constant representing the success message for editing a product's category.
 *
 * This constant is used to confirm that the product's category was successfully edited.
 */
#define SUCESS_PRODUCT_EDIT_CATEGORY "Product category edited with success!"

/**
 * @brief A string constant representing the success message for editing a product's status.
 *
 * This constant is used to confirm that the product's status was successfully edited.
 */
#define SUCESS_PRODUCT_EDIT_STATUS "Product status edited with success!"    

/**
 * @brief A string constant representing the success message for deleting a product.
 *
 * This constant is used to confirm that the product was successfully deleted.
 */
#define PRODUCT_DELETED "Product deleted with success."    

/**
 * @brief A string constant representing the success message for creating a product.
 *
 * This constant is used to confirm that the product was successfully created.
 */
#define PRODUCT_CREATED "Product created successfully!\n"    

/**
 * @brief A string constant representing the success message for creating a process.
 *
 * This constant is used to confirm that the process was successfully created.
 */
#define PROCESS_CREATED "Process created successfully!\n"  
    
    
#ifdef __cplusplus
}
#endif

#endif /* DESIGNPRODUCTS_H */

