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
    printf(MACHINE_ID, machine->id);
    printf(MACHINE_NAME, machine->name);
    printf(MACHINE_TYPE, PrintMachineType(machine->machinetype));
    printf(MACHINE_STATUS, PrintMachineStatus(machine->machinestatus));
    puts(MENU_BOTTOM);
}

void ListMachines(Management *management) {
    if (management->machine_counter > 0) {
        int found = 0;
        for (int id = 0; id < management->machine_counter; id++) {
            PrintMachines(management->machine[id]);
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
