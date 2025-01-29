/**
 * @file functionsCustomer.h
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains function declarations for customer management.
 */


#ifndef FUCNTIONSCUSTOMER_H
#define FUCNTIONSCUSTOMER_H

#ifdef __cplusplus
extern "C" {
#endif

    
/**
 * @brief Retrieves the position of a customer in the customer list.
 *
 * This function searches for a customer in the management database and returns 
 * its position in the list.
 *
 * @param management - The management structure containing the list of customers.
 * @param num - The identifier of the customer to be found.
 *
 * @return The position of the customer in the customer list, or -1 if not found.
 */
int GetCustomerPosition(Management management, int num);

/**
 * @brief Allows the user to choose a customer from the customer list.
 *
 * This function provides the user with an interface to select a customer 
 * from the available customers in the management system.
 *
 * @param management - A pointer to the management structure containing the customer list.
 *
 * @return The ID of the selected customer.
 */
int ChooseCustomer(Management *management);

/**
 * @brief Creates a new customer in the system.
 *
 * This function guides the user through the process of creating a new customer 
 * and adding them to the management database.
 *
 * @param management - A pointer to the management structure to store the new customer.
 */
void CreateCustomers(Management *management);

/**
 * @brief Edits an existing customer's details.
 *
 * This function allows the user to modify the details of an existing customer.
 *
 * @param management - A pointer to the management structure containing the customer to be edited.
 */
void EditCustomer(Management *management);

/**
 * @brief Edits the status of an existing customer.
 *
 * This function allows the user to change the status of an existing customer.
 *
 * @param management - A pointer to the management structure containing the customer to be edited.
 * @param id - The ID of the customer whose status is to be edited.
 */
void CustomerEditStatus(Management *management, int id);

/**
 * @brief Deletes a customer from the system.
 *
 * This function removes a customer from the management database.
 *
 * @param management - A pointer to the management structure to delete the customer from.
 */
void DeleteCustomer(Management *management);

/**
 * @brief Cleans up data associated with a customer.
 *
 * This function clears sensitive or unnecessary data associated with a specific customer.
 *
 * @param customer - A pointer to the customer whose data needs to be cleaned.
 */
void CleanDataCustomer(Customer *customer);

/**
 * @brief Prints the details of a specific customer.
 *
 * This function displays all details related to a specific customer, such as 
 * their name, phone number, email, and status.
 *
 * @param customer - A pointer to the customer whose details will be printed.
 */
void PrintCustomers(Customer *customer);

/**
 * @brief Lists all customers in the system.
 *
 * This function displays all customers present in the management system.
 *
 * @param management - A pointer to the management structure containing the customer list.
 */
void ListCustomers(Management *management);

/**
 * @brief Lists all customers with their detailed information.
 *
 * This function shows all customers in the management system, including all relevant details.
 *
 * @param management - A pointer to the management structure containing the customer list.
 */
void ListAllCustomers(Management *management);

/**
 * @brief Displays orders associated with a specific customer.
 *
 * This function displays all orders placed by a specific customer, allowing the user 
 * to view detailed information about each order.
 *
 * @param management - A pointer to the management structure containing the customer and orders.
 */
void DisplayOrdersByCustomer(Management *management);

/**
 * @brief Lists customers by name.
 *
 * This function lists all customers, sorted alphabetically by their names.
 *
 * @param management - A pointer to the management structure containing the customer list.
 */
void ListCustomersByName(Management *management);

/**
 * @brief Compares two customers based on their order frequency and volume.
 *
 * This function is used by the `qsort` function to compare customers by the number of orders 
 * they have placed. If two customers have the same number of orders, they are further 
 * compared by their names alphabetically.
 *
 * @param a - A pointer to the first customer to compare.
 * @param b - A pointer to the second customer to compare.
 * 
 * @return A negative integer, zero, or a positive integer depending on whether the first 
 *         customer is considered less than, equal to, or greater than the second customer.
 */
int CompareCustomers(const void *a, const void *b);

/**
 * @brief Calculates the frequency of orders placed by a customer.
 *
 * This function calculates the average number of days between consecutive orders placed 
 * by a customer. If the customer has placed fewer than two orders, it returns -1 to indicate 
 * insufficient data for calculating the frequency.
 *
 * @param management - A pointer to the management structure containing the order list.
 * @param customer - A pointer to the customer for whom the order frequency is calculated.
 *
 * @return The average frequency of orders placed by the customer in days. If there is 
 *         insufficient data, it returns -1.
 */
double CalculateOrderFrequency(Management *management, Customer *customer);

/**
 * @brief Displays customers sorted by order frequency and volume.
 *
 * This function lists customers sorted by the frequency of their orders and their total 
 * order volume. For each customer, the total number of orders, total order volume, and 
 * average frequency of orders are displayed.
 *
 * @param management - A pointer to the management structure containing the customer and order lists.
 */
void DisplayCustomersByOrderFrequencyAndVolume(Management *management);


/**
 * @brief Displays the customer menu with available options.
 *
 * This function presents the user with options related to managing customers.
 *
 * @param management - A pointer to the management structure containing the customer data.
 */
void CustomerMenu(Management *management);

/**
 * @brief Displays the customer list menu with available options.
 *
 * This function provides the user with options to manage and view the customer list.
 *
 * @param management - A pointer to the management structure containing the customer list.
 */
void CustomerListMenu(Management *management);

/**
 * @brief Lists all customers associated with a specific process location.
 *
 * This function retrieves and displays all customers in the system who are
 * associated with a particular process or location. It helps in filtering
 * and presenting customers based on a specified local process.
 *
 * @param management A pointer to the Management structure containing
 * the customer and process data. This structure should include
 * information on customers and processes that allows for filtering
 * and listing the customers based on the specified location.
 */
void ListCustomersByLocal(Management *management);


/**
 * @brief Searches and displays customers based on their street address.
 *
 * This function allows the user to find and list customers
 * whose addresses match a specified street name.
 *
 * @param management A pointer to the Management structure containing
 *        customer data.
 */
void SearchByStreet(Management *management);

/**
 * @brief Searches and displays customers based on their city.
 *
 * This function allows the user to find and list customers
 * whose addresses are located in a specified city.
 *
 * @param management A pointer to the Management structure containing
 *        customer data.
 */
void SearchByCity(Management *management);

/**
 * @brief Searches and displays customers based on their district.
 *
 * This function allows the user to find and list customers
 * whose addresses are located in a specified district.
 *
 * @param management A pointer to the Management structure containing
 *        customer data.
 */
void SearchByDistric(Management *management);

#ifdef __cplusplus
}
#endif

#endif /* FUCNTIONSCUSTOMER_H */

