/**
 * @file files.c
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains functions for saving and loading program data to and from files.
 */


#include "functions.h"

void SaveManagementToFile(Management *management, const char *filename) {
    FILE *file = fopen(filename, "wb");
    if (!file) return;

    fwrite(&management->machine_counter, sizeof(int), 1, file);
    for (int i = 0; i < management->machine_counter; i++) {
        fwrite(management->machine[i], sizeof(Machine), 1, file);
    }

    fwrite(&management->product_counter, sizeof(int), 1, file);
    for (int i = 0; i < management->product_counter; i++) {
        Product *product = management->product[i];
        fwrite(&product->id, sizeof(int), 1, file);
        int name_length = strlen(product->name) + 1;
        fwrite(&name_length, sizeof(int), 1, file);
        fwrite(product->name, sizeof(char), name_length, file);
        fwrite(&product->category, sizeof(Category), 1, file);
        fwrite(&product->status_num, sizeof(int), 1, file);
        fwrite(&product->process_counter, sizeof(int), 1, file);
        fwrite(product->status, sizeof(char), STATUS_SIZE, file);

        for (int j = 0; j < product->process_counter; j++) {
            Process *process = product->process[j];
            fwrite(&process->id, sizeof(int), 1, file);
            fwrite(&process->machine->id, sizeof(int), 1, file);
            fwrite(&process->process_hours, sizeof(int), 1, file);
            fwrite(&process->process_minutes, sizeof(int), 1, file);
            fwrite(&process->process_seconds, sizeof(int), 1, file);
        }

        fwrite(&product->pvp, sizeof(float), 1, file);
        fwrite(&product->total_hours, sizeof(int), 1, file);
        fwrite(&product->total_minutes, sizeof(int), 1, file);
        fwrite(&product->total_seconds, sizeof(int), 1, file);
        fwrite(&product->total_selled, sizeof(int), 1, file);
    }

    fwrite(&management->customer_counter, sizeof(int), 1, file);
    for (int i = 0; i < management->customer_counter; i++) {
        fwrite(management->customer[i], sizeof(Customer), 1, file);
    }

    fwrite(&management->order_counter, sizeof(int), 1, file);
    for (int i = 0; i < management->order_counter; i++) {
        Order *order = management->order[i];
        fwrite(order, sizeof(Order), 1, file);

        int customerId = (order->customer) ? order->customer->id : -1;
        fwrite(&customerId, sizeof(int), 1, file);

        for (int j = 0; j < order->product_counter; j++) {
            fwrite(&order->product[j]->id, sizeof(int), 1, file);
            fwrite(&order->product_quantity[j], sizeof(int), 1, file);
        }
    }

    fclose(file);
}


void LoadManagementFromFile(Management *management, const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (!file) {
        SaveManagementToFile(management, filename);
        return;
    }

    fread(&management->machine_counter, sizeof(int), 1, file);
    for (int i = 0; i < management->machine_counter; i++) {
        Machine *machine = malloc(sizeof(Machine));
        fread(machine, sizeof(Machine), 1, file);
        management->machine[i] = machine;
    }

    fread(&management->product_counter, sizeof(int), 1, file);
    for (int i = 0; i < management->product_counter; i++) {
        Product *product = malloc(sizeof(Product));
        fread(&product->id, sizeof(int), 1, file);
        int name_length;
        fread(&name_length, sizeof(int), 1, file);
        fread(product->name, sizeof(char), name_length, file);
        fread(&product->category, sizeof(Category), 1, file);
        fread(&product->status_num, sizeof(int), 1, file);
        fread(&product->process_counter, sizeof(int), 1, file);
        fread(product->status, sizeof(char), STATUS_SIZE, file);

        for (int j = 0; j < product->process_counter; j++) {
            Process *process = malloc(sizeof(Process));
            fread(&process->id, sizeof(int), 1, file);
            int machine_id;
            fread(&machine_id, sizeof(int), 1, file);

            process->machine = NULL;
            for (int k = 0; k < management->machine_counter; k++) {
                if (management->machine[k]->id == machine_id) {
                    process->machine = management->machine[k];
                    break;
                }
            }

            fread(&process->process_hours, sizeof(int), 1, file);
            fread(&process->process_minutes, sizeof(int), 1, file);
            fread(&process->process_seconds, sizeof(int), 1, file);

            product->process[j] = process;
        }

        fread(&product->pvp, sizeof(float), 1, file);
        fread(&product->total_hours, sizeof(int), 1, file);
        fread(&product->total_minutes, sizeof(int), 1, file);
        fread(&product->total_seconds, sizeof(int), 1, file);
        fread(&product->total_selled, sizeof(int), 1, file);

        management->product[i] = product;
    }

    fread(&management->customer_counter, sizeof(int), 1, file);
    for (int i = 0; i < management->customer_counter; i++) {
        Customer *customer = malloc(sizeof(Customer));
        fread(customer, sizeof(Customer), 1, file);
        management->customer[i] = customer;
    }

    fread(&management->order_counter, sizeof(int), 1, file);
    for (int i = 0; i < management->order_counter; i++) {
        Order *order = malloc(sizeof(Order));
        fread(order, sizeof(Order), 1, file);

        int customerId;
        fread(&customerId, sizeof(int), 1, file);

        order->customer = NULL;
        for (int k = 0; k < management->customer_counter; k++) {
            if (management->customer[k]->id == customerId) {
                order->customer = management->customer[k];
                break;
            }
        }

        for (int j = 0; j < order->product_counter; j++) {
            int product_id;
            fread(&product_id, sizeof(int), 1, file);

            Product *product = NULL;
            for (int k = 0; k < management->product_counter; k++) {
                if (management->product[k]->id == product_id) {
                    product = management->product[k];
                    break;
                }
            }

            order->product[j] = product;
            fread(&order->product_quantity[j], sizeof(int), 1, file);
        }

        management->order[i] = order;
    }

    fclose(file);
}
