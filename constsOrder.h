/**
 * @file constsOrder.h
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains constant definitions related to order management.
 */


#ifndef CONSTSORDER_H
#define CONSTSORDER_H

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief A constant representing the maximum number of orders in the system.
 *
 * This constant defines the maximum number of orders that can be handled by the system (100).
 */
#define ORDERS_SIZE 100

/**
 * @brief A constant representing the minimum fulfillment value for an order.
 *
 * This constant defines the lowest possible fulfillment value for an order (0%).
 */
#define MIN_FULFILLMENT_VALUE 0

/**
 * @brief A constant representing the maximum fulfillment value for an order.
 *
 * This constant defines the highest possible fulfillment value for an order (100%).
 */
#define MAX_FULFILLMENT_VALUE 100

/**
 * @brief A constant representing the maximum number of products that can be ordered in a single order.
 *
 * This constant defines the maximum number of products that can be included in a single order (200).
 */
#define MAX_ORDERED_PRODUCTS 200

/**
 * @brief A constant representing the maximum size of an order's observation text.
 *
 * This constant defines the maximum length of the observation text for an order (500 characters).
 */
#define OBSERVATION_SIZE 500

/**
 * @brief A constant representing the maximum valid day for the order list process.
 *
 * This constant defines the largest possible day value for processing orders (31).
 */
#define ORDER_LSIT_PROCESS_DAY_MAX 31

/**
 * @brief A constant representing the maximum valid month for the order list process.
 *
 * This constant defines the largest possible month value for processing orders (12).
 */
#define ORDER_LSIT_PROCESS_MONTH_MAX 12


#ifdef __cplusplus
}
#endif

#endif /* CONSTSORDER_H */

