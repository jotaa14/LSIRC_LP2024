/**
 * @file macrosCustomer.h
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief This header file contains macros for managing customer-related data structures and operations.
 *
 * These macros simplify access to the fields of customer and management structures.
 * They are particularly useful for improving code readability and reducing repetitive code when working with 
 * customer-related data in a management system.
 */

#ifndef MACROSCUSTOMER_H
#define MACROSCUSTOMER_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Access individual fields of the current customer structure.
 */
#define ACCESS_CUSTOMER_ID customer->id                         /**< Access the customer's ID. */
#define ACCESS_CUSTOMER_NAME customer->name                     /**< Access the customer's name. */
#define ACCESS_CUSTOMER_PHONE_NUMBER customer->phone_number     /**< Access the customer's phone number. */
#define ACCESS_CUSTOMER_EMAIL customer->email                   /**< Access the customer's email. */
#define ACCESS_CUSTOMER_NIF customer->nif                       /**< Access the customer's NIF (tax identification number). */
#define ACCESS_CUSTOMER_DISTRICT customer->district             /**< Access the customer's district. */
#define ACCESS_CUSTOMER_CITY customer->city                     /**< Access the customer's city. */
#define ACCESS_CUSTOMER_STREET customer->street                 /**< Access the customer's street. */
#define ACCESS_CUSTOMER_STATUS customer->status                 /**< Access the customer's status. */
#define ACCESS_CUSTOMER_REGISTRATION_DAY customer->registration_day /**< Access the customer's registration day. */
#define ACCESS_CUSTOMER_REGISTRATION_MONTH customer->registration_month /**< Access the customer's registration month. */
#define ACCESS_CUSTOMER_REGISTRATION_YEAR customer->registration_year /**< Access the customer's registration year. */
#define ACCESS_CUSTOMER_USED_BY_ORDER customer->used_by_order   /**< Access the customer's usage count in orders. */

/**
 * @brief Access customer management fields or customers by specific indices.
 */
#define ACCESS_TO_CUSTOMER_COUNTER management->customer_counter /**< Access the total customer count. */
#define ACCESS_TO_CUSTOMER_BY_COUNTER management->customer[management->customer_counter] /**< Access the customer by counter index. */
#define ACCESS_TO_CUSTOMER_ID management->customer[management->customer_counter]->id /**< Access customer ID by counter index. */
#define ACCESS_TO_CUSTOMER_NAME management->customer[management->customer_counter]->name /**< Access customer name by counter index. */
#define ACCESS_TO_CUSTOMER_PHONE_NUMBER management->customer[management->customer_counter]->phone_number /**< Access customer phone number by counter index. */
#define ACCESS_TO_CUSTOMER_EMAIL management->customer[management->customer_counter]->email /**< Access customer email by counter index. */
#define ACCESS_TO_CUSTOMER_NIF management->customer[management->customer_counter]->nif /**< Access customer NIF by counter index. */
#define ACCESS_TO_CUSTOMER_DISTRICT management->customer[management->customer_counter]->district /**< Access customer district by counter index. */
#define ACCESS_TO_CUSTOMER_CITY management->customer[management->customer_counter]->city /**< Access customer city by counter index. */
#define ACCESS_TO_CUSTOMER_STREET management->customer[management->customer_counter]->street /**< Access customer street by counter index. */
#define ACCESS_TO_CUSTOMER_STATUS management->customer[management->customer_counter]->status /**< Access customer status by counter index. */
#define ACCESS_TO_CUSTOMER_REGISTRATION_DAY management->customer[management->customer_counter]->registration_day /**< Access customer registration day by counter index. */
#define ACCESS_TO_CUSTOMER_REGISTRATION_MONTH management->customer[management->customer_counter]->registration_month /**< Access customer registration month by counter index. */
#define ACCESS_TO_CUSTOMER_REGISTRATION_YEAR management->customer[management->customer_counter]->registration_year /**< Access customer registration year by counter index. */
#define ACCESS_TO_CUSTOMER_STATUS_NUM management->customer[management->customer_counter]->status_num /**< Access customer status number by counter index. */
#define ACCESS_TO_CUSTOMER_USED_BY_ORDER management->customer[management->customer_counter]->used_by_order /**< Access customer's usage count in orders by counter index. */

/**
 * @brief Access specific customers or their fields by unique IDs.
 */
#define ACCESS_TO_CUSTOMER_BY_ID management->customer[id] /**< Access a customer by ID. */
#define ACCESS_TO_CUSTOMER_NAME_BY_ID management->customer[id]->name /**< Access customer name by ID. */
#define ACCESS_TO_CUSTOMER_PHONE_NUMBER_BY_ID management->customer[id]->phone_number /**< Access customer phone number by ID. */
#define ACCESS_TO_CUSTOMER_EMAIL_BY_ID management->customer[id]->email /**< Access customer email by ID. */
#define ACCESS_TO_CUSTOMER_NIF_BY_ID management->customer[id]->nif /**< Access customer NIF by ID. */
#define ACCESS_TO_CUSTOMER_DISTRICT_BY_ID management->customer[id]->district /**< Access customer district by ID. */
#define ACCESS_TO_CUSTOMER_CITY_BY_ID management->customer[id]->city /**< Access customer city by ID. */
#define ACCESS_TO_CUSTOMER_STREET_BY_ID management->customer[id]->street /**< Access customer street by ID. */
#define ACCESS_TO_CUSTOMER_STATUS_BY_ID management->customer[id]->status /**< Access customer status by ID. */
#define ACCESS_TO_CUSTOMER_STATUS_NUM_BY_ID management->customer[id]->status_num /**< Access customer status number by ID. */

/**
 * @brief Access customers or their fields by iterators.
 */
#define ACCESS_TO_CUSTOMER_BY_I management->customer[i] /**< Access a customer by iterator index. */
#define ACCESS_TO_CUSTOMER_BY_I_PLUS management->customer[i + 1] /**< Access the next customer by iterator index. */
#define ACCESS_TO_CUSTOMER_ID_BY_I management->customer[i]->id /**< Access customer ID by iterator index. */
#define ACCESS_TO_CUSTOMER_COUNTER_LESS management->customer[management->customer_counter - 1] /**< Access the last customer in the array. */
#define ACCESS_TO_CUSTOMER_DISTRICT_BY_I management->customer[i]->district /**< Access customer district by iterator index. */
#define ACCESS_TO_CUSTOMER_CITY_BY_I management->customer[i]->city /**< Access customer city by iterator index. */
#define ACCESS_TO_CUSTOMER_STREET_BY_I management->customer[i]->street /**< Access customer street by iterator index. */

/**
 * @brief Access specific customer fields using a provided customer ID.
 */
#define ACCESS_TO_CUSTOMER_BY_CUSTOMER_ID management->customer[customer_id] /**< Access a customer by provided ID. */
#define ACCESS_TO_CUSTOMER_USED_BY_ORDER_BY_CUSTOMER_ID management->customer[customer_id]->used_by_order /**< Access customer's usage count in orders by provided ID. */

/**
 * @brief Access utility fields for customer management.
 */
#define ACCESS_TO_CUSTOMER_COUNTER_UTIL management.customer_counter /**< Access customer counter as a utility. */
#define ACCESS_TO_CUSTOMER_ID_BY_I_UTIL management.customer[i]->id /**< Access customer ID by iterator as a utility. */

#ifdef __cplusplus
}
#endif

#endif /* MACROSCUSTOMER_H */