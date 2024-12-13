/**
 * @file design.h
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains constant definitions related to the design and structure of the system.
 */

#ifndef DESIGN_H
#define DESIGN_H

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
}
#endif


/**
 * @brief A string constant representing the error message for failed input reading.
 *
 * This constant is used to display an error message when the program fails to read input from the user.
 */
#define ERROR_INPUT "ERROR: Failed to read input!\n"

/**
 * @brief A string constant representing the error message for an invalid menu option.
 *
 * This constant is used to display an error message when the user selects an invalid option in the menu.
 */
#define ERROR_MENU "ERROR: Invalid option!"

/**
 * @brief A string constant representing the error message when the maximum number of products is reached.
 *
 * This constant is used to display an error message when the system reaches the maximum allowed number of products.
 */
#define ERROR_PRODUCTS_REACHED "ERROR: Maximum number of products reached!"

/**
 * @brief A string constant representing the error message for a failed memory allocation.
 *
 * This constant is used to display an error message when memory allocation fails in the program.
 */
#define ERROR_MEMORY_ALLOCATION "ERROR: Memory allocation failed!"

/**
 * @brief A string constant representing the error message for an invalid entered value.
 *
 * This constant is used to display an error message when the user enters an invalid value (e.g., incorrect data type).
 */
#define ERROR_INVALID_VALUE "ERROR: The value entered is invalid!"

/**
 * @brief A string constant representing the error message for no available memory.
 *
 * This constant is used to display an error message when there is no available memory for the requested operation.
 */
#define ERROR_NO_MEMORY "ERROR: No memory!"


/**
 * @brief A string constant representing the header for the main menu.
 *
 * This constant is used to display the header of the main menu in the system.
 */
#define MENU_HEADER "---------------MENU---------------"

/**
 * @brief A string constant representing the option for the product menu in the main menu.
 *
 * This constant is used to display the option for accessing the product menu in the main menu.
 */
#define PRODUCT_MENU "| 1-Product Menu                 |"

/**
 * @brief A string constant representing the option for the customer menu in the main menu.
 *
 * This constant is used to display the option for accessing the customer menu in the main menu.
 */
#define CUSTOMER_MENU "| 2-Customer Menu                |"

/**
 * @brief A string constant representing the option for the order menu in the main menu.
 *
 * This constant is used to display the option for accessing the order menu in the main menu.
 */
#define ORDER_MENU "| 3-Order Menu                   |"

/**
 * @brief A string constant representing the option for the machine menu in the main menu.
 *
 * This constant is used to display the option for accessing the machine menu in the main menu.
 */
#define MACHINE_MENU "| 4-Machine Menu                 |"

/**
 * @brief A string constant representing the option for exiting the application.
 *
 * This constant is used to display the option for exiting the program from the main menu.
 */
#define EXIT "| 0-Exit                         |"

/**
 * @brief A string constant representing the bottom separator for the menu.
 *
 * This constant is used to display the bottom separator in the menu, providing a clean look for the menu.
 */
#define MENU_BOTTOM "----------------------------------\n"

/**
 * @brief A string constant representing the prompt asking the user to enter an option.
 *
 * This constant is used to prompt the user to enter their choice in the menu.
 */
#define MENU_OPTION "Enter your option: "


#endif /* DESIGN_H */

