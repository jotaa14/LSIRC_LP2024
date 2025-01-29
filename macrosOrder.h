/**
 * @file macrosOrder.h
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief This header file contains macros for managing order-related data structures and operations.
 *
 * These macros simplify access to the fields of order and management structures.
 * They improve code readability and reduce repetitive code when working with 
 * order-related data in a management system.
 */

#ifndef MACROSORDER_H
#define MACROSORDER_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Access individual fields of the current order structure.
 */
#define ACCESS_ORDER management->order /**< Access the order structure. */
#define ACCESS_ORDER_ORDERID order->orderid /**< Access the order ID. */
#define ACCESS_ORDER_PRODUCT_COUNTER order->product_counter /**< Access the product counter in the order. */
#define ACCESS_ORDER_ORDER_PVP order->order_pvp /**< Access the total price (PVP) of the order. */
#define ACCESS_ORDER_TOTAL_HOURS order->total_hours /**< Access the total hours of the order. */
#define ACCESS_ORDER_TOTAL_MINUTES order->total_minutes /**< Access the total minutes of the order. */
#define ACCESS_ORDER_TOTAL_SECONDS order->total_seconds /**< Access the total seconds of the order. */
#define ACCESS_ORDER_CUSTOMER order->customer /**< Access the customer associated with the order. */
#define ACCESS_ORDER_PRODUCT order->product /**< Access the products in the order. */
#define ACCESS_ORDER_PRODUCT_COUNTER order->product_counter /**< Access the product counter for the order. */
#define ACCESS_ORDER_PRODUCT_QUANTITY order->product_quantity /**< Access the quantity of products in the order. */
#define ACCESS_ORDER_REGISTRATION_DAY order->registration_day /**< Access the registration day of the order. */
#define ACCESS_ORDER_REGISTRATION_MONTH order->registration_month /**< Access the registration month of the order. */
#define ACCESS_ORDER_REGISTRATION_YEAR order->registration_year /**< Access the registration year of the order. */
#define ACCESS_ORDER_OBSERVATION order->observation /**< Access the observations for the order. */
#define ACCESS_ORDER_PRIORITY order->priority /**< Access the priority of the order. */
#define ACCESS_ORDER_STATUSORDER order->statusorder /**< Access the status of the order. */
#define ACCESS_ORDER_FULFILLMENT order->fulfillment /**< Access the fulfillment status of the order. */
#define ACCESS_ORDER_CUSTOMER_ID order->customer->id /**< Access the customer ID associated with the order. */
#define ACCESS_ORDER_CUSTOMER_PHONE_NUMBER order->customer->phone_number /**< Access the customer's phone number for the order. */

/**
 * @brief Access order management fields or orders by specific indices.
 */
#define ACCESS_TO_ORDER_COUNTER management->order_counter /**< Access the total order counter. */
#define ACCESS_TO_ORDER_BY_COUNTER management->order[management->order_counter] /**< Access the order by counter index. */
#define ACCESS_TO_ORDER_ORDERID management->order[management->order_counter]->orderid /**< Access the order ID by counter index. */
#define ACCESS_TO_ORDER_PRODUCT_COUNTER management->order[management->order_counter]->product_counter /**< Access the product counter by counter index. */
#define ACCESS_TO_ORDER_ORDER_PVP management->order[management->order_counter]->order_pvp /**< Access the order PVP by counter index. */
#define ACCESS_TO_ORDER_TOTAL_HOURS management->order[management->order_counter]->total_hours /**< Access the total hours by counter index. */
#define ACCESS_TO_ORDER_TOTAL_MINUTES management->order[management->order_counter]->total_minutes /**< Access the total minutes by counter index. */
#define ACCESS_TO_ORDER_TOTAL_SECONDS management->order[management->order_counter]->total_seconds /**< Access the total seconds by counter index. */
#define ACCESS_TO_ORDER_REGISTRATION_DAY management->order[management->order_counter]->registration_day /**< Access the registration day by counter index. */
#define ACCESS_TO_ORDER_REGISTRATION_MONTH management->order[management->order_counter]->registration_month /**< Access the registration month by counter index. */
#define ACCESS_TO_ORDER_REGISTRATION_YEAR management->order[management->order_counter]->registration_year /**< Access the registration year by counter index. */
#define ACCESS_TO_ORDER_PRIORITY management->order[management->order_counter]->priority /**< Access the priority by counter index. */
#define ACCESS_TO_ORDER_FULFILLMENT management->order[management->order_counter]->fulfillment /**< Access the fulfillment status by counter index. */
#define ACCESS_TO_ORDER_OBSERVATION management->order[management->order_counter]->observation /**< Access the observation by counter index. */
#define ACCESS_TO_ORDER_CUSTOMER management->order[management->order_counter]->customer /**< Access the customer by counter index. */

/**
 * @brief Utility macros for order management.
 */
#define ACCESS_TO_ORDER_COUNTER_UTIL management.order_counter /**< Access the order counter as a utility. */
#define ACCESS_TO_ORDER_ID_BY_I_UTIL management.order[i]->orderid /**< Access the order ID by iterator index as a utility. */

    
#define ACCESS_TO_CURRENT_ORDER_PRODUCT_I current_order->product[i] /**< Access the current order product by index. */
#define ACCESS_TO_CURRENT_ORDER_PRODUCT_QUANTITY_NEXT_PRODUCT_INDEX current_order->product_quantity[next_product_index] /**< Access the next product's quantity. */
#define ACCESS_TO_CURRENT_ORDER_PRODUCT_NEXT_PRODUCT_INDEX current_order->product[next_product_index] /**< Access the next product in the current order. */
#define ACCESS_TO_CURRENT_ORDER_PVP current_order->order_pvp /**< Access the PVP (total price) of the current order. */
    
#ifdef __cplusplus
}
#endif

#endif /* MACROSORDER_H */

