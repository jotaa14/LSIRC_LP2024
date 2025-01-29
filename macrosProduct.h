/**
 * @file macrosProduct.h
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief This header file contains macros for managing product-related data structures and operations.
 *
 * These macros simplify access to the fields of product and management structures.
 * They are designed to enhance code readability and reduce repetitive code when dealing with 
 * product-related data in a management system.
 */

#ifndef MACROSPRODUCT_H
#define MACROSPRODUCT_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Access the current product in the management system.
 */
#define ACCESS_PRODUCT management->product

/**
 * @brief Access product management fields or products by specific indices.
 */
#define ACCESS_TO_PRODUCT_COUNTER management->product_counter /**< Access the total product count. */
#define ACCESS_TO_PRODUCT_BY_COUNTER management->product[management->product_counter] /**< Access the product by counter index. */
#define ACCESS_TO_PRODUCT_ID management->product[management->product_counter]->id /**< Access product ID by counter index. */
#define ACCESS_TO_PRODUCT_NAME management->product[management->product_counter]->name /**< Access product name by counter index. */
#define ACCESS_TO_PRODUCT_CATEGORY management->product[management->product_counter]->category /**< Access product category by counter index. */
#define ACCESS_TO_PRODUCT_MACHINEID management->product[management->product_counter]->machineid /**< Access product machine ID by counter index. */
#define ACCESS_TO_PRODUCT_HOURS_WASTED management->product[management->product_counter]->hours_wasted /**< Access product hours wasted by counter index. */
#define ACCESS_TO_PRODUCT_MINUTES_WASTED management->product[management->product_counter]->minutes_wasted /**< Access product minutes wasted by counter index. */
#define ACCESS_TO_PRODUCT_SECONDS_WASTED management->product[management->product_counter]->seconds_wasted /**< Access product seconds wasted by counter index. */
#define ACCESS_TO_PRODUCT_STATUS management->product[management->product_counter]->status /**< Access product status by counter index. */
#define ACCESS_TO_PRODUCT_STATUS_NUM management->product[management->product_counter]->status_num /**< Access product status number by counter index. */
#define ACCESS_TO_PRODUCT_PVP management->product[management->product_counter]->pvp /**< Access product price (PVP) by counter index. */
#define ACCESS_TO_PRODUCT_PROCESS_COUNTER management->product[management->product_counter]->process_counter /**< Access product process counter by counter index. */
#define ACCESS_TO_PRODUCT_TOTAL_SELLED management->product[management->product_counter]->total_selled /**< Access total products sold by counter index. */
#define ACCESS_TO_PRODUCT_TOTAL_SECONDS management->product[management->product_counter]->total_seconds /**< Access total seconds for processes by counter index. */
#define ACCESS_TO_PRODUCT_TOTAL_MINUTES management->product[management->product_counter]->total_minutes /**< Access total minutes for processes by counter index. */
#define ACCESS_TO_PRODUCT_TOTAL_HOURS management->product[management->product_counter]->total_hours /**< Access total hours for processes by counter index. */
#define ACCESS_TO_PRODUCT_USED_BY_ORDER management->product[management->product_counter]->used_by_order /**< Access product usage count in orders by counter index. */

/**
 * @brief Access specific process times for the current product.
 */
#define ACCESS_TO_PROCESS_i_SECONDS management->product[management->product_counter]->process[i]->process_seconds /**< Access process seconds by iterator. */
#define ACCESS_TO_PROCESS_i_MINUTES management->product[management->product_counter]->process[i]->process_minutes /**< Access process minutes by iterator. */
#define ACCESS_TO_PROCESS_i_HOURS management->product[management->product_counter]->process[i]->process_hours /**< Access process hours by iterator. */

/**
 * @brief Access specific products or their fields by unique IDs.
 */
#define ACCESS_TO_PRODUCT_BY_ID management->product[id] /**< Access a product by ID. */
#define ACCESS_TO_PRODUCT_NAME_BY_ID management->product[id]->name /**< Access product name by ID. */
#define ACCESS_TO_PRODUCT_CATEGORY_BY_ID management->product[id]->category /**< Access product category by ID. */
#define ACCESS_TO_PRODUCT_HOURS_WASTED_BY_ID management->product[id]->hours_wasted /**< Access product hours wasted by ID. */
#define ACCESS_TO_PRODUCT_MINUTES_WASTED_BY_ID management->product[id]->minutes_wasted /**< Access product minutes wasted by ID. */
#define ACCESS_TO_PRODUCT_SECONDS_WASTED_BY_ID management->product[id]->seconds_wasted /**< Access product seconds wasted by ID. */
#define ACCESS_TO_PRODUCT_STATUS_BY_ID management->product[id]->status /**< Access product status by ID. */
#define ACCESS_TO_PRODUCT_STATUS_NUM_BY_ID management->product[id]->status_num /**< Access product status number by ID. */
#define ACCESS_TO_PRODUCT_USED_BY_ORDER_BY_ID management->product[id]->used_by_order /**< Access product usage count in orders by ID. */
#define ACCESS_TO_PRODUCT_PROCESS_COUNTER_BY_ID management->product[id]->process_counter /**< Access product process counter by ID. */

/**
 * @brief Access products or their fields by iterators.
 */
#define ACCESS_TO_PRODUCT_BY_I management->product[i] /**< Access a product by iterator index. */
#define ACCESS_TO_PRODUCT_BY_I_ID management->product[i]->id /**< Access product ID by iterator index. */

/**
 * @brief Access specific product fields using a provided product ID.
 */
#define ACCESS_TO_PRODUCT_BY_PRODUCT_ID management->product[product_id] /**< Access a product by provided ID. */
#define ACCESS_TO_PRODUCT_USED_BY_ORDER_PRODUCT_ID management->product[product_id]->used_by_order /**< Access product usage count in orders by provided ID. */
#define ACCESS_TO_PRODUCT_NAME_BY_PRODUCT_ID management->product[product_id]->name /**< Access product name by provided ID. */
#define ACCESS_TO_PRODUCT_TOTAL_SELLED_BY_PRODUCT_ID management->product[product_id]->total_selled /**< Access total products sold by provided ID. */
#define ACCESS_TO_PRODUCT_PVP_BY_PRODUCT_ID management->product[product_id]->pvp /**< Access product price (PVP) by provided ID. */
#define ACCESS_TO_PRODUCT_PRODUCT_ID management->product[product_id] /**< Access product by provided ID. */
#define ACCESS_TO_PRODUCT_TOTAL_SECONDS_BY_PRODUCT_ID management->product[product_id]->total_seconds /**< Access total seconds for processes by provided ID. */
#define ACCESS_TO_PRODUCT_TOTAL_MINUTES_BY_PRODUCT_ID management->product[product_id]->total_minutes /**< Access total minutes for processes by provided ID. */
#define ACCESS_TO_PRODUCT_TOTAL_HOURS_BY_PRODUCT_ID management->product[product_id]->total_hours /**< Access total hours for processes by provided ID. */
#define ACCESS_TO_PRODUCT_PROCESS_COUNTER_BY_PRODUCT_ID management->product[product_id]->process_counter /**< Access product process counter by provided ID. */

/**
 * @brief Access individual fields of the current product structure.
 */
#define ACCESS_PRODUCT_ID product->id /**< Access the product's ID. */
#define ACCESS_PRODUCT_NAME product->name /**< Access the product's name. */
#define ACCESS_PRODUCT_CATEGORY product->category /**< Access the product's category. */
#define ACCESS_PRODUCT_STATUS product->status /**< Access the product's status. */
#define ACCESS_PRODUCT_TOTAL_SELLED product->total_selled /**< Access the total products sold. */
#define ACCESS_PRODUCT_PROCESS_COUNTER product->process_counter /**< Access the product's process counter. */
#define ACCESS_PRODUCT_PROCESS_PROCESS_ID product->process[process_id] /**< Access the process by its ID. */
#define ACCESS_PRODUCT_TOTAL_HOURS product->total_hours /**< Access total hours spent on the product. */
#define ACCESS_PRODUCT_TOTAL_MINUTES product->total_minutes /**< Access total minutes spent on the product. */
#define ACCESS_PRODUCT_TOTAL_SECONDS product->total_seconds /**< Access total seconds spent on the product. */
#define ACCESS_PRODUCT_PVP product->pvp /**< Access the product's price. */

/**
 * @brief Access utility fields for product management.
 */
#define ACCESS_TO_PRODUCT_COUNTER_UTIL management.product_counter /**< Access product counter as a utility. */
#define ACCESS_TO_PRODUCT_BY_I_ID_UTIL management.product[i]->id /**< Access product ID by iterator as a utility. */
    
#define ACCESS_TO_PROCESS_MACHINE management->product[management->product_counter]->process[management->product[management->product_counter]->process_counter]->machine /**< Access process machine. */
#define ACCESS_TO_PROCESS_ID management->product[management->product_counter]->process[management->product[management->product_counter]->process_counter]->id /**< Access process ID. */
#define ACCESS_TO_PROCESS_HOURS management->product[management->product_counter]->process[management->product[management->product_counter]->process_counter]->process_hours /**< Access process hours. */
#define ACCESS_TO_PROCESS_MINUTES management->product[management->product_counter]->process[management->product[management->product_counter]->process_counter]->process_minutes /**< Access process minutes. */
#define ACCESS_TO_PROCESS_SECONDS management->product[management->product_counter]->process[management->product[management->product_counter]->process_counter]->process_seconds /**< Access process seconds. */
#define ACCESS_TO_PROCESS_REPORT management->product[management->product_counter]->process[management->product[management->product_counter]->process_counter]->report /**< Access process report. */
#define ACCESS_TO_PROCESS management->product[management->product_counter]->process[management->product[management->product_counter]->process_counter] /**< Access process structure. */

#define ACCESS_TO_PROCESS_J_BY_PRODUCT_ID management->product[id]->process[j] /**< Access process by iterator j and product ID. */
#define ACCESS_TO_PROCESS_J product->process[j] /**< Access process by iterator j. */
    
#define ACCESS_PROCESS_I_ID product->process[i]->id /**< Access process ID by iterator i. */
#define ACCESS_PROCESS_I_MACHINE_ID product->process[i]->machine->id /**< Access machine ID for process by iterator i. */
#define ACCESS_PROCESS_I_HOURS product->process[i]->process_hours /**< Access process hours by iterator i. */
#define ACCESS_PROCESS_I_MINUTES product->process[i]->process_minutes /**< Access process minutes by iterator i. */
#define ACCESS_PROCESS_I_SECONDS product->process[i]->process_seconds /**< Access process seconds by iterator i. */
#define ACCESS_PROCESS_I_REPORT product->process[i]->report /**< Access process report by iterator i. */
    
#define ACCESS_PROCESS_MACHINE process->machine /**< Access the machine for the process. */
#define ACCESS_PROCESS_MACHINE_ID process->machine->id /**< Access machine ID for process. */
#define ACCESS_PROCESS_HOURS process->process_hours /**< Access process hours. */
#define ACCESS_PROCESS_MINUTES process->process_minutes /**< Access process minutes. */
#define ACCESS_PROCESS_SECONDS process->process_seconds /**< Access process seconds. */
  
#define ACCESS_TO_PRODUCT_J management->product[j] /**< Access product by iterator j. */
#define ACCESS_TO_PRODUCT_K management->product[k] /**< Access product by iterator k. */
#define ACCESS_TO_PRODUCT_PROCESS_L product->process[l] /**< Access process by iterator l. */

#ifdef __cplusplus
}
#endif

#endif /* MACROSPRODUCT_H */