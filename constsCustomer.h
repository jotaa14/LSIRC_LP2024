/**
 * @file constsCustomer.h
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains constant values related to customer management.
 */


#ifndef CONSTSCUSTOMER_H
#define CONSTSCUSTOMER_H

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief A constant representing the minimum number of customers in the system.
 *
 * This constant defines the minimum number of customers that can be managed by the system (1 customer).
 */
#define MIN_CUSTOMERS_SIZE 1

/**
 * @brief A constant representing the maximum number of customers in the system.
 *
 * This constant defines the maximum number of customers that can be managed by the system (50 customers).
 */
#define CUSTOMERS_SIZE 50

/**
 * @brief A constant representing the maximum size of a customer's name.
 *
 * This constant defines the maximum length for a customer's name (100 characters).
 */
#define CUSTOMER_NAME_SIZE 100

/**
 * @brief A constant representing the minimum valid size for a customer's phone number.
 *
 * This constant defines the minimum value for a customer's phone number (100000000).
 */
#define CUSTOMER_PHONE_NUMBER_SIZE_MIN 100000000

/**
 * @brief A constant representing the maximum valid size for a customer's phone number.
 *
 * This constant defines the maximum value for a customer's phone number (999999999).
 */
#define CUSTOMER_PHONE_NUMBER_SIZE_MAX 999999999

/**
 * @brief A constant representing the maximum size of a customer's email.
 *
 * This constant defines the maximum length for a customer's email address (40 characters).
 */
#define CUSTOMER_EMAIL_SIZE 40

/**
 * @brief A constant representing the maximum valid size for a customer's NIF (Tax Identification Number).
 *
 * This constant defines the maximum value for a customer's NIF (999999999).
 */
#define CUSTOMER_NIF_SIZE_MAX 999999999

/**
 * @brief A constant representing the minimum valid size for a customer's NIF (Tax Identification Number).
 *
 * This constant defines the minimum value for a customer's NIF (100000000).
 */
#define CUSTOMER_NIF_SIZE_MIN 100000000

/**
 * @brief A constant representing the minimum day in a date.
 *
 * This constant defines the minimum valid day value (1).
 */
#define MIN_DAY 1

/**
 * @brief A constant representing the maximum day in a date.
 *
 * This constant defines the maximum valid day value (31).
 */
#define MAX_DAY 31

/**
 * @brief A constant representing the minimum month in a date.
 *
 * This constant defines the minimum valid month value (1).
 */
#define MIN_MONTH 1

/**
 * @brief A constant representing the maximum month in a date.
 *
 * This constant defines the maximum valid month value (12).
 */
#define MAX_MONTH 12

/**
 * @brief A constant representing the minimum year in a date.
 *
 * This constant defines the minimum valid year value (2024).
 */
#define MIN_YEAR 2024

/**
 * @brief A constant representing the maximum year in a date.
 *
 * This constant defines the maximum valid year value (2100).
 */
#define MAX_YEAR 2100


    
#ifdef __cplusplus
}
#endif

#endif /* CONSTSCUSTOMER_H */

