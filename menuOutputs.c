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
    puts(LIST_DEMAND_FOR_PRODUCTS);
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
    puts(EDIT_CUSTOMER_DAY);
    puts(EDIT_CUSTOMER_MONTH);
    puts(EDIT_CUSTOMER_YEAR);
    puts(EDIT_CUSTOMER_STATUS);
    puts(EDIT_CUSTOMER_END);
    puts(MENU_BOTTOM);
    puts(MENU_OPTION);
}

void CustomerEditStatusMenuOutput() {
    puts(EDIT_CUSTOMER_STATUS_MENU_HEADER);
    puts(EDIT_CUSTOMER_ACTIVATE_STATUS);
    puts(EDIT_CUSTOMER_INACTIVE_STATUS);
    puts(EDIT_CUSTOMER_STATUS_END);
    puts(MENU_BOTTOM);
    puts(MENU_OPTION);
}

void CustomerListMenuOutput() {
    puts(CUSTOMER_LIST_MENU_HEADER);
    puts(LIST_CUSTOMER);
    puts(LIST_CUSTOMER_BY_NAME);
    puts(LIST_CUSTOMER_STATUS_END);
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

void OrderStatusMenuOutput() {
    puts(STATUS_MENU_HEADER);
    puts(STATUS_OPEN_OPTION);
    puts(STATUS_PRODUCTION_OPTION);
    puts(STATUS_CLOSED_OPTION);
    puts(MENU_BOTTOM);
    puts(MENU_OPTION);
}

void OrderEditMenuOutput() {
    puts(ORDER_EDIT_MENU_HEADER);
    puts(EDIT_ORDER_REGISTRATION_DAY);
    puts(EDIT_ORDER_REGISTRATION_MONTH);
    puts(EDIT_ORDER_REGISTRATION_YEAR);
    puts(EDIT_ORDER_PRIORITY);
    puts(EDIT_ORDER_STATUS);
    puts(EDIT_ORDER_FULFILLMENT);
    puts(EDIT_ORDER_CUSTOMER);
    puts(EDIT_ORDER_PRODUCTS);
    puts(EXIT);
    puts(MENU_BOTTOM);
    puts(MENU_OPTION);
}

void OrderListMenuOuput() {
    puts(ORDER_LIST_MENU_HEADER);
    puts(ORDER_LIST_MENU_LIST);
    puts(ORDER_LIST_MENU_NAME);
    puts(ORDER_LIST_MENU_PRIORITY);
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

