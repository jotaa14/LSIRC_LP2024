#ifdef __cplusplus
extern "C" {
#endif

#include "functions.h"
#include "constsProduct.h"
#include "constsOrder.h"
#include "constsMachine.h"
#include "constsCustomer.h"
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
}MachineType;

typedef enum {
    STATUS_OPERATIONAL,
    STATUS_UNOPERTIONAL,
    STATUS_INACTIVE
}MachineStatus;
    
typedef enum {
    Industrial,
    Automobile,
    Aeronautical,
    Construction,
    Furniture,
    Packages,
    Undefined
} Category;

typedef enum {
    PRIORITY_LOW,
    PRIORITY_MEDIUM,
    PRIORITY_HIGH
} Priority;

typedef enum {
    STATUS_OPEN,
    STATUS_PRODUCTION,
    STATUS_CLOSED,
    STATUS_CANCELED
} StatusOrder;

typedef struct{
    int id;
    char name[MACHINE_NAME_SIZE];
    MachineType machinetype;
    MachineStatus machinestatus;
    int used_by_product;
    int average_time_execution_hours;
    int average_time_execution_minutes;
    int average_time_execution_seconds;
}Machine;

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
    int used_by_order;
} Customer;

typedef struct{
    int id;
    Machine *machine;
    int process_hours;
    int process_minutes;
    int process_seconds;
    char report[REPORT_SIZE];
}Process;

typedef struct {
    int id;
    char name[PRODUCT_NAME_SIZE];
    Category category;
    char status[STATUS_SIZE];
    int process_counter;
    Process *process[PROCESS_SIZE];
    float pvp;
    int used_by_order;
    int total_hours;
    int total_minutes;
    int total_seconds;
    int total_selled;
} Product;

typedef struct {
    int orderid;
    int registration_day;
    int registration_month;
    int registration_year;
    Priority priority;
    StatusOrder statusorder;
    int fulfillment;
    Customer *customer;
    Product *product[PRODUCTS_SIZE];
    int product_quantity[PRODUCTS_SIZE];
    int order_pvp;
} Order;



typedef struct{
    int product_counter;
    Product *product[PRODUCTS_SIZE];
    int customer_counter;
    Customer *customer[CUSTOMERS_SIZE];
    int order_counter;
    Order *order[ORDERS_SIZE];
    int machine_counter;
    Machine *machine[MACHINES_SIZE];
}Management;

#ifdef __cplusplus
}
#endif



