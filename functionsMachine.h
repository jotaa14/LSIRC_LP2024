/**
 * @file functionsMachine.h
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains function prototypes related to machine management.
 */


#ifndef FUNCTIONSMACHINE_H
#define FUNCTIONSMACHINE_H

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Retrieves the position of a machine in the machine list.
 *
 * This function searches for a machine in the management database and returns 
 * its position in the list.
 *
 * @param management - The management structure containing the list of machines.
 * @param number - The identifier of the machine to be found.
 *
 * @return The position of the machine in the machine list, or -1 if not found.
 */
int GetMachinePosition(Management management, int number);

/**
 * @brief Allows the user to choose a machine from the machine list.
 *
 * This function provides the user with an interface to select a machine 
 * from the available machines in the management system.
 *
 * @param management - A pointer to the management structure containing the machine list.
 *
 * @return The ID of the selected machine.
 */
int ChooseMachine(Management *management);

/**
 * @brief Creates a new machine in the system.
 *
 * This function guides the user through the process of creating a new machine 
 * and adding it to the management database.
 *
 * @param management - A pointer to the management structure to store the new machine.
 */
void CreateMachine(Management *management);

/**
 * @brief Edits an existing machine in the system.
 *
 * This function allows the user to modify the details of an existing machine.
 *
 * @param management - A pointer to the management structure containing the machine to be edited.
 */
void EditMachine(Management *management);

/**
 * @brief Deletes a machine from the system.
 *
 * This function removes a machine from the management database.
 *
 * @param management - A pointer to the management structure to delete the machine from.
 */
void DeleteMachine(Management *management);

/**
 * @brief Converts a machine type enum to a human-readable string.
 *
 * This function converts the machine type enum value into a string for easy printing.
 *
 * @param machinetype - The machine type enum to be converted to a string.
 *
 * @return A string representation of the machine type.
 */
char* PrintMachineType(MachineType machinetype);

/**
 * @brief Converts a machine status enum to a human-readable string.
 *
 * This function converts the machine status enum value into a string for easy printing.
 *
 * @param machinestatus - The machine status enum to be converted to a string.
 *
 * @return A string representation of the machine status.
 */
char* PrintMachineStatus(MachineStatus machinestatus);

/**
 * @brief Prints the details of a specific machine.
 *
 * This function displays all details related to a specific machine, such as 
 * its name, type, status, and average execution time.
 *
 * @param machine - A pointer to the machine to be printed.
 */
void PrintMachines(Machine *machine);

/**
 * @brief Lists all machines in the system.
 *
 * This function displays all machines present in the management system.
 *
 * @param management - A pointer to the management structure containing the machine list.
 */
void ListMachines(Management *management);

/**
 * @brief Lists all machines with their detailed information.
 *
 * This function shows all machines in the management system, including all relevant details.
 *
 * @param management - A pointer to the management structure containing the machine list.
 */
void ListAllMachines(Management *management);

/**
 * @brief Displays the machine menu with available options.
 *
 * This function presents the user with options related to managing machines.
 */
void MachineMenu();

/**
 * @brief Displays the machine type menu with available options.
 *
 * This function provides the user with a menu to select the machine type.
 *
 * @return The selected machine type.
 */
int MachineTypeMenu();

/**
 * @brief Displays the machine status menu with available options.
 *
 * This function provides the user with a menu to select the machine status.
 *
 * @return The selected machine status.
 */
int MachineStatusMenu();



#ifdef __cplusplus
}
#endif

#endif /* FUNCTIONSMACHINE_H */

