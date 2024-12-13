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


#ifdef __cplusplus
}
#endif

#endif /* FUCNTIONSCUSTOMER_H */
