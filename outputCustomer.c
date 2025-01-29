/**
 * @file outputCustomer.c
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains functions for outputting customer information.
 */


#include "functions.h"

void PrintCustomers(Customer *customer) {
    printf(MENU_BOTTOM);
    printf(GET_CUSTOMER_ID, ACCESS_CUSTOMER_ID);
    printf(GET_CUSTOMER_NAME, ACCESS_CUSTOMER_NAME);
    printf(GET_CUSTOMER_PHONE_NUMBER, ACCESS_CUSTOMER_PHONE_NUMBER);
    printf(GET_CUSTOMER_EMAIL, ACCESS_CUSTOMER_EMAIL);
    printf(GET_CUSTOMER_NIF, ACCESS_CUSTOMER_NIF);
    printf(GET_CUSTOMER_DATE, ACCESS_CUSTOMER_REGISTRATION_DAY, ACCESS_CUSTOMER_REGISTRATION_MONTH, ACCESS_CUSTOMER_REGISTRATION_YEAR);
    printf(GET_CUSTOMER_STATUS, ACCESS_CUSTOMER_STATUS);
    printf(GET_CUSTOMER_DISTRICT, ACCESS_CUSTOMER_DISTRICT);
    printf(GET_CUSTOMER_CITY, ACCESS_CUSTOMER_CITY);
    printf(GET_CUSTOMER_STREET, ACCESS_CUSTOMER_STREET);
    puts(MENU_BOTTOM);
}

void ListCustomers(Management *management) {
    if (ACCESS_TO_CUSTOMER_COUNTER > 0) {
        int found = 0;
        for (int id = 0; id < ACCESS_TO_CUSTOMER_COUNTER; id++) {
            if ((ACCESS_TO_CUSTOMER_STATUS_NUM_BY_ID) == 0) {
                PrintCustomers(ACCESS_TO_CUSTOMER_BY_ID);
                found = 1;
            }
        }

        if (!found) {
            puts(ERROR_CUSTOMER_EMPTY);
            return;
        }
    } else {
        puts(ERROR_CUSTOMER_EMPTY);
        return;
    }
}

void ListAllCustomers(Management *management) {
    if (ACCESS_TO_CUSTOMER_COUNTER > 0) {
        int found = 0;
        for (int id = 0; id < ACCESS_TO_CUSTOMER_COUNTER; id++) {
            PrintCustomers(ACCESS_TO_CUSTOMER_BY_ID);
            found = 1;
        }

        if (!found) {
            puts(ERROR_CUSTOMER_EMPTY);
            return;
        }
    } else {
        puts(ERROR_CUSTOMER_EMPTY);
        return;
    }
}

void DisplayOrdersByCustomer(Management *management) {
    if (ACCESS_TO_CUSTOMER_COUNTER <= 0) {
        puts(ERROR_CUSTOMER_EMPTY);
        return;
    }

    int customer_id = ChooseCustomer(management);

    if (customer_id < 0 || customer_id >= ACCESS_TO_CUSTOMER_COUNTER) {
        puts(ERROR_CUSTOMER_NOT_EXIST);
        return;
    }

    Customer *selected_customer = (ACCESS_TO_CUSTOMER_BY_CUSTOMER_ID);
    bool has_orders = false;


    for (int i = 0; i < ACCESS_TO_ORDER_COUNTER; i++) {
        Order *order = ACCESS_ORDER[i];
        if (ACCESS_ORDER_CUSTOMER == selected_customer) {
            has_orders = true;
            PrintOrders(order);
            PrintOrderProducts(order);
        }
    }

    if (!has_orders) {
        puts(ERROR_CUSTOMER_DO_NOT_HAVE_ORDER);
    }

    return;
}

void ListCustomersByName(Management *management) {
    if (ACCESS_TO_CUSTOMER_COUNTER <= 0) {
        puts(ERROR_CUSTOMER_EMPTY);
        return;
    }

    Customer * sorted_customers[ACCESS_TO_CUSTOMER_COUNTER];
    for (int i = 0; i < ACCESS_TO_CUSTOMER_COUNTER; i++) {
        sorted_customers[i] = ACCESS_TO_CUSTOMER_BY_I;
    }

    for (int i = 0; i < ACCESS_TO_CUSTOMER_COUNTER - 1; i++) {
        for (int j = 0; j < ACCESS_TO_CUSTOMER_COUNTER - i - 1; j++) {
            if (strcmp(sorted_customers[j]->name, sorted_customers[j + 1]->name) > 0) {
                Customer *temp = sorted_customers[j];
                sorted_customers[j] = sorted_customers[j + 1];
                sorted_customers[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < ACCESS_TO_CUSTOMER_COUNTER; i++) {
        PrintCustomers(sorted_customers[i]);
    }
}

int CompareCustomers(const void *a, const void *b) {
    const Customer *custA = *(const Customer **) a;
    const Customer *custB = *(const Customer **) b;

    if (custA->used_by_order != custB->used_by_order) {
        return custB->used_by_order - custA->used_by_order;
    }
    return strcmp(custA->name, custB->name);
}

double CalculateOrderFrequency(Management *management, Customer *customer) {
    int order_dates[ORDERS_SIZE];
    int order_count = 0;

    for (int i = 0; i < ACCESS_TO_ORDER_COUNTER; i++) {
        Order *order = ACCESS_ORDER[i];
        if (ACCESS_ORDER_CUSTOMER == customer) {
            order_dates[order_count++] = ACCESS_ORDER_REGISTRATION_YEAR * 10000 + ACCESS_ORDER_REGISTRATION_MONTH * 100 + ACCESS_ORDER_REGISTRATION_DAY;
        }
    }

    if (order_count < 2) {
        return -1;
    }

    qsort(order_dates, order_count, sizeof (int), (int (*)(const void *, const void *)) strcmp);

    int total_days = 0;
    for (int i = 1; i < order_count; i++) {
        int year1 = order_dates[i - 1] / 10000;
        int month1 = (order_dates[i - 1] % 10000) / 100;
        int day1 = order_dates[i - 1] % 100;

        int year2 = order_dates[i] / 10000;
        int month2 = (order_dates[i] % 10000) / 100;
        int day2 = order_dates[i] % 100;

        total_days += (year2 - year1) * 365 + (month2 - month1) * 30 + (day2 - day1);
    }

    return (double) total_days / (order_count - 1);
}

void DisplayCustomersByOrderFrequencyAndVolume(Management *management) {
    if (ACCESS_TO_CUSTOMER_COUNTER == 0) {
        printf(ERROR_CUSTOMER_EMPTY);
        return;
    }

    Customer * customers[CUSTOMERS_SIZE];
    for (int i = 0; i < ACCESS_TO_CUSTOMER_COUNTER; i++) {
        customers[i] = ACCESS_TO_CUSTOMER_BY_I;
    }

    qsort(customers, ACCESS_TO_CUSTOMER_COUNTER, sizeof (Customer *), CompareCustomers);

    printf(CUSTOMER_FREQUENCY_VOLUME_REPORT_HEADER);
    for (int i = 0; i < ACCESS_TO_CUSTOMER_COUNTER; i++) {
        Customer *customer = customers[i];
        int total_volume = 0;
        double average_frequency = CalculateOrderFrequency(management, customer);

        for (int j = 0; j < ACCESS_TO_ORDER_COUNTER; j++) {
            Order *order = ACCESS_ORDER[j];
            if (ACCESS_ORDER_CUSTOMER == customer) {
                for (int k = 0; k < ACCESS_ORDER_PRODUCT_COUNTER; k++) {
                    total_volume += ACCESS_ORDER_PRODUCT_QUANTITY[k];
                }
            }
        }

        printf(CUSTOMER_FREQUENCY_VOLUME_INFO_FORMAT, ACCESS_CUSTOMER_NAME, ACCESS_CUSTOMER_ID);
        printf(CUSTOMER_FREQUENCY_VOLUME_ORDERS_FORMAT, ACCESS_CUSTOMER_USED_BY_ORDER);
        printf(CUSTOMER_FREQUENCY_VOLUME_TOTAL_VOLUME_FORMAT, total_volume);
        if (average_frequency > 0) {
            printf(CUSTOMER_FREQUENCY_VOLUME_AVERAGE_FREQUENCY_FORMAT, average_frequency);
        } else {
            printf(CUSTOMER_FREQUENCY_VOLUME_INSUFFICIENT_DATA);
        }
    }
}

void SearchByDistric(Management *management) {
    if (ACCESS_TO_CUSTOMER_COUNTER <= 0) {
        puts(ERROR_CUSTOMER_EMPTY);
        return;
    }

    puts(CUSTOMER_DISTRICT_AVAILABLE);
    char unique_districts[ACCESS_TO_CUSTOMER_COUNTER][100];
    int unique_count = 0;

    for (int i = 0; i < ACCESS_TO_CUSTOMER_COUNTER; i++) {
        int is_unique = 1;
        for (int j = 0; j < unique_count; j++) {
            if (strcmp(ACCESS_TO_CUSTOMER_DISTRICT_BY_I, unique_districts[j]) == 0) {
                is_unique = 0;
                break;
            }
        }
        if (is_unique) {
            strcpy(unique_districts[unique_count++], ACCESS_TO_CUSTOMER_DISTRICT_BY_I);
            printf("- %s\n", ACCESS_TO_CUSTOMER_DISTRICT_BY_I);
        }
    }

    char search_district[100];
    printf(CUSTOMER_DISTRICT_SEARCH);
    fgets(search_district, sizeof (search_district), stdin);
    search_district[strcspn(search_district, "\n")] = '\0';

    int found = 0;
    for (int i = 0; i < ACCESS_TO_CUSTOMER_COUNTER; i++) {
        if (strcmp(ACCESS_TO_CUSTOMER_DISTRICT_BY_I, search_district) == 0) {
            PrintCustomers(ACCESS_TO_CUSTOMER_BY_I);
            found = 1;
        }
    }

    if (!found) {
        puts(CUSTOMER_DISTRICT_NOT_FOUND);
    }
}

void SearchByCity(Management *management) {
    if (ACCESS_TO_CUSTOMER_COUNTER <= 0) {
        puts(ERROR_CUSTOMER_EMPTY);
        return;
    }
    puts(CUSTOMER_CITY_AVAILABLE);
    char unique_cities[ACCESS_TO_CUSTOMER_COUNTER][100];
    int unique_count = 0;

    for (int i = 0; i < ACCESS_TO_CUSTOMER_COUNTER; i++) {
        int is_unique = 1;
        for (int j = 0; j < unique_count; j++) {
            if (strcmp(ACCESS_TO_CUSTOMER_CITY_BY_I, unique_cities[j]) == 0) {
                is_unique = 0;
                break;
            }
        }
        if (is_unique) {
            strcpy(unique_cities[unique_count++], ACCESS_TO_CUSTOMER_CITY_BY_I);
            printf("- %s\n", ACCESS_TO_CUSTOMER_CITY_BY_I);
        }
    }

    char search_city[100];
    printf(CUSTOMER_CITY_SEARCH);
    fgets(search_city, sizeof (search_city), stdin);
    search_city[strcspn(search_city, "\n")] = '\0';

    int found = 0;
    for (int i = 0; i < ACCESS_TO_CUSTOMER_COUNTER; i++) {
        if (strcmp(ACCESS_TO_CUSTOMER_CITY_BY_I, search_city) == 0) {
            PrintCustomers(ACCESS_TO_CUSTOMER_BY_I);
            found = 1;
        }
    }

    if (!found) {
        puts(CUSTOMER_CITY_NOT_FOUND);
    }
}

void SearchByStreet(Management *management) {
    if (ACCESS_TO_CUSTOMER_COUNTER <= 0) {
        puts(ERROR_CUSTOMER_EMPTY);
        return;
    }

    puts(CUSTOMER_STREET_AVAILABLE);
    char unique_streets[ACCESS_TO_CUSTOMER_COUNTER][100];
    int unique_count = 0;

    for (int i = 0; i < ACCESS_TO_CUSTOMER_COUNTER; i++) {
        int is_unique = 1;
        for (int j = 0; j < unique_count; j++) {
            if (strcmp(ACCESS_TO_CUSTOMER_STREET_BY_I, unique_streets[j]) == 0) {
                is_unique = 0;
                break;
            }
        }
        if (is_unique) {
            strcpy(unique_streets[unique_count++], ACCESS_TO_CUSTOMER_STREET_BY_I);
            printf("- %s\n", ACCESS_TO_CUSTOMER_STREET_BY_I);
        }
    }

    char search_street[100];
    printf(CUSTOMER_STREET_SEARCH);
    fgets(search_street, sizeof (search_street), stdin);
    search_street[strcspn(search_street, "\n")] = '\0';

    int found = 0;
    for (int i = 0; i < ACCESS_TO_CUSTOMER_COUNTER; i++) {
        if (strcmp(ACCESS_TO_CUSTOMER_STREET_BY_I, search_street) == 0) {
            PrintCustomers(ACCESS_TO_CUSTOMER_BY_I);
            found = 1;
        }
    }

    if (!found) {
        puts(CUSTOMER_STREET_NOT_FOUND);
    }
}

