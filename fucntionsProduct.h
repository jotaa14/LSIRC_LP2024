/**
 * @file functionsProduct.h
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains function declarations related to product handling in the system.
 */


#ifndef FUCNTIONSPRODUCTS_H
#define FUCNTIONSPRODUCTS_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Retrieves the position of a product in the product list.
 *
 * This function searches for the product in the management database and returns
 * its position in the list.
 *
 * @param management - The management structure containing the list of products.
 * @param number - The identifier of the product to be found.
 *
 * @return The position of the product in the product list, or -1 if not found.
 */
int GetProductPosition(Management management, int number);

/**
 * @brief Allows the user to choose a product from the product list.
 *
 * This function provides the user with an interface to select a product from 
 * the available products in the management system.
 *
 * @param management - A pointer to the management structure containing the product list.
 *
 * @return The ID of the selected product.
 */
int ChooseProduct(Management *management);

/**
 * @brief Allows the user to choose a process for a specific product.
 *
 * This function provides an interface for the user to select a process associated 
 * with a specific product.
 *
 * @param management - A pointer to the management structure containing the products and processes.
 * @param product_id - The ID of the product for which the process should be chosen.
 *
 * @return The ID of the chosen process.
 */
int ChooseProcess(Management *management, int product_id);

/**
 * @brief Creates a new product in the system.
 *
 * This function guides the user through the process of creating a new product and 
 * adding it to the management database.
 *
 * @param management - A pointer to the management structure to store the new product.
 */
void CreateProduct(Management *management);

/**
 * @brief Associates a machine with a specific product.
 *
 * This function links a machine to a product, allowing the machine to be used 
 * in processing the product.
 *
 * @param management - A pointer to the management structure containing products and machines.
 */
void AssociateMachineWithProduct(Management *management);

/**
 * @brief Displays the process menu for managing product processes.
 *
 * This function presents the user with options for managing processes associated 
 * with products.
 *
 * @param management - A pointer to the management structure to handle the process menu.
 */
void ProcessMenu(Management *management);

/**
 * @brief Calculates and updates the total time for a product's production process.
 *
 * This function calculates the total time required for a product based on its 
 * associated processes and updates the product's total time.
 *
 * @param management - A pointer to the management structure containing the product.
 * @param product_id - The ID of the product for which the total time should be calculated.
 */
void TotalTimeProduct(Management *management, int product_id);

/**
 * @brief Edits an existing product in the system.
 *
 * This function allows the user to modify the details of an existing product.
 *
 * @param management - A pointer to the management structure containing the product to be edited.
 */
void EditProduct(Management *management);

/**
 * @brief Edits the status of a product.
 *
 * This function allows the user to change the status of a product (e.g., active, inactive).
 *
 * @param management - A pointer to the management structure containing the product.
 * @param id - The ID of the product whose status is to be edited.
 */
void ProductEditStatus(Management *management, int id);

/**
 * @brief Edits the details of a product process.
 *
 * This function allows the user to modify the details of a process associated 
 * with a product.
 *
 * @param management - A pointer to the management structure containing the product's process.
 */
void EditProcess(Management *management);

/**
 * @brief Deletes a product from the system.
 *
 * This function removes a product from the management database.
 *
 * @param management - A pointer to the management structure to delete the product from.
 */
void DeleteProduct(Management *management);

/**
 * @brief Converts a product category enum to a human-readable string.
 *
 * This function converts the category enum value into a string for easy printing.
 *
 * @param category - The category enum to be converted to a string.
 *
 * @return A string representation of the product category.
 */
char* PrintProductCategory(Category category);

/**
 * @brief Prints the processes associated with a product.
 *
 * This function displays all processes associated with a specific product.
 *
 * @param product - A pointer to the product for which processes are to be displayed.
 * @param i - The index of the process to print.
 */
void PrintProductsProcess(Product *product, int i);

/**
 * @brief Lists all processes of a specific product.
 *
 * This function provides a list of all processes associated with a given product.
 *
 * @param management - A pointer to the management structure containing products and processes.
 * @param product_id - The ID of the product whose processes are to be listed.
 */
void ListProductsProcesses(Management *management, int product_id);

/**
 * @brief Prints the details of a product.
 *
 * This function displays the details of a single product, including its name, category, 
 * price, and other attributes.
 *
 * @param product - A pointer to the product to be printed.
 */
void PrintProducts(Product *product);

/**
 * @brief Lists all products in the system.
 *
 * This function displays all products present in the management system.
 *
 * @param management - A pointer to the management structure containing the product list.
 */
void ListProducts(Management *management);

/**
 * @brief Lists all products across all categories.
 *
 * This function displays all products in the system, including their category and other details.
 *
 * @param management - A pointer to the management structure containing all products.
 */
void ListAllProducts(Management *management);

/**
 * @brief Lists products grouped by their categories.
 *
 * This function organizes products by their categories and displays them.
 *
 * @param management - A pointer to the management structure containing the product list.
 */
void ListProductsByCategories(Management *management);

/**
 * @brief Lists products with the highest demand.
 *
 * This function organizes and displays products with the highest demand (quantity sold).
 *
 * @param management - A pointer to the management structure containing the product list.
 */
void ListProductsByHighestDemand(Management *management);

/**
 * @brief Lists products ordered by their names.
 *
 * This function organizes and displays products alphabetically by name.
 *
 * @param management - A pointer to the management structure containing the product list.
 */
void ListProductsByName(Management *management);

/**
 * @brief Lists products ordered by their price.
 *
 * This function organizes and displays products based on their price, either ascending or descending.
 *
 * @param management - A pointer to the management structure containing the product list.
 */
void ListProductsByPrice(Management *management);

/**
 * @brief Displays the product menu with available options.
 *
 * This function presents the user with options related to managing products.
 *
 * @param management - A pointer to the management structure containing the product data.
 */
void ProductMenu(Management *management);

/**
 * @brief Displays the product list menu with available actions.
 *
 * This function shows the user options for managing and viewing the product list.
 *
 * @param management - A pointer to the management structure containing the product list.
 */
void ProductListMenu(Management *management);

/**
 * @brief Displays the product category menu with available options.
 *
 * This function allows the user to select a category of products for filtering.
 *
 * @return The selected product category option.
 */
int ProductCategoryMenu();



#ifdef __cplusplus
}
#endif
#endif /* FUCNTIONSPRODUCTS_H */

