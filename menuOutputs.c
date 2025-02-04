/**
 * @file menuOutputs.c
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains the menu and output functionality for displaying information.
 */


#include "functions.h"

void MenuOutput() {
    puts(MENU_HEADER);
    puts(PRODUCT_MENU);
    puts(CUSTOMER_MENU);
    puts(ORDER_MENU);
    puts(MACHINE_MENU);
    puts(EXIT);
    puts(MENU_BOTTOM);
    puts(MENU_OPTION);
}

void ProductMenuOutput() {
    puts(PRODUCT_MENU_HEADER);
    puts(PRODUCT_CREATE);
    puts(PRODUCT_EDIT);
    puts(PROCESS_EDIT);
    puts(PRODUCT_DELETE);
    puts(PRODUCT_LIST);
    puts(EXIT);
    puts(MENU_BOTTOM);
    puts(MENU_OPTION);
}

void ProductListMenuOutput() {
    puts(PRODUCT_LIST_MENU_HEADER);
    puts(LIST_PRODUCTS);
    puts(LIST_PRODUCTS_BY_CATEGORY);
    puts(LIST_PROCESS_FOR_PRODUCTS);
    puts(LIST_DEMAND_FOR_PRODUCTS);
    puts(LIST_PRODUCTS_BY_NAME);
    puts(LIST_PRODUCTS_BY_PRICE);
    puts(EXIT);
    puts(MENU_BOTTOM);
    puts(MENU_OPTION);
}

void ProductCategoryMenuOutput() {
    puts(CATEGORY_MENU_HEADER);
    puts(CATEGORY_INDUSTRIAL);
    puts(CATEGORY_AUTOMOBILE);
    puts(CATEGORY_AERONAUTICAL);
    puts(CATEGORY_CONSTRUCTION);
    puts(CATEGORY_FURNITURE);
    puts(CATEGORY_PACKAGES);
    puts(CATEGORY_UNDEFINED);
    puts(MENU_BOTTOM);
    puts(MENU_OPTION);
}

void ProcessMenuOutput() {
    puts(PROCESS_MENU_HEADER);
    puts(PROCESS_CREATE);
    puts(PROCESS_FINISH);
    puts(MENU_BOTTOM);
    puts(MENU_OPTION);
}

void ProductEditMenuOutput() {
    puts(PRODUCT_EDIT_MENU_HEADER);
    puts(EDIT_PRODUCT_NAME);
    puts(EDIT_PRODUCT_CATEGORY);
    puts(EDIT_PRODUCT_STATUS);
    puts(EXIT);
    puts(MENU_BOTTOM);
    puts(MENU_OPTION);
}

void ProductEditStatusMenuOutput() {
    puts(PRODUCT_EDIT_STATUS_MENU_HEADER);
    puts(EDIT_PRODUCT_ACTIVATE_STATUS);
    puts(EDIT_PRODUCT_IN_STOCK_STATUS);
    puts(EDIT_PRODUCT_SOLD_OUT_STATUS);
    puts(EDIT_PRODUCT_DISCONTINUED_STATUS);
    puts(EDIT_PRODUCT_INACTIVE_STATUS);
    puts(MENU_BOTTOM);
    puts(MENU_OPTION);
}

void EditProcessOutput(){
    puts(PROCESS_EDIT_MENU_HEADER);
    puts(EDIT_PROCESS_HOURS);
    puts(EDIT_PROCESS_MINUTES);
    puts(EDIT_PROCESS_SECONDS);
    puts(EDIT_PROCESS_REPORT);
    puts(EDIT_PROCESS_MACHINE);
    puts(EXIT);
    puts(MENU_BOTTOM);
    puts(MENU_OPTION);
}

void CustomerMenuOutput() {
    puts(CUSTOMER_MENU_HEADER);
    puts(CUSTOMER_CREATE);
    puts(CUSTOMER_EDIT);
    puts(CUSTOMER_DELETE);
    puts(CUSTOMER_LIST);
    puts(EXIT);
    puts(MENU_BOTTOM);
    puts(MENU_OPTION);
}

void CustomerEditMenuOutput() {
    puts(EDIT_CUSTOMER_HEADER);
    puts(EDIT_CUSTOMER_NAME);
    puts(EDIT_CUSTOMER_PHONE_NUMBER);
    puts(EDIT_CUSTOMER_EMAIL);
    puts(EDIT_CUSTOMER_NIF);
    puts(EDIT_CUSTOMER_STATUS);
    puts(EDIT_CUSTOMER_DISTRICT);
    puts(EDIT_CUSTOMER_CITY);
    puts(EDIT_CUSTOMER_STREET);
    puts(EXIT);
    puts(MENU_BOTTOM);
    puts(MENU_OPTION);
}

void CustomerEditStatusMenuOutput() {
    puts(EDIT_CUSTOMER_STATUS_MENU_HEADER);
    puts(EDIT_CUSTOMER_ACTIVATE_STATUS);
    puts(EDIT_CUSTOMER_INACTIVE_STATUS);
    puts(EXIT);
    puts(MENU_BOTTOM);
    puts(MENU_OPTION);
}

void CustomerListMenuOutput() {
    puts(CUSTOMER_LIST_MENU_HEADER);
    puts(LIST_CUSTOMER);
    puts(LIST_CUSTOMER_ORDERS);
    puts(LIST_CUSTOMER_BY_NAME);
    puts(LIST_CUSTOMER_VOLUME);
    puts(LIST_CUSROMER_BY_LOCAL);
    puts(EXIT);
    puts(MENU_BOTTOM);
    puts(MENU_OPTION);
}
void PrintCustomersProcessMenuOutput(){
    puts(LIST_CUSROMER_BY_PROCESS_HEADER);
    puts(LIST_CUSROMER_BY_PROCESS_DISTRICT);
    puts(LIST_CUSROMER_BY_PROCESS_CITY);
    puts(LIST_CUSROMER_BY_PROCESS_STREET);
    puts(EXIT);
    puts(MENU_BOTTOM);
    puts(MENU_OPTION);
}
void OrderMenuOutput() {
    puts(ORDER_MENU_HEADER);
    puts(ORDER_CREATE);
    puts(ORDER_EDIT);
    puts(ORDER_DELETE);
    puts(ORDER_LIST);
    puts(EXIT);
    puts(MENU_BOTTOM);
    puts(MENU_OPTION);
}

void OrderPriorityMenuOutput() {
    puts(PRIORITY_MENU_HEADER);
    puts(PRIORITY_LOW_OPTION);
    puts(PRIORITY_MEDIUM_OPTION);
    puts(PRIORITY_HIGH_OPTION);
    puts(MENU_BOTTOM);
    puts(MENU_OPTION);
}

void AssociateProductWithOrderOutput(){
    puts(ASSOCIATE_PRODUCT_MENU_HEADER);
    puts(ASSOCIATE_PRODUCT_MENU_ADD_OPTION);
    puts(EXIT);
    puts(MENU_BOTTOM);
    puts(MENU_OPTION);
}

void OrderEditMenuOutput() {
    puts(ORDER_EDIT_MENU_HEADER);
    puts(EDIT_ORDER_PRIORITY);
    puts(EDIT_ORDER_FULFILLMENT);
    puts(EDIT_CANCEL_ORDER);
    puts(EXIT);
    puts(MENU_BOTTOM);
    puts(MENU_OPTION);
}

void OrderListMenuOuput() {
    puts(ORDER_LIST_MENU_HEADER);
    puts(ORDER_LIST_MENU_LIST);
    puts(ORDER_LIST_MENU_DEATAILS);
    puts(ORDER_LIST_MENU_PRIORITY);
    puts(ORDER_LIST_MENU_STATUS);
    puts(ORDER_LIST_MENU_PRICE);
    puts(ORDER_LIST_MENU_FULFILLMENT);
    puts(EXIT);
    puts(MENU_BOTTOM);
    puts(MENU_OPTION);
}

void OrderListFulfillmentMenu(){
    puts(ORDER_LSIT_PROCESS_FULFILLMENT_MENU);
    puts(ORDER_LSIT_PROCESS_FULFILLMENT_UP_DOWN);
    puts(ORDER_LSIT_PROCESS_FULFILLMENT_DOWN_UP);
    puts(EXIT);
    puts(MENU_BOTTOM);
    puts(MENU_OPTION);
}

void MachineMenuOutput() {
    puts(MACHINE_MENU_HEADER);
    puts(MACHINE_CREATE);
    puts(MACHINE_EDIT);
    puts(MACHINE_DELETE);
    puts(MACHINE_LIST);
    puts(EXIT);
    puts(MENU_BOTTOM);
    puts(MENU_OPTION);
}

void MachineEditMenuOutput() {
    puts(MACHINE_EDIT_MENU_HEADER);
    puts(EDIT_MACHINE_NAME);
    puts(EDIT_MACHINE_TYPE);
    puts(EDIT_MACHINE_STATUS);
    puts(EXIT);
    puts(MENU_BOTTOM);
    puts(MENU_OPTION);
}

void MachineTypeMenuOutput() {
    puts(MACHINE_TYPE_MENU_HEADER);
    puts(MACHINE_TYPE_CUT_OUTPUT);
    puts(MACHINE_TYPE_INJECTION_OUTPUT);
    puts(MACHINE_TYPE_SOLDER_OUTPUT);
    puts(MACHINE_TYPE_MILLING_OUTPUT);
    puts(MACHINE_TYPE_SANDING_OUTPUT);
    puts(MACHINE_TYPE_DRILLING_OUTPUT);
    puts(MACHINE_TYPE_CNC_OUTPUT);
    puts(MACHINE_TYPE_TURNING_OUTPUT);
    puts(MACHINE_TYPE_PRINT_OUTPUT);
    puts(MACHINE_TYPE_PACKAGING_OUTPUT);
    puts(MENU_BOTTOM);
    puts(MENU_OPTION);
}

void MachineStatusMenuOutput() {
    puts(STATUS_MACHINE_MENU_HEADER);
    puts(STATUS_MACHINE_OPERATIONAL_OPTION);
    puts(STATUS_MACHINE_UNOPERATIONAL_OPTION);
    puts(STATUS_MACHINE_INACTIVE_OPTION);
    puts(MENU_BOTTOM);
    puts(MENU_OPTION);
}

void MachineReportsMenuOutput(){
    puts(MACHINHE_LIST_MENU_HEADER);
    puts(MACHINE_LIST_ALL_MACHINES);
    puts(MACHINE_LIST_AVAILABLE_MACHINES);
    puts(LIST_MACHINES_MOST_USED);
    puts(LIST_MACHINES_AVERAGE_TIME);
    puts(LIST_MACHINES_LONG_SHORT_TIME);
    puts(EXIT);
    puts(MENU_BOTTOM);
    puts(MENU_OPTION);
}

