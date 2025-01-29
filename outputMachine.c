/**
 * @file outputMachine.c
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains functions for outputting machine information.
 */


#include "functions.h"

char* PrintMachineType(MachineType machinetype) {
    switch (machinetype) {
        case MACHINE_TYPE_CUT: return "Cut";
        case MACHINE_TYPE_INJECTION: return "Injection";
        case MACHINE_TYPE_SOLDER: return "Solder";
        case MACHINE_TYPE_MILLING: return "Milling";
        case MACHINE_TYPE_SANDING: return "Sanding";
        case MACHINE_TYPE_DRILLING: return "Drilling";
        case MACHINE_TYPE_CNC: return "CNC";
        case MACHINE_TYPE_TURNING: return "Turning";
        case MACHINE_TYPE_PRINT: return "Print";
        case MACHINE_TYPE_PACKAGING: return "Packaging";
    }
}

char* PrintMachineStatus(MachineStatus machinestatus) {
    switch (machinestatus) {
        case STATUS_OPERATIONAL: return "Operational";
        case STATUS_UNOPERTIONAL: return "Unoperational";
        case STATUS_INACTIVE: return "Inactive";
    }
}

void PrintMachines(Machine *machine) {
    printf(MACHINE_ID, ACCESS_TO_MACHINE_ID);
    printf(MACHINE_NAME, ACCESS_TO_MACHINE_NAME);
    printf(MACHINE_TYPE, PrintMachineType(ACCESS_TO_MACHINE_TYPE));
    printf(MACHINE_STATUS, PrintMachineStatus(ACCESS_TO_MACHINE_STATUS));
    puts(MENU_BOTTOM);
}

void ListMachines(Management *management) {
    if (ACCESS_TO_MACHINE_COUNTER > 0) {
        int found = 0;
        for (int id = 0; id < ACCESS_TO_MACHINE_COUNTER; id++) {
            if(ACCESS_TO_MACHINE_STATUS_BY_ID==0){
                PrintMachines(ACCESS_TO_MACHINE_BY_ID);
                found = 1;
            }
            
        }
        if (!found) {
            puts(ERROR_NO_MACHINES);
            return;
        }
    } else {
        puts(ERROR_NO_MACHINES);
        return;
    }
}

void ListAllMachines(Management *management) {
    if (ACCESS_TO_MACHINE_COUNTER > 0) {
        int found = 0;
        for (int id = 0; id < ACCESS_TO_MACHINE_COUNTER; id++) {
            PrintMachines(ACCESS_TO_MACHINE_BY_ID);
            found = 1;
        }
        if (!found) {
            puts(ERROR_NO_MACHINES);
            return;
        }
    } else {
        puts(ERROR_NO_MACHINES);
        return;
    }
}

void ListMostUsedMachines(Management *management) {
    if (ACCESS_TO_MACHINE_COUNTER == 0) {
        puts(ERROR_NO_MACHINES);
        return;
    }

    int machine_usage[MACHINES_SIZE] = {0};
    char machine_names[MACHINES_SIZE][MACHINE_NAME_SIZE];


    for (int i = 0; i < ACCESS_TO_MACHINE_COUNTER; i++) {
        strcpy(machine_names[ACCESS_TO_MACHINE_ID_BY_I], ACCESS_TO_MACHINE_NAME_BY_I);
    }


    for (int i = 0; i < ACCESS_TO_PRODUCT_COUNTER; i++) {
        Product *product = ACCESS_TO_PRODUCT_BY_I;
        for (int j = 0; j < ACCESS_PRODUCT_PROCESS_COUNTER; j++) {
            Process *process = ACCESS_TO_PROCESS_J;
            if (process && ACCESS_PROCESS_MACHINE) {
                machine_usage[process->machine->id ]++;
            }
        }
    }


    int max_usage = 0;
    for (int i = 0; i < MACHINES_SIZE; i++) {
        if (machine_usage[i] > max_usage) {
            max_usage = machine_usage[i];
        }
    }

    if (max_usage == 0) {
        puts(ERROR_NO_MACHINE_USED_IN_PROCESSES);
        return;
    }

    for (int i = 0; i < MACHINES_SIZE - 1; i++) {
        for (int j = i + 1; j < MACHINES_SIZE; j++) {
            if (machine_usage[i] < machine_usage[j]) {
                int temp_usage = machine_usage[i];
                machine_usage[i] = machine_usage[j];
                machine_usage[j] = temp_usage;

                char temp_name[MACHINE_NAME_SIZE];
                strcpy(temp_name, machine_names[i]);
                strcpy(machine_names[i], machine_names[j]);
                strcpy(machine_names[j], temp_name);
            }
        }
    }

    for (int i = 0; i < MACHINES_SIZE; i++) {
        if (machine_usage[i] > 0) {
            printf(MACHINE_MOST_USED, machine_names[i], machine_usage[i]);
        }
    }
}

void CalculateMachineAverageTimes(Management *management) {
    if (management == NULL || ACCESS_TO_MACHINE_COUNTER == 0) {
        puts(ERROR_NO_MACHINES);
        return;
    }

    printf(AVERAGE_PRODUCTION_TIME_PER_MACHINE);
    printf(PRINT_AVERAGE_PRODUCTION_TIME_PER_MACHINE);
    printf(LINE_AVERAGE_PRODUCTION_TIME_PER_MACHINE);

    for (int i = 0; i < ACCESS_TO_MACHINE_COUNTER; i++) {
        Machine *current_machine = ACCESS_TO_MACHINE_BY_I;
        int total_seconds = 0;
        int total_processes = 0;

        for (int j = 0; j < ACCESS_TO_PRODUCT_COUNTER; j++) {
            Product *current_product = ACCESS_TO_PRODUCT_J;

            for (int k = 0; k < current_product->process_counter; k++) {
                Process *current_process = current_product->process[k];

                if (current_process != NULL && current_process->machine != NULL &&
                    current_process->machine->id == current_machine->id) {

                    int process_time_seconds = (current_process->process_hours * 3600) + 
                                               (current_process->process_minutes * 60) + 
                                               current_process->process_seconds;

                    total_seconds += process_time_seconds;
                    total_processes++;
                }
            }
        }

        if (total_processes > 0) {
            int avg_seconds = total_seconds / total_processes;
            int avg_hours = avg_seconds / 3600;
            int avg_minutes = (avg_seconds % 3600) / 60;
            int avg_secs = avg_seconds % 60;

            printf(PRINT_MACHINE_AVERAGE_TIME, current_machine->id, current_machine->name, avg_hours, avg_minutes, avg_secs);
        } else {
            printf(PRINT_NO_MACHINE_AVERAGE_TIME, current_machine->id, current_machine->name);
        }
    }

    printf(LINE_AVERAGE_PRODUCTION_TIME_PER_MACHINE);
}

void GenerateMachinePerformanceReport(Management *management) {
    printf(MACHINE_PERFORMANCE_REPORT_HEADER);

    for (int i = 0; i <= MACHINE_TYPE_PACKAGING; i++) {
        Machine *max_machine = NULL;
        Machine *min_machine = NULL;
        int max_seconds = 0;
        int min_seconds = INT_MAX;

        for (int j = 0; j < ACCESS_TO_MACHINE_COUNTER; j++) {
            Machine *machine = ACCESS_TO_MACHINE_J;
            if (ACCESS_TO_MACHINE_TYPE == i) {
                for (int k = 0; k < ACCESS_TO_PRODUCT_COUNTER; k++) {
                    Product *product = ACCESS_TO_PRODUCT_K;
                    for (int l = 0; l < ACCESS_PRODUCT_PROCESS_COUNTER; l++) {
                        Process *process = ACCESS_TO_PRODUCT_PROCESS_L;
                        if (ACCESS_PROCESS_MACHINE == machine) {
                            int process_seconds = ACCESS_PROCESS_HOURS * 3600 + ACCESS_PROCESS_MINUTES * 60 + ACCESS_PROCESS_SECONDS;

                            if (process_seconds > max_seconds) {
                                max_seconds = process_seconds;
                                max_machine = machine;
                            }

                            if (process_seconds < min_seconds) {
                                min_seconds = process_seconds;
                                min_machine = machine;
                            }
                        }
                    }
                }
            }
        }

        if (max_machine || min_machine) {
            printf(MACHINE_PERFORMANCE_REPORT_TYPE_HEADER, PrintMachineType(i));

            if (max_machine) {
                printf(MACHINE_PERFORMANCE_REPORT_MAX_TIME,
                       max_machine->name, max_machine->id,
                       max_seconds / 3600, (max_seconds % 3600) / 60, max_seconds % 60);
            } else {
                printf(MACHINE_PERFORMANCE_REPORT_MAX_TIME_NONE);
            }

            if (min_machine) {
                printf(MACHINE_PERFORMANCE_REPORT_MIN_TIME,
                       min_machine->name, min_machine->id,
                       min_seconds / 3600, (min_seconds % 3600) / 60, min_seconds % 60);
            } else {
                printf(MACHINE_PERFORMANCE_REPORT_MIN_TIME_NONE);
            }
        }
    }
}


