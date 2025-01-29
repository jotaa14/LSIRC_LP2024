/**
 * @file functions.h
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains function declarations for the system operations.
 */

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>
#include <limits.h>

#include "structs.h"
#include "design.h"
#include "consts.h"

#include "fucntionsProduct.h"
#include "designProduct.h"
#include "constsProduct.h"
#include "macrosProduct.h"

#include "fucntionsOrder.h"
#include "designOrder.h"
#include "constsOrder.h"
#include "macrosOrder.h"

#include "functionsMachine.h"
#include "designMachine.h"
#include "constsMachine.h"
#include "macrosMachine.h"

#include "fucntionsCustomer.h"
#include "designCustomer.h"
#include "constsCustomer.h"
#include "macrosCustomer.h"


/**
 * @brief Displays the main menu of the system, allowing the user to interact with various features.
 *
 * This function presents the main interface to the user, providing options for managing orders, machines, 
 * and customers. The user can select an option to create, edit, delete, or list orders, machines, and customers.
 * Depending on the user's choice, the function will trigger the appropriate functionality and interact with 
 * the provided `Management` structure.
 *
 * The function continually prompts the user for input until they decide to exit the menu. Each menu option leads 
 * to further menus or actions, including displaying relevant error messages when necessary.
 *
 * @param management A pointer to the `Management` structure, which contains the system's data and operations.
 *                   This structure is used to manage and manipulate orders, machines, and customers.
 */
void Menu(Management *management);


/**
 * @brief Displays the main menu of the system.
 *
 * This function shows the main menu with options for managing products, customers, orders, 
 * machines, and exiting the application. The menu is presented to the user.
 *
 * @param management - A pointer to the management structure containing the data.
 */
void MenuOutput();

/**
 * @brief Displays the product management menu.
 *
 * This function shows options for creating, editing, deleting, and listing products,
 * as well as managing product processes.
 */
void ProductMenuOutput();

/**
 * @brief Displays the product list menu.
 *
 * This function shows options for listing products, filtering them by category, demand, 
 * name, or price, and listing associated processes for products.
 */
void ProductListMenuOutput();

/**
 * @brief Displays the product category selection menu.
 *
 * This function presents options for selecting the product category from available categories.
 */
void ProductCategoryMenuOutput();

/**
 * @brief Displays the process menu.
 *
 * This function shows options related to the processes associated with products, 
 * such as creating and finishing processes.
 */
void ProcessMenuOutput();

/**
 * @brief Displays the product edit menu.
 *
 * This function allows the user to edit product details, such as name, category, or status.
 */
void ProductEditMenuOutput();

/**
 * @brief Displays the product status edit menu.
 *
 * This function provides options for changing the status of a product (e.g., active, out of stock).
 */
void ProductEditStatusMenuOutput();

/**
 * @brief Displays the process edit menu.
 *
 * This function allows the user to edit details of a process, including time (hours, minutes, seconds),
 * machine assignments, and reports.
 */
void EditProcessOutput();

/**
 * @brief Displays the customer management menu.
 *
 * This function shows options for creating, editing, deleting, and listing customers.
 */
void CustomerMenuOutput();

/**
 * @brief Displays the customer edit menu.
 *
 * This function allows the user to edit customer details, such as name, phone number, email, NIF, and status.
 */
void CustomerEditMenuOutput();

/**
 * @brief Displays the customer status edit menu.
 *
 * This function allows the user to change the status of a customer (e.g., activate or deactivate status).
 */
void CustomerEditStatusMenuOutput();

/**
 * @brief Displays the customer list menu.
 *
 * This function provides options for listing customers, displaying customer orders, or filtering them by name.
 */
void CustomerListMenuOutput();

/**
 * @brief Prints the menu output for the customer process options.
 *
 * This function displays the menu options related to managing customer
 * processes. It helps users navigate through the available operations.
 */
void PrintCustomersProcessMenuOutput();

/**
 * @brief Displays the order management menu.
 *
 * This function shows options for creating, editing, deleting, and listing orders.
 */
void OrderMenuOutput();

/**
 * @brief Displays the order priority menu.
 *
 * This function shows options for selecting the priority of an order (e.g., low, medium, high).
 */
void OrderPriorityMenuOutput();

/**
 * @brief Displays the associate product with order menu.
 *
 * This function allows the user to add a product to an order, and then manage the product order relationship.
 */
void AssociateProductWithOrderOutput();

/**
 * @brief Displays the order edit menu.
 *
 * This function provides options for editing an order's priority, fulfillment status, or canceling the order.
 */
void OrderEditMenuOutput();

/**
 * @brief Displays the order list menu.
 *
 * This function allows the user to view and manage a list of orders, sorted by various criteria such as priority or status.
 */
void OrderListMenuOuput();

/**
 * @brief Displays the order process list menu.
 *
 * This function shows the order process list, displaying details like status, fulfillment, and date for each order.
 */
void OrderListMenuProcessOuput();

/**
 * @brief Displays the order fulfillment menu.
 *
 * This function shows options for managing the fulfillment status of orders, such as marking them as fulfilled or pending.
 */
void OrderListFulfillmentMenu();

/**
 * @brief Displays the machine management menu.
 *
 * This function presents options for creating, editing, deleting, and listing machines in the system.
 */
void MachineMenuOutput();

/**
 * @brief Displays the machine edit menu.
 *
 * This function allows the user to edit machine details such as name, type, and status.
 */
void MachineEditMenuOutput();

/**
 * @brief Displays the machine type menu.
 *
 * This function shows options for selecting the machine type, such as cutting, injection, milling, etc.
 */
void MachineTypeMenuOutput();

/**
 * @brief Displays the machine status menu.
 *
 * This function allows the user to select and manage machine statuses, such as operational, unoperational, or inactive.
 */
void MachineStatusMenuOutput();

/**
 * @brief Outputs the machine reports menu with available options.
 * 
 * This function displays the machine reports menu to the user, providing
 * a list of options related to machine report generation and management.
 * 
 */
void MachineReportsMenuOutput();


/**
 * @brief Clears the input buffer.
 *
 * This function clears any extra or invalid characters that may be present in the input buffer, 
 * ensuring clean input for future user actions.
 */
void ClearInputBuffer();

/**
 * @brief Retrieves an integer input from the user within a specified range.
 *
 * This function prompts the user to enter an integer and ensures that the input falls 
 * within the specified minimum and maximum values. The user will be prompted again if the input is invalid.
 *
 * @param minValue - The minimum acceptable value for the input.
 * @param maxValue - The maximum acceptable value for the input.
 * @param msg - The message to display to the user prompting for input.
 *
 * @return The integer value entered by the user.
 */
int GetInt(int minValue, int maxValue, char *msg);

/**
 * @brief Reads a string input from the user with a specified maximum length.
 *
 * This function prompts the user to input a string and ensures that the input does not exceed 
 * the specified size. The input is stored in the provided string variable.
 *
 * @param str - The string variable to store the input.
 * @param size - The maximum allowed length of the input string.
 * @param msg - The message displayed to prompt the user for input.
 */
void ReadString(char *str, unsigned int size, const char *msg);

/**
 * @brief Loads the management data from a specified file.
 *
 * This function reads the contents of a file and populates the provided `Management` structure 
 * with the data, including machines, customers, products, and orders. It ensures that all data
 * is correctly loaded and formatted according to the file's structure.
 *
 * @param management - A pointer to the `Management` structure to store the loaded data.
 * @param filename - The name of the file from which the data will be loaded.
 */
void LoadManagementFromFile(Management *management, const char *filename);

/**
 * @brief Saves the management data to a specified file.
 *
 * This function writes the contents of the provided `Management` structure to a file, 
 * including all relevant details such as machines, customers, products, and orders. 
 * It ensures the data is saved in a structured and consistent format.
 *
 * @param management - A pointer to the `Management` structure containing the data to save.
 * @param filename - The name of the file where the data will be saved.
 */
void SaveManagementToFile(Management *management, const char *filename);

#endif /* FUNCTIONS_H */

