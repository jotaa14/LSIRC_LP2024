/**
 * @file structs.h
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains the definitions of structures and enumerations used in the system.
 */

#ifndef STRUCTS_H
#define STRUCTS_H

#ifdef __cplusplus
extern "C" {
#endif

#include "functions.h"
#include "constsProduct.h"
#include "constsOrder.h"
#include "constsMachine.h"
#include "constsCustomer.h"
/**
 * @brief Enum representing the different types of machines.
 *
 * This enum defines the various types of machines used in the system.
 */
typedef enum{
    MACHINE_TYPE_CUT, 
    MACHINE_TYPE_INJECTION, 
    MACHINE_TYPE_SOLDER,
    MACHINE_TYPE_MILLING,
    MACHINE_TYPE_SANDING,
    MACHINE_TYPE_DRILLING,
    MACHINE_TYPE_CNC,
    MACHINE_TYPE_TURNING,
    MACHINE_TYPE_PRINT,
    MACHINE_TYPE_PACKAGING
} MachineType;

/**
 * @brief Enum representing the different statuses a machine can have.
 *
 * This enum defines the possible statuses of a machine: operational, unoperational, or inactive.
 */
typedef enum {
    STATUS_OPERATIONAL,
    STATUS_UNOPERTIONAL,
    STATUS_INACTIVE
} MachineStatus;

/**
 * @brief Enum representing different categories of products.
 *
 * This enum defines the categories of products in which the machines are used.
 */
typedef enum {
    Industrial,
    Automobile,
    Aeronautical,
    Construction,
    Furniture,
    Packages,
    Undefined
} Category;

/**
 * @brief Enum representing the priority levels of an order.
 *
 * This enum defines the priority levels of an order: low, medium, or high.
 */
typedef enum {
    PRIORITY_LOW,
    PRIORITY_MEDIUM,
    PRIORITY_HIGH
} Priority;

/**
 * @brief Enum representing the status of an order.
 *
 * This enum defines the various statuses an order can have: open, in production, closed, or canceled.
 */
typedef enum {
    STATUS_OPEN,
    STATUS_PRODUCTION,
    STATUS_CLOSED,
    STATUS_CANCELED
} StatusOrder;

/**
 * @brief Struct representing a machine.
 *
 * This struct holds the details of a machine, including its ID, name, type, status, and average execution time.
 */
typedef struct{
    int id;
    char name[MACHINE_NAME_SIZE];
    MachineType machinetype;
    MachineStatus machinestatus;
    int used_by_product;
    int average_time_execution_hours;
    int average_time_execution_minutes;
    int average_time_execution_seconds;
} Machine;

/**
 * @brief Struct representing a customer.
 *
 * This struct holds the details of a customer, including their personal information and status.
 */
typedef struct{
    int id;
    char name[CUSTOMER_NAME_SIZE];
    int phone_number;
    char email[CUSTOMER_EMAIL_SIZE];
    int nif;
    int registration_day;
    int registration_month;
    int registration_year;
    char status[STATUS_SIZE];
    int status_num;
    int used_by_order;
} Customer;

/**
 * @brief Struct representing a machine process.
 *
 * This struct stores information about a specific process performed by a machine on a product.
 */
typedef struct{
    int id;
    Machine *machine;
    int process_hours;
    int process_minutes;
    int process_seconds;
    char report[REPORT_SIZE];
} Process;

/**
 * @brief Struct representing a product.
 *
 * This struct contains details of a product, including its category, status, processes, and total time.
 */
typedef struct {
    int id;
    char name[PRODUCT_NAME_SIZE];
    Category category;
    char status[STATUS_SIZE];
    int status_num;
    int process_counter;
    Process *process[PROCESS_SIZE];
    float pvp;
    int used_by_order;
    int total_hours;
    int total_minutes;
    int total_seconds;
    int total_selled;
} Product;

/**
 * @brief Struct representing an order.
 *
 * This struct contains details of a customer order, including the products, customer, status, and total time.
 */
typedef struct {
    int orderid;
    int registration_day;
    int registration_month;
    int registration_year;
    Priority priority;
    StatusOrder statusorder;
    int fulfillment;
    Customer *customer;
    int product_counter;
    Product *product[PRODUCTS_SIZE];
    int product_quantity[PRODUCTS_SIZE];
    int order_pvp;
    char observation[OBSERVATION_SIZE];
    int total_seconds;
    int total_minutes;
    int total_hours;
} Order;

/**
 * @brief Struct representing the management system.
 *
 * This struct contains arrays and counters for managing machines, products, customers, and orders.
 */
typedef struct{
    int product_counter;
    Product *product[PRODUCTS_SIZE];
    int customer_counter;
    Customer *customer[CUSTOMERS_SIZE];
    int order_counter;
    Order *order[ORDERS_SIZE];
    int machine_counter;
    Machine *machine[MACHINES_SIZE];
} Management;



#ifdef __cplusplus
}
#endif




#endif	// STRUCTS_H

