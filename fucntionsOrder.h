/**
 * @file functionsOrder.h
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains function declarations for order management.
 */


#ifndef FUCNTIONSORDER_H
#define FUCNTIONSORDER_H

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Retrieves the position of an order in the order list.
 *
 * This function searches for the order in the management database and returns
 * its position in the list.
 *
 * @param management - The management structure containing the list of orders.
 * @param number - The identifier of the order to be found.
 *
 * @return The position of the order in the order list, or -1 if not found.
 */
int GetOrderPosition(Management management, int number);

/**
 * @brief Allows the user to choose an order from the order list.
 *
 * This function provides the user with an interface to select an order from 
 * the available orders in the management system.
 *
 * @param management - A pointer to the management structure containing the order list.
 *
 * @return The ID of the selected order.
 */
int ChooseOrder(Management *management);

/**
 * @brief Associates a status with an order fulfillment.
 *
 * This function assigns a fulfillment status (e.g., completed, pending) to an order.
 *
 * @param management - A pointer to the management structure containing the order.
 * @param id - The ID of the order to associate the fulfillment status with.
 */
void AssociateStatusToFulfillment(Management *management, int id);

/**
 * @brief Creates a new order in the system.
 *
 * This function guides the user through the process of creating a new order and 
 * adding it to the management database.
 *
 * @param management - A pointer to the management structure to store the new order.
 */
void CreateOrder(Management *management);

/**
 * @brief Associates a customer with an order.
 *
 * This function links a customer to an order, enabling the order to be assigned 
 * to a specific customer.
 *
 * @param management - A pointer to the management structure containing customers and orders.
 */
void AssociateCustomerWithOrder(Management *management);

/**
 * @brief Associates a product with an order.
 *
 * This function links a product to an order, allowing the order to contain 
 * the specified product.
 *
 * @param management - A pointer to the management structure containing orders and products.
 */
void AssociateProductWithOrder(Management *management);

/**
 * @brief Updates the total time for an order based on its products.
 *
 * This function calculates the total processing time for the entire order, 
 * based on the time of its associated products and processes.
 *
 * @param management - A pointer to the management structure containing the order.
 * @param order_id - The ID of the order to update the total time.
 */
void UpdateOrderTotalTime(Management *management, int order_id);

/**
 * @brief Synchronizes orders after a product update.
 *
 * This function ensures that all orders containing the updated product 
 * are synchronized with the changes in the product data.
 *
 * @param management - A pointer to the management structure containing orders and products.
 * @param product_id - The ID of the updated product.
 */
void SynchronizeOrdersAfterProductUpdate(Management *management, int product_id);

/**
 * @brief Edits an existing order in the system.
 *
 * This function allows the user to modify the details of an existing order.
 *
 * @param management - A pointer to the management structure containing the order to be edited.
 */
void EditOrder(Management *management);

/**
 * @brief Deletes an order from the system.
 *
 * This function removes an order from the management database.
 *
 * @param management - A pointer to the management structure to delete the order from.
 */
void DeleteOrder(Management *management);

/**
 * @brief Converts an order priority enum to a human-readable string.
 *
 * This function converts the priority enum value into a string for easy printing.
 *
 * @param priority - The priority enum to be converted to a string.
 *
 * @return A string representation of the order priority.
 */
char* PrintOrderPriority(Priority priority);

/**
 * @brief Converts an order status enum to a human-readable string.
 *
 * This function converts the status enum value into a string for easy printing.
 *
 * @param statusorder - The order status enum to be converted to a string.
 *
 * @return A string representation of the order status.
 */
char* PrintOrderStatus(StatusOrder statusorder);

/**
 * @brief Prints the details of a specific order.
 *
 * This function displays all details related to a specific order, such as 
 * the customer, products, status, and total time.
 *
 * @param order - A pointer to the order to be printed.
 */
void PrintOrders(Order *order);

/**
 * @brief Lists all orders in the system.
 *
 * This function displays all orders present in the management system.
 *
 * @param management - A pointer to the management structure containing the orders.
 */
void ListOrders(Management *management);

/**
 * @brief Prints the products associated with an order.
 *
 * This function lists all products linked to a specific order, including their 
 * quantity and other relevant details.
 *
 * @param order - A pointer to the order whose products should be printed.
 */
void PrintOrderProducts(Order *order);

/**
 * @brief Displays the details of all orders in the system.
 *
 * This function presents the user with a detailed overview of all orders, 
 * including their status, total time, customer, and product details.
 *
 * @param management - A pointer to the management structure containing the orders.
 */
void DisplayOrderDetails(Management *management);

/**
 * @brief Lists orders filtered by priority.
 *
 * This function sorts and displays orders based on their priority (low, medium, high).
 *
 * @param management - A pointer to the management structure containing the orders.
 */
void ListOrdersByPriority(Management *management);

/**
 * @brief Lists orders filtered by their status.
 *
 * This function organizes and displays orders based on their current status 
 * (e.g., open, production, closed, canceled).
 *
 * @param management - A pointer to the management structure containing the orders.
 */
void ListOrdersByStatus(Management *management);

/**
 * @brief Lists orders sorted by their price.
 *
 * This function organizes and displays orders by the total price of their 
 * associated products.
 *
 * @param management - A pointer to the management structure containing the orders.
 */
void ListOrdersByPrice(Management *management);

/**
 * @brief Displays the fulfillment status of orders.
 *
 * This function lists all orders and their corresponding fulfillment status.
 *
 * @param management - A pointer to the management structure containing the orders.
 */
void OrderListFulfillment(Management *management);

/**
 * @brief Displays the order menu with available options.
 *
 * This function presents the user with options related to managing orders.
 *
 * @param management - A pointer to the management structure containing the order data.
 */
void OrderMenu(Management *management);

/**
 * @brief Displays the order list menu with available actions.
 *
 * This function shows the user options for managing and viewing the order list.
 *
 * @param management - A pointer to the management structure containing the order list.
 */
void OrderListMenu(Management *management);

/**
 * @brief Displays the order priority menu with available options.
 *
 * This function allows the user to select the priority for an order.
 *
 * @return The selected order priority option.
 */
int OrderPriorityMenu();



#ifdef __cplusplus
}
#endif

#endif /* FUCNTIONSORDER_H */

