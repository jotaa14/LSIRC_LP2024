/**
 * @file designCustomer.h
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains design-related constants for customer management.
 */


#ifndef DESIGNCUSTOMER_H
#define DESIGNCUSTOMER_H

#ifdef __cplusplus
extern "C" {
#endif
    
/**
 * @brief A string constant representing the customer menu header.
 *
 * This header is displayed to introduce the customer options menu.
 */
#define CUSTOMER_MENU_HEADER "-----------CUSTOMER MENU----------"

/**
 * @brief A string constant for creating a new customer.
 *
 * This option is displayed in the customer menu to allow the user to create a new customer.
 */
#define CUSTOMER_CREATE      "| 1-Create Customer              |"

/**
 * @brief A string constant for editing an existing customer.
 *
 * This option is displayed in the customer menu to allow the user to edit an existing customer.
 */
#define CUSTOMER_EDIT        "| 2-Edit Customer                |"

/**
 * @brief A string constant for deleting a customer.
 *
 * This option is displayed in the customer menu to allow the user to delete a customer.
 */
#define CUSTOMER_DELETE      "| 3-Delete Customer              |"

/**
 * @brief A string constant for generating customer reports.
 *
 * This option is displayed in the customer menu to allow the user to view reports for customers.
 */
#define CUSTOMER_LIST        "| 4-Reports Customers            |"

/**
 * @brief A string constant representing the header for the edit customer menu.
 *
 * This header is displayed to introduce the customer edit options menu.
 */
#define EDIT_CUSTOMER_HEADER       "---------EDIT CUSTOMER MENU-------"

/**
 * @brief A string constant for editing the customer name.
 *
 * This option is displayed in the customer edit menu to allow the user to edit the customer's name.
 */
#define EDIT_CUSTOMER_NAME         "| 1-Edit Customer Name           |"

/**
 * @brief A string constant for editing the customer phone number.
 *
 * This option is displayed in the customer edit menu to allow the user to edit the customer's phone number.
 */
#define EDIT_CUSTOMER_PHONE_NUMBER "| 2-Edit Customer Phone Number   |"

/**
 * @brief A string constant for editing the customer email.
 *
 * This option is displayed in the customer edit menu to allow the user to edit the customer's email.
 */
#define EDIT_CUSTOMER_EMAIL        "| 3-Edit Customer Email          |"

/**
 * @brief A string constant for editing the customer NIF.
 *
 * This option is displayed in the customer edit menu to allow the user to edit the customer's NIF (tax ID).
 */
#define EDIT_CUSTOMER_NIF          "| 4-Edit Customer Nif            |"

/**
 * @brief A string constant for editing the customer status.
 *
 * This option is displayed in the customer edit menu to allow the user to edit the customer's status.
 */
#define EDIT_CUSTOMER_STATUS       "| 5-Edit Customer Status         |"

/**
 * @brief A string constant for editing the customer's district.
 *
 * This option is displayed in the customer edit menu to allow the user to update the district associated 
 * with the customer.
 */
#define EDIT_CUSTOMER_DISTRICT     "| 6-Edit Customer District       |"

/**
 * @brief A string constant for editing the customer's city.
 *
 * This option is displayed in the customer edit menu to allow the user to update the city associated 
 * with the customer.
 */
#define EDIT_CUSTOMER_CITY         "| 7-Edit Customer City           |"

/**
 * @brief A string constant for editing the customer's street.
 *
 * This option is displayed in the customer edit menu to allow the user to update the street address 
 * associated with the customer.
 */
#define EDIT_CUSTOMER_STREET       "| 8-Edit Customer Street         |"

/**
 * @brief A string constant for displaying the customer ID in customer details.
 *
 * This string is used to display the ID of a customer.
 */
#define GET_CUSTOMER_ID "\nCustomer ID: %d"

/**
 * @brief A string constant for displaying the customer name in customer details.
 *
 * This string is used to display the name of a customer.
 */
#define GET_CUSTOMER_NAME "\nCustomer name: %s"

/**
 * @brief A string constant for displaying the customer phone number in customer details.
 *
 * This string is used to display the phone number of a customer.
 */
#define GET_CUSTOMER_PHONE_NUMBER "\nCustomer phone number: %d"

/**
 * @brief A string constant for displaying the customer email in customer details.
 *
 * This string is used to display the email address of a customer.
 */
#define GET_CUSTOMER_EMAIL "\nCustomer email: %s"

/**
 * @brief A string constant for displaying the customer NIF in customer details.
 *
 * This string is used to display the NIF (tax ID) of a customer.
 */
#define GET_CUSTOMER_NIF "\nCustomer nif: %d\n"

/**
 * @brief A string constant for prompting the user to enter the day of the customer registration.
 *
 * This prompt is used to ask the user for the day of the customer's registration date.
 */
#define GET_CUSTOMER_DAY "Day: "

/**
 * @brief A string constant for prompting the user to enter the month of the customer registration.
 *
 * This prompt is used to ask the user for the month of the customer's registration date.
 */
#define GET_CUSTOMER_MONTH "Month: "

/**
 * @brief A string constant for prompting the user to enter the year of the customer registration.
 *
 * This prompt is used to ask the user for the year of the customer's registration date.
 */
#define GET_CUSTOMER_YEAR "Year: "

/**
 * @brief A string constant for displaying the customer status in customer details.
 *
 * This string is used to display the status of a customer.
 */
#define GET_CUSTOMER_STATUS "Customer status: %s\n"

/**
 * @brief A string constant for displaying the customer registration date.
 *
 * This string is used to display the registration date of a customer.
 */
#define GET_CUSTOMER_DATE "Registration date: %02d-%02d-%04d\n"

/**
 * @brief A string constant for displaying the customer's district in customer details.
 *
 * This string is used to display the district information of a customer in the details section.
 * The format string allows the district name to be dynamically inserted.
 */
#define GET_CUSTOMER_DISTRICT "District: %s\n"

/**
 * @brief A string constant for displaying the customer's city in customer details.
 *
 * This string is used to display the city information of a customer in the details section.
 * The format string allows the city name to be dynamically inserted.
 */
#define GET_CUSTOMER_CITY "City: %s\n"

/**
 * @brief A string constant for displaying the customer's street in customer details.
 *
 * This string is used to display the street information of a customer in the details section.
 * The format string allows the street name to be dynamically inserted.
 */
#define GET_CUSTOMER_STREET "Street: %s\n"

/**
 * @brief A string constant representing the header for the customer status edit menu.
 *
 * This header is displayed to introduce the customer status edit options menu.
 */
#define EDIT_CUSTOMER_STATUS_MENU_HEADER  "---------EDIT STATUS MENU---------"

/**
 * @brief A string constant for activating the customer status to active.
 *
 * This option is displayed when the user selects the "Active" status for a customer.
 */
#define EDIT_CUSTOMER_ACTIVATE_STATUS     "| 1-Status: Active               |"

/**
 * @brief A string constant for setting the customer status to inactive.
 *
 * This option is displayed when the user selects the "Inactive" status for a customer.
 */
#define EDIT_CUSTOMER_INACTIVE_STATUS     "| 2-Status: Inactive             |"

/**
 * @brief A string constant representing the customer list menu header.
 *
 * This header is displayed to introduce the customer list options menu.
 */
#define CUSTOMER_LIST_MENU_HEADER "--------CUSTOMER LIST MENU--------"

/**
 * @brief A string constant for listing all customers.
 *
 * This option is displayed when the user wants to list all customers.
 */
#define LIST_CUSTOMER "| 1-List All Customers           |"

/**
 * @brief A string constant for listing customer orders.
 *
 * This option is displayed when the user wants to list the orders of a customer.
 */
#define LIST_CUSTOMER_ORDERS "| 2-List Customer Orders         |"

/**
 * @brief A string constant for listing customers by name.
 *
 * This option is displayed when the user wants to list customers by their name.
 */
#define LIST_CUSTOMER_BY_NAME "| 3-List Customers By Name       |"
    
/**
 * @brief A string constant for listing customers by volume of orders.
 *
 * This option is displayed when the user wants to list customers based on the volume of their orders.
 */    
#define LIST_CUSTOMER_VOLUME "| 4-List Customers Volume        |"
                             
/**
 * @brief A string constant for listing customers by a specific process.
 *
 * This option is displayed in the customer list menu to allow the user to list customers based on specific criteria.
 */
#define LIST_CUSROMER_BY_LOCAL "| 5-List By Local                |"

/**
 * @brief A string constant representing the header for the "List By Process" menu.
 *
 * This header is displayed to introduce the "List By Process" options menu.
 */
#define LIST_CUSROMER_BY_PROCESS_HEADER   "--------PROCESS LIST MENU---------"

/**
 * @brief A string constant for listing customers by district.
 *
 * This option is displayed in the "List By Process" menu to allow the user to list customers by their district.
 */
#define LIST_CUSROMER_BY_PROCESS_DISTRICT "| 1-List By District             |"

/**
 * @brief A string constant for listing customers by city.
 *
 * This option is displayed in the "List By Process" menu to allow the user to list customers by their city.
 */
#define LIST_CUSROMER_BY_PROCESS_CITY     "| 2-List By City                 |"

/**
 * @brief A string constant for listing customers by street.
 *
 * This option is displayed in the "List By Process" menu to allow the user to list customers by their street.
 */
#define LIST_CUSROMER_BY_PROCESS_STREET   "| 3-List By Street               |"

/**
 * @brief A string constant for displaying the customer ID in customer details.
 *
 * This string is used to display the ID of a customer.
 */
#define CUSTOMER_ID "Customer ID: "

/**
 * @brief A string constant for displaying the customer name in customer details.
 *
 * This string is used to display the name of a customer.
 */
#define CUSTOMER_NAME "Customer name: "

/**
 * @brief A string constant for displaying the customer phone number in customer details.
 *
 * This string is used to display the phone number of a customer.
 */
#define CUSTOMER_PHONE_NUMBER "Customer phone number: "

/**
 * @brief A string constant for displaying the customer email in customer details.
 *
 * This string is used to display the email address of a customer.
 */
#define CUSTOMER_EMAIL "Customer email: "

/**
 * @brief A string constant for displaying the customer NIF in customer details.
 *
 * This string is used to display the NIF (tax ID) of a customer.
 */
#define CUSTOMER_NIF "Customer nif: "

/**
 * @brief A string constant for displaying the customer status in customer details.
 *
 * This string is used to display the status of a customer.
 */
#define CUSTOMER_STATUS "Customer status: " 

/**
 * @brief A string constant for displaying the customer's district in customer details.
 *
 * This string is used to display the district information associated with a customer.
 */
#define CUSTOMER_DISTRICT "Customer District: "

/**
 * @brief A string constant for displaying the customer's city in customer details.
 *
 * This string is used to display the city information associated with a customer.
 */
#define CUSTOMER_CITY "Customer City: "

/**
 * @brief A string constant for displaying the customer's street in customer details.
 *
 * This string is used to display the street information associated with a customer.
 */
#define CUSTOMER_STREET "Customer Street: "

/**
 * @brief A string constant for an error when a customer does not exist.
 *
 * This error message is displayed when the user tries to access a customer that does not exist.
 */
#define ERROR_CUSTOMER_NOT_EXIST "ERROR: Customer does not exist!"

/**
 * @brief A string constant for an error when a customer does not have any orders.
 *
 * This error message is displayed when the user tries to access orders for a customer who has no orders.
 */
#define ERROR_CUSTOMER_DO_NOT_HAVE_ORDER "ERROR: This Customer doesn't have any order!"

/**
 * @brief A string constant for an error when the customer list is empty.
 *
 * This error message is displayed when there are no customers in the system.
 */
#define ERROR_CUSTOMER_EMPTY "ERROR: Customers list is empty!"

/**
 * @brief A string constant for an error when the customer already exists.
 *
 * This error message is displayed when the user tries to create a customer that already exists.
 */
#define ERROR_CUSTOMER_EXIST "ERROR: The customer already exists!"

/**
 * @brief A string constant for an error when the customer list is full.
 *
 * This error message is displayed when the customer list has reached its maximum capacity.
 */
#define ERROR_CUSTOMER_FULL_LIST "ERROR: The list is full!"

/**
 * @brief A string constant for an error when a customer cannot be deleted due to active status.
 *
 * This error message is displayed when the user tries to delete a customer whose status is "Active".
 */
#define ERROR_CUSTOMER_DELETE_STATUS "ERROR: Customer cannot be deleted because status is Active!"

/**
 * @brief A string constant for an error when a customer cannot be set to inactive due to having orders in progress.
 *
 * This error message is displayed when the user tries to set a customer to inactive while they have orders in progress.
 */
#define ERROR_CUSTOMER_INACTIVE_STATUS_HAVE_ORDERS "ERROR: Customer cannot be inactive, because they have orders in progress!"

/**
 * @brief A string constant for the success message when a customer is successfully deleted.
 *
 * This message is displayed when a customer is successfully deleted.
 */
#define CUSTOMER_DELETED "Customer Deleted!"

/**
 * @brief A string constant for the success message when a customer is successfully created.
 *
 * This message is displayed when a customer is successfully created.
 */
#define CUSTOMER_CREATED "\nCustomer created."

/**
 * @brief A string constant for the success message when a customer name is successfully edited.
 *
 * This message is displayed when a customer name is successfully edited.
 */
#define SUCCESS_CUSTOMER_EDIT_NAME "Customer name edited with success!"

/**
 * @brief A string constant for the success message when a customer phone number is successfully edited.
 *
 * This message is displayed when a customer phone number is successfully edited.
 */
#define SUCCESS_CUSTOMER_EDIT_PHONE_NUMBER "Customer phone number edited with success!"

/**
 * @brief A string constant for the success message when a customer email is successfully edited.
 *
 * This message is displayed when a customer email is successfully edited.
 */
#define SUCCESS_CUSTOMER_EDIT_EMAIL "Customer email edited with success!"

/**
 * @brief A string constant for the success message when a customer NIF is successfully edited.
 *
 * This message is displayed when a customer NIF is successfully edited.
 */
#define SUCCESS_CUSTOMER_EDIT_NIF "Customer NIF edited with success!"

/**
 * @brief A string constant for the success message when a customer status is successfully edited.
 *
 * This message is displayed when a customer status is successfully edited.
 */
#define SUCCESS_CUSTOMER_EDIT_STATUS "Customer status edited with success!"

/**
 * @brief A string constant for the success message when a customer's district is successfully edited.
 *
 * This message is displayed to confirm that the district information for a customer has been updated successfully.
 */
#define SUCCESS_CUSTOMER_EDIT_DISTRICT "Customer district edited with success!"

/**
 * @brief A string constant for the success message when a customer's city is successfully edited.
 *
 * This message is displayed to confirm that the city information for a customer has been updated successfully.
 */
#define SUCCESS_CUSTOMER_EDIT_CITY "Customer city edited with success!"

/**
 * @brief A string constant for the success message when a customer's street is successfully edited.
 *
 * This message is displayed to confirm that the street information for a customer has been updated successfully.
 */
#define SUCCESS_CUSTOMER_EDIT_STREET "Customer street edited with success!"

    
/**
 * @brief A string constant for the header of the customer report.
 *
 * This header is displayed when listing customers sorted by order frequency and volume.
 */
#define CUSTOMER_FREQUENCY_VOLUME_REPORT_HEADER "Customers sorted by order frequency and volume:\n"

/**
 * @brief A string constant for displaying customer information.
 *
 * This format string is used to display the customer's name and ID.
 */
#define CUSTOMER_FREQUENCY_VOLUME_INFO_FORMAT "Customer: %s (ID: %d)\n"

/**
 * @brief A string constant for displaying the number of orders placed by a customer.
 *
 * This format string is used to display the total number of orders placed by a customer.
 */
#define CUSTOMER_FREQUENCY_VOLUME_ORDERS_FORMAT "  Orders Placed: %d\n"

/**
 * @brief A string constant for displaying the total order volume of a customer.
 *
 * This format string is used to display the total volume of products ordered by a customer.
 */
#define CUSTOMER_FREQUENCY_VOLUME_TOTAL_VOLUME_FORMAT "  Total Order Volume: %d\n"

/**
 * @brief A string constant for displaying the average frequency of orders in days.
 *
 * This format string is used to display the average number of days between consecutive orders.
 */
#define CUSTOMER_FREQUENCY_VOLUME_AVERAGE_FREQUENCY_FORMAT "  Average Frequency of Orders: %.2f days\n"

/**
 * @brief A string constant for indicating insufficient data for order frequency calculation.
 *
 * This message is displayed when there is not enough data to calculate a customer's average 
 * order frequency.
 */
#define CUSTOMER_FREQUENCY_VOLUME_INSUFFICIENT_DATA "  Average Frequency of Orders: Not enough data\n"

/**
 * @brief A string constant representing the message for available districts.
 *
 * This message is displayed to inform the user of the districts that are currently available in the system.
 */
#define CUSTOMER_DISTRICT_AVAILABLE "Available districts: "    

/**
 * @brief A string constant for prompting the user to search for a specific district.
 *
 * This prompt is used to request the user to type in a district for searching customers.
 */
#define CUSTOMER_DISTRICT_SEARCH "Type in the district to search:"

/**
 * @brief A string constant for the message when no customers are found in the specified district.
 *
 * This error message is displayed when the search for customers in a given district yields no results.
 */
#define CUSTOMER_DISTRICT_NOT_FOUND "No customers found in this district."   
    
/**
 * @brief A string constant representing the message for available cities.
 *
 * This message is displayed to inform the user of the cities that are currently available in the system.
 */
#define CUSTOMER_CITY_AVAILABLE "Available cities: "    

/**
 * @brief A string constant for prompting the user to search for a specific city.
 *
 * This prompt is used to request the user to type in a city for searching customers.
 */
#define CUSTOMER_CITY_SEARCH "Type in the city to search:"

/**
 * @brief A string constant for the message when no customers are found in the specified city.
 *
 * This error message is displayed when the search for customers in a given city yields no results.
 */
#define CUSTOMER_CITY_NOT_FOUND "No customers found in this city."    
     
/**
 * @brief A string constant representing the message for available streets.
 *
 * This message is displayed to inform the user of the streets that are currently available in the system.
 */
#define CUSTOMER_STREET_AVAILABLE "Available streets: "    

/**
 * @brief A string constant for prompting the user to search for a specific street.
 *
 * This prompt is used to request the user to type in a street for searching customers.
 */
#define CUSTOMER_STREET_SEARCH "Type in the street to search:"

/**
 * @brief A string constant for the message when no customers are found in the specified street.
 *
 * This error message is displayed when the search for customers in a given street yields no results.
 */
#define CUSTOMER_STREET_NOT_FOUND "No customers found in this street."

    
    
#ifdef __cplusplus
}
#endif

#endif /* DESIGNCUSTOMER_H */

