/**
 * @file constsProduct.h
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains constants related to product management.
 */


#ifndef CONSTSPRODUCT_H
#define CONSTSPRODUCT_H

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief A constant representing the maximum length for a status string.
 *
 * This constant defines the maximum size for a status string (15 characters).
 */
#define STATUS_SIZE 15

/**
 * @brief A constant representing the maximum length for a product category string.
 *
 * This constant defines the maximum size for a product category string (20 characters).
 */
#define PRODUCT_CATEGORY_SIZE 20

/**
 * @brief A constant representing the minimum number of hours wasted.
 *
 * This constant defines the smallest number of hours that can be wasted (0 hours).
 */
#define MIN_HOURS_WASTED 0 

/**
 * @brief A constant representing the maximum number of hours wasted.
 *
 * This constant defines the largest number of hours that can be wasted (100 hours).
 */
#define MAX_HOURS_WASTED 100

/**
 * @brief A constant representing the minimum number of minutes wasted.
 *
 * This constant defines the smallest number of minutes that can be wasted (0 minutes).
 */
#define MIN_MINUTES_WASTED 0 

/**
 * @brief A constant representing the maximum number of minutes wasted.
 *
 * This constant defines the largest number of minutes that can be wasted (59 minutes).
 */
#define MAX_MINUTES_WASTED 59

/**
 * @brief A constant representing the minimum number of seconds wasted.
 *
 * This constant defines the smallest number of seconds that can be wasted (0 seconds).
 */
#define MIN_SECONDS_WASTED 0 

/**
 * @brief A constant representing the maximum number of seconds wasted.
 *
 * This constant defines the largest number of seconds that can be wasted (59 seconds).
 */
#define MAX_SECONDS_WASTED 59

/**
 * @brief A constant representing the maximum number of products in the system.
 *
 * This constant defines the maximum number of products that can be managed by the system (50 products).
 */
#define PRODUCTS_SIZE 50

/**
 * @brief A constant representing the maximum size of a product's name.
 *
 * This constant defines the maximum length for a product's name (60 characters).
 */
#define PRODUCT_NAME_SIZE 60

/**
 * @brief A constant representing the maximum size of a report string.
 *
 * This constant defines the maximum size for a report string (300 characters).
 */
#define REPORT_SIZE 300

/**
 * @brief A constant representing the maximum number of processes in the system.
 *
 * This constant defines the maximum number of processes that can be associated with a product (15 processes).
 */
#define PROCESS_SIZE 15




#ifdef __cplusplus
}
#endif

#endif /* CONSTSPRODUCT_H */

