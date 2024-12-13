/**
 * @file designOrder.h
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains design-related constants for order management.
 */


#ifndef DESIGNORDERS_H
#define DESIGNORDERS_H

#ifdef __cplusplus
extern "C" {
#endif
    

/**
 * @brief A string constant prompting the user to introduce an order ID.
 *
 * This message is displayed when the user is asked to input the ID of an existing order.
 */
#define MSG_GET_ORDER "Introduce the order ID: "

/**
 * @brief A string constant for displaying a date range for orders.
 *
 * This message is used to show the orders within a specific date range, formatted as "Orders Between <start> and <end>".
 */
#define ORDER_LIST_PROCESS_DATE "Orders Between %d - %d - %d and %d - %d - %d:\n"

/**
 * @brief A string constant representing the header for the order menu.
 *
 * This header is displayed to the user to show the available options for interacting with orders.
 */
#define ORDER_MENU_HEADER "------------ORDER MENU------------"

/**
 * @brief A string constant for the option to create a new order.
 *
 * This option is shown in the order menu to allow the user to create a new order.
 */
#define ORDER_CREATE "| 1-Create Order                 |"

/**
 * @brief A string constant for the option to edit an existing order.
 *
 * This option is shown in the order menu to allow the user to edit an existing order.
 */
#define ORDER_EDIT "| 2-Edit Order                   |"

/**
 * @brief A string constant for the option to delete an order.
 *
 * This option is shown in the order menu to allow the user to delete an order.
 */
#define ORDER_DELETE "| 3-Delete Order                 |"

/**
 * @brief A string constant for the option to view reports of orders.
 *
 * This option is shown in the order menu to allow the user to view various order reports.
 */
#define ORDER_LIST "| 4-Reports Order                |"

/**
 * @brief A string constant prompting the user to enter the day of the order.
 *
 * This prompt is used when asking the user for the specific day of the order.
 */
#define GET_ORDER_DATE_DAY "Enter the day of the order: "

/**
 * @brief A string constant prompting the user to enter the month of the order.
 *
 * This prompt is used when asking the user for the month of the order.
 */
#define GET_ORDER_DATE_MONTH "Enter the month of the order: "

/**
 * @brief A string constant prompting the user to enter the year of the order.
 *
 * This prompt is used when asking the user for the year of the order.
 */
#define GET_ORDER_DATE_YEAR "Enter the year of the order: "

/**
 * @brief A string constant prompting the user to select the priority for the order.
 *
 * This prompt is used to let the user choose the priority for the order during creation.
 */
#define CREATE_ORDER_PRIORITY "Select Priority Option: "

/**
 * @brief A string constant prompting the user to enter the fulfillment value of the order (0-100%).
 *
 * This prompt is used when asking the user to provide the fulfillment value for the order.
 */
#define GET_ORDER_FULFILLMENT_VALUE "Enter the fulfillment value (0-100%): "

/**
 * @brief A string constant prompting the user to enter the quantity of a specific product.
 *
 * This prompt is used when the user needs to specify the quantity of a product in an order.
 */
#define GET_PRODUCT_QUANTITY "Enter the quantity of product %s: "

/**
 * @brief A string constant for an error message when the maximum number of orders has been reached.
 *
 * This error message is displayed when the system has reached the limit of orders that can be created.
 */
#define ERROR_ORDERS_REACHED "ERROR: Maximum number of orders reached!"

/**
 * @brief A string constant for an error message when the order does not exist.
 *
 * This error message is displayed when an order with a given ID cannot be found.
 */
#define ERROR_ORDER_NOT_EXIST "ERROR: Order does not exist!"

/**
 * @brief A string constant for an error message when an order cannot be canceled because it is in production.
 *
 * This error message is displayed when attempting to cancel an order that is currently in production.
 */
#define ERROR_STATUS_CANCELED_CANNOT_BE_SELECTED "ERROR: You cannot cancel this order because it is in Production."

/**
 * @brief A string constant for an error message when the order has already been canceled.
 *
 * This error message is displayed when attempting to edit a canceled order.
 */
#define ERROR_ORDER_ALREADY_CANCELED "ERROR: You cannot edit order fulfillment because the order was Canceled."

/**
 * @brief A string constant for an error message when the product limit for the order has been reached.
 *
 * This error message is displayed when the order has reached the maximum number of products.
 */
#define ERROR_MAX_PRODUCTS "ERROR: Product limits are reached!"

/**
 * @brief A string constant for an error message when a product is already associated with an order.
 *
 * This error message is displayed when the user tries to associate a product that is already associated with the order.
 */
#define ERROR_PRODUCT_ALREADY_ASSOCIATED "ERROR: Product already associated with this order!"

/**
 * @brief A string constant for an error message when an invalid quantity is entered for a product.
 *
 * This error message is displayed when the user provides an invalid quantity for a product.
 */
#define ERROR_INVALID_QUANTITY "ERROR: Invalid Quantity!"

/**
 * @brief A string constant for an error message when no product has been added to the order.
 *
 * This error message is displayed when no product has been associated with the order.
 */
#define ERROR_PRODUCT_NO_ADDED "ERROR: No product is associated with the order!"

/**
 * @brief A string constant for an error message when there are no orders in the system.
 *
 * This error message is displayed when there are no orders in the list.
 */
#define ERROR_NO_ORDERS "ERROR: Orders list is empty!"

/**
 * @brief A string constant for an error message when the quantity for a product is invalid during an update.
 *
 * This error message is displayed when an invalid quantity is provided while updating an order.
 */
#define ERROR_INVALID_QUANTITY_UPDATE_ORDER_TOTAL_TIME "ERROR: Invalid quantity for product %d\n"

/**
 * @brief A string constant for the header of the priority menu.
 *
 * This header is displayed when showing the priority options for an order.
 */
#define PRIORITY_MENU_HEADER "-----------PRIORITY MENU----------"

/**
 * @brief A string constant representing the option to set the order priority to low.
 *
 * This option is shown in the priority menu to allow the user to set the order's priority to low.
 */
#define PRIORITY_LOW_OPTION "| 1-Priority Low                 |"

/**
 * @brief A string constant representing the option to set the order priority to medium.
 *
 * This option is shown in the priority menu to allow the user to set the order's priority to medium.
 */
#define PRIORITY_MEDIUM_OPTION "| 2-Priority Medium              |"

/**
 * @brief A string constant representing the option to set the order priority to high.
 *
 * This option is shown in the priority menu to allow the user to set the order's priority to high.
 */
#define PRIORITY_HIGH_OPTION "| 3-Priority High                |"

/**
 * @brief A string constant for the header of the associate product menu.
 *
 * This header is displayed when showing the options to associate products with an order.
 */
#define ASSOCIATE_PRODUCT_MENU_HEADER "\n------ASSOCIATE PRODUCT MENU------"

/**
 * @brief A string constant for the option to add a product to an order.
 *
 * This option is shown in the associate product menu to allow the user to add a product to an order.
 */
#define ASSOCIATE_PRODUCT_MENU_ADD_OPTION "| 1-Associate Product            |"

/**
 * @brief A string constant for the header of the order edit menu.
 *
 * This header is displayed when showing the options for editing an order.
 */
#define ORDER_EDIT_MENU_HEADER "----------EDIT ORDER MENU---------"

/**
 * @brief A string constant for the option to edit the priority of an order.
 *
 * This option is shown in the order edit menu to allow the user to edit the priority of an order.
 */
#define EDIT_ORDER_PRIORITY "| 1-Edit Order Priority          |"

/**
 * @brief A string constant for the option to edit the fulfillment value of an order.
 *
 * This option is shown in the order edit menu to allow the user to edit the fulfillment of an order.
 */
#define EDIT_ORDER_FULFILLMENT "| 2-Edit Order Fulfillment       |"

/**
 * @brief A string constant for the option to cancel an order.
 *
 * This option is shown in the order edit menu to allow the user to cancel an order.
 */
#define EDIT_CANCEL_ORDER "| 3-Cancel Order                 |"

/**
 * @brief A string constant prompting the user to select a new priority for an order.
 *
 * This prompt is used when the user needs to select a new priority for the order during editing.
 */
#define EDIT_ORDER_GET_PRIORITY "Select new priority: "

/**
 * @brief A string constant prompting the user to select a new status for an order.
 *
 * This prompt is used when the user needs to select a new status for the order during editing.
 */
#define EDIT_ORDER_GET_STATUS "Select new status: "

/**
 * @brief A string constant representing the header for printing order details.
 *
 * This header is displayed before printing the detailed information of a specific order.
 */
#define ORDER_PRINTED_HEADER "--------------ORDER---------------\n"

/**
 * @brief A string constant for displaying the order ID.
 *
 * This format string is used to display the order ID, e.g., "Order ID: 123".
 */
#define ORDER_ID "Order ID: %d\n"

/**
 * @brief A string constant for displaying the order's registration date.
 *
 * This format string is used to display the order's registration date in the format "dd-mm-yyyy".
 */
#define ORDER_DATE "Registration date: %02d-%02d-%04d\n"

/**
 * @brief A string constant for displaying the order's priority.
 *
 * This format string is used to display the order's priority (e.g., "Low", "Medium", "High").
 */
#define ORDER_PRIORITY "Order Priority: %s\n"

/**
 * @brief A string constant for displaying the order's status.
 *
 * This format string is used to display the order's current status (e.g., "Open", "Production", "Closed").
 */
#define ORDER_STATUS "Order Status: %s\n"

/**
 * @brief A string constant for displaying the order's fulfillment percentage.
 *
 * This format string is used to display the order's fulfillment (e.g., 75%).
 */
#define ORDER_FULFILLMENT "Order Fulfillment: %d\n"

/**
 * @brief A string constant for displaying the order's total processing time.
 *
 * This format string is used to display the order's total time spent in the system (e.g., 02:30:00).
 */
#define ORDER_TOTAL_TIME "Total Time: %02d:%02d:%02d\n"

/**
 * @brief A string constant for displaying the order's customer ID.
 *
 * This format string is used to display the customer ID associated with the order.
 */
#define ORDER_CUSTOMER "Order Customer: %d\n"

/**
 * @brief A string constant for displaying the customer's phone number.
 *
 * This format string is used to display the customer's phone number associated with the order.
 */
#define ORDER_CUSTOMER_PHONE_NUMBER "Customer Phone Number: %d\n"
    
/**
 * @brief A string constant for displaying the total price of the order (PVP).
 *
 * This format string is used to display the total price of the order, referred to as PVP, in euros.
 */
#define ORDER_PVP "PVP: %deuros\n"

/**
 * @brief A string constant for displaying the list of products associated with the order.
 *
 * This string introduces the section where the products for the order will be displayed.
 */
#define ORDER_PRODUCTS "Products: "

/**
 * @brief A string constant for displaying a specific product's details.
 *
 * This format string is used to display a product's name in the order's product list.
 */
#define ORDER_PRODUCT "\nProduct: %s\n"

/**
 * @brief A string constant for displaying the quantity of a product in the order.
 *
 * This format string is used to display the quantity of a specific product in the order.
 */
#define ORDER_PRODUCT_QUANTITY "Quantity: %d\n"

/**
 * @brief A string constant representing the list report menu.
 *
 * This header is shown when accessing the order report listing menu.
 */
#define ORDER_LIST_MENU_HEADER "------------REPORT MENU-----------"

/**
 * @brief A string constant for listing orders option.
 *
 * This option is used in the report menu to list all the orders.
 */
#define ORDER_LIST_MENU_LIST "| 1-List Orders                  |"

/**
 * @brief A string constant for viewing order details option.
 *
 * This option is used to view details for each order.
 */
#define ORDER_LIST_MENU_DEATAILS "| 2-List Order Details           |"

/**
 * @brief A string constant for listing orders by priority option.
 *
 * This option is used in the report menu to list orders by priority.
 */
#define ORDER_LIST_MENU_PRIORITY "| 3-List Orders By Priority      |"

/**
 * @brief A string constant for listing orders by status option.
 *
 * This option is used to list orders based on their status (open, closed, etc.).
 */
#define ORDER_LIST_MENU_STATUS "| 4-List Orders By Status        |"

/**
 * @brief A string constant for listing orders by price option.
 *
 * This option is used in the report menu to list orders sorted by price.
 */
#define ORDER_LIST_MENU_PRICE "| 5-List Orders By Price         |"

/**
 * @brief A string constant for listing orders by process option.
 *
 * This option is used to list orders by process stage (open, in production, etc.).
 */
#define ORDER_LIST_MENU_PROCESS "| 6-List Orders By Process       |"

/**
 * @brief A string constant representing the header for the process menu.
 *
 * This header is shown in the process listing menu for orders.
 */
#define ORDER_LSIT_PROCESS_HEADER "-----------PROCESS MENU-----------"

/**
 * @brief A string constant for listing orders by status option.
 *
 * This option lists orders based on their current status.
 */
#define ORDER_LSIT_PROCESS_STATUS "|1-List orders by status         |"

/**
 * @brief A string constant for listing orders by fulfillment option.
 *
 * This option lists orders based on their fulfillment percentage.
 */
#define ORDER_LSIT_PROCESS_FULFILLMENT "|2-List orders by fulfillment    |"

/**
 * @brief A string constant for listing orders within a date range option.
 *
 * This option allows the user to list orders within a specific date range.
 */
#define ORDER_LSIT_PROCESS_DATE "|3-List orders within a date     |"

/**
 * @brief A string constant for adding an observation to an order.
 *
 * This option allows the user to add observations to a specific order.
 */
#define ORDER_LSIT_PROCESS_OBSERVATION "|4-Add observation to an order   |"

/**
 * @brief A string constant for the fulfillment menu to choose order sorting.
 *
 * This menu lets the user choose whether to sort orders by fulfillment from 100% to 0% or vice versa.
 */
#define ORDER_LSIT_PROCESS_FULFILLMENT_MENU "------LIST FULFILLMENT MENU-------"

/**
 * @brief A string constant for sorting orders by fulfillment from 100% to 0%.
 *
 * This option sorts the list of orders based on fulfillment percentage, in descending order.
 */
#define ORDER_LSIT_PROCESS_FULFILLMENT_UP_DOWN "|1-fulfillment 100% to 0%        |"

/**
 * @brief A string constant for sorting orders by fulfillment from 0% to 100%.
 *
 * This option sorts the list of orders based on fulfillment percentage, in ascending order.
 */
#define ORDER_LSIT_PROCESS_FULFILLMENT_DOWN_UP "|2-fulfillment 0% to 100%        |"

/**
 * @brief A string constant prompting the user to enter an order status for filtering.
 *
 * This prompt is used when the user is asked to filter orders based on their status.
 */
#define ORDER_LIST_STUFF_STATUS "Enter status to filter by:\n0- Open\n1- Production\n2- Closed\n3- Canceled):"

/**
 * @brief A string constant prompting the user to enter a date range for filtering orders.
 *
 * This prompt is used when the user is asked to filter orders within a specific date range.
 */
#define ORDER_LIST_STUFF_DATE "Enter the time interval for the orders:"

/**
 * @brief A string constant prompting the user to add an observation to a specific order.
 *
 * This prompt is used when the user is asked to enter an observation for a specific order.
 */
#define ORDER_LIST_STUFF_OBSERVATION "Enter the observation for order #%d:"

/**
 * @brief A string constant for the start date in the order list process menu.
 *
 * This prompt is used to ask the user for the start date of a date range.
 */
#define ORDER_LSIT_PROCESS_DATE_START "Start Date: "

/**
 * @brief A string constant for the end date in the order list process menu.
 *
 * This prompt is used to ask the user for the end date of a date range.
 */
#define ORDER_LSIT_PROCESS_DATE_END "End Date: "

/**
 * @brief A string constant for the day of the order list process menu.
 *
 * This prompt asks for the day of the date when filtering orders.
 */
#define ORDER_LSIT_PROCESS_DAY "Day: "

/**
 * @brief A string constant for the month of the order list process menu.
 *
 * This prompt asks for the month when filtering orders.
 */
#define ORDER_LSIT_PROCESS_MONTH "Month: "

/**
 * @brief A string constant for the year of the order list process menu.
 *
 * This prompt asks for the year when filtering orders.
 */
#define ORDER_LSIT_PROCESS_YEAR "Year: "

/**
 * @brief A string constant confirming that an observation was successfully added to an order.
 *
 * This message is shown when an observation is successfully added to an order.
 */
#define SUSCESS_ADD_OBSERVATION "Observation added successfully!"

/**
 * @brief A string constant confirming that a product was successfully added to an order.
 *
 * This message is shown when a product is successfully added to an order.
 */
#define SUCCESS_ADD_PRODUCT "%s is added with success!\n"

/**
 * @brief A string constant confirming that products were successfully added to an order.
 *
 * This message is shown when multiple products are successfully added to an order.
 */
#define SECCESS_ADD_PRODUCTS "Products added with success!"

/**
 * @brief A string constant confirming that the order priority was successfully edited.
 *
 * This message is shown when the priority of an order is successfully edited.
 */
#define SUCEES_EDIT_ORDER_PRIORITY "Order priority edited with success!"

/**
 * @brief A string constant confirming that the fulfillment of an order was successfully edited.
 *
 * This message is shown when the fulfillment of an order is successfully edited.
 */
#define SUCEES_EDIT_ORDER_FULFILLMENT "Order fulfillment edited with success!"

/**
 * @brief A string constant confirming that an order was successfully canceled.
 *
 * This message is shown when an order is successfully canceled.
 */
#define SUCEES_EDIT_ORDER_CANCELED "Order canceled with success!"

/**
 * @brief A string constant confirming that an order was successfully deleted.
 *
 * This message is shown when an order is successfully deleted.
 */
#define ORDER_DELETED "Order deleted with success"

/**
 * @brief A string constant confirming that an order was successfully created.
 *
 * This message is shown when a new order is successfully created.
 */
#define ORDER_CREATED "Order created with success"

/**
 * @brief A string constant displaying the quantity of a product.
 *
 * This format string is used to display the quantity of a product.
 */
#define PRINT_QUANTITY "Quantity: %d\n"

#ifdef __cplusplus
}
#endif

#endif /* DESIGNORDERS_H */