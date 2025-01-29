/**
 * @file designMachine.h
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains design constants related to machine management.
 */


#ifndef DESIGNMACHINES_H
#define DESIGNMACHINES_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief A string constant prompting the user to enter the machine ID.
 *
 * This prompt is used to ask the user for the machine ID when retrieving or editing a machine.
 */
#define MSG_GET_MACHINE "Introduce the machine ID: "

/**
 * @brief A string constant representing the machine menu header.
 *
 * This header is displayed to introduce the machine options menu.
 */
#define MACHINE_MENU_HEADER "-----------MACHINE MENU-----------"

/**
 * @brief A string constant for creating a new machine.
 *
 * This option is displayed in the machine menu to allow the user to create a new machine.
 */
#define MACHINE_CREATE "| 1-Create Machine               |"

/**
 * @brief A string constant for editing an existing machine.
 *
 * This option is displayed in the machine menu to allow the user to edit an existing machine.
 */
#define MACHINE_EDIT "| 2-Edit Machine                 |"

/**
 * @brief A string constant for deleting a machine.
 *
 * This option is displayed in the machine menu to allow the user to delete a machine.
 */
#define MACHINE_DELETE "| 3-Delete Machine               |"

/**
 * @brief A string constant for viewing machine reports.
 *
 * This option is displayed in the machine menu to allow the user to generate reports for machines.
 */
#define MACHINE_LIST "| 4-Reports Machine              |"
                    
/**
 * @brief A string constant representing the header of the machine list menu.
 * 
 * This header is displayed at the top of the menu to indicate its purpose
 * as the machine list management interface.
 */
#define MACHINHE_LIST_MENU_HEADER "---------MACHINE LIST MENU--------"

/**
 * @brief A string constant for the menu option to list all machines.
 * 
 * This option allows the user to view a complete list of all machines
 * in the system, regardless of their status.
 */
#define MACHINE_LIST_ALL_MACHINES "| 1-List All Machines            |"

/**
 * @brief A string constant for the menu option to list available machines.
 * 
 * This option allows the user to view only the machines that are currently
 * available for use.
 */
#define MACHINE_LIST_AVAILABLE_MACHINES "| 2-List Available Machines      |"

/**
 * @brief A string constant for the menu option to list the most used machines.
 * 
 * This option allows the user to view a list of machines sorted by usage,
 * highlighting the machines that are used the most frequently.
 */
#define LIST_MACHINES_MOST_USED         "| 3-List Most Used Machines      |"

/**
 * @brief A string constant for the menu option to display the average usage time of machines.
 * 
 * This option allows the user to view the average usage time across all machines,
 * providing insights into typical usage patterns.
 */
#define LIST_MACHINES_AVERAGE_TIME "| 4-List To Average Time         |"

/**
 * @brief A string constant for the menu option to display machines with the longest and shortest usage times.
 * 
 * This option allows the user to view details about the machines that have been used
 * for the longest and shortest durations.
 */
#define LIST_MACHINES_LONG_SHORT_TIME "| 5-List Long And Short Time     |"

/**
 * @brief A string constant for an error when the maximum number of machines is reached.
 *
 * This error message is displayed when the system reaches the maximum number of machines allowed.
 */
#define ERROR_MACHINES_REACHED "ERROR: Maximum number of machines reached!" 

/**
 * @brief A string constant for an error when the machine does not exist.
 *
 * This error message is displayed when a user tries to access a machine that does not exist.
 */
#define ERROR_MACHINE_NOT_EXIST "ERROR: Machine does not exist!"

/**
 * @brief A string constant for an error when the machine list is empty.
 *
 * This error message is displayed when there are no machines in the system.
 */
#define ERROR_NO_MACHINES "ERROR: Machine list is empty!"

/**
 * @brief A string constant for an error when no machines were used in production processes.
 *
 * This error message is displayed when the system detects that no machines have been used in any 
 * production processes, indicating an issue or absence of machine activity in the production context.
 */
#define ERROR_NO_MACHINE_USED_IN_PROCESSES "ERROR: No machines were used in production processes!"

/**
 * @brief A string constant prompting the user to enter the machine name during machine creation.
 *
 * This prompt is displayed when the user is asked to enter a name for the new machine.
 */
#define CREATE_MACHINE_NAME "Enter machine name: "

/**
 * @brief A string constant prompting the user to select the machine type during machine creation.
 *
 * This prompt is displayed when the user is asked to select the type of the new machine.
 */
#define CREATE_MACHINE_TYPE "Select machine type: "

/**
 * @brief A string constant prompting the user to select the machine status during machine creation.
 *
 * This prompt is displayed when the user is asked to select the status of the new machine.
 */
#define CREATE_MACHINE_STATUS "Select machine status: "

/**
 * @brief A string constant representing the edit machine menu header.
 *
 * This header is displayed to introduce the machine edit options menu.
 */
#define MACHINE_EDIT_MENU_HEADER "---------EDIT MACHINE MENU--------"

/**
 * @brief A string constant for editing the machine name.
 *
 * This option is displayed in the machine edit menu to allow the user to edit the machine's name.
 */
#define EDIT_MACHINE_NAME "| 1-Edit Machine Name            |"

/**
 * @brief A string constant for editing the machine type.
 *
 * This option is displayed in the machine edit menu to allow the user to edit the machine's type.
 */
#define EDIT_MACHINE_TYPE "| 2-Edit Machine Type            |"

/**
 * @brief A string constant for editing the machine status.
 *
 * This option is displayed in the machine edit menu to allow the user to edit the machine's status.
 */
#define EDIT_MACHINE_STATUS "| 3-Edit Machine Status          |"

/**
 * @brief A string constant prompting the user to enter a new machine name during editing.
 *
 * This prompt is displayed when the user is asked to input a new name for the machine.
 */
#define EDIT_MACHINE_GET_NAME "Enter new machine name: "

/**
 * @brief A string constant prompting the user to enter a new machine type during editing.
 *
 * This prompt is displayed when the user is asked to input a new type for the machine.
 */
#define EDIT_MACHINE_GET_TYPE "Enter new machine type: "

/**
 * @brief A string constant prompting the user to enter a new machine status during editing.
 *
 * This prompt is displayed when the user is asked to input a new status for the machine.
 */
#define EDIT_MACHINE_GET_STATUS "Enter new machine status: "

/**
 * @brief A string constant representing the machine type menu header.
 *
 * This header is displayed to introduce the machine type selection menu.
 */
#define MACHINE_TYPE_MENU_HEADER "---------MACHINE TYPE MENU--------"

/**
 * @brief A string constant representing the cut machine type option.
 *
 * This option is displayed when the user selects the "Cut" machine type in the machine type menu.
 */
#define MACHINE_TYPE_CUT_OUTPUT        "| 1-Cut                          |"

/**
 * @brief A string constant representing the injection machine type option.
 *
 * This option is displayed when the user selects the "Injection" machine type in the machine type menu.
 */
#define MACHINE_TYPE_INJECTION_OUTPUT "| 2-Injection                    |"

/**
 * @brief A string constant representing the solder machine type option.
 *
 * This option is displayed when the user selects the "Solder" machine type in the machine type menu.
 */
#define MACHINE_TYPE_SOLDER_OUTPUT "| 3-Solder                       |"

/**
 * @brief A string constant representing the milling machine type option.
 *
 * This option is displayed when the user selects the "Milling" machine type in the machine type menu.
 */
#define MACHINE_TYPE_MILLING_OUTPUT "| 4-Milling                      |"

/**
 * @brief A string constant representing the sanding machine type option.
 *
 * This option is displayed when the user selects the "Sanding" machine type in the machine type menu.
 */
#define MACHINE_TYPE_SANDING_OUTPUT "| 5-Sanding                      |"

/**
 * @brief A string constant representing the drilling machine type option.
 *
 * This option is displayed when the user selects the "Drilling" machine type in the machine type menu.
 */
#define MACHINE_TYPE_DRILLING_OUTPUT "| 6-Drilling                     |"

/**
 * @brief A string constant representing the CNC machine type option.
 *
 * This option is displayed when the user selects the "CNC" machine type in the machine type menu.
 */
#define MACHINE_TYPE_CNC_OUTPUT "| 7-CNC                          |"

/**
 * @brief A string constant representing the turning machine type option.
 *
 * This option is displayed when the user selects the "Turning" machine type in the machine type menu.
 */
#define MACHINE_TYPE_TURNING_OUTPUT "| 8-Turning                      |"

/**
 * @brief A string constant representing the print machine type option.
 *
 * This option is displayed when the user selects the "Print" machine type in the machine type menu.
 */
#define MACHINE_TYPE_PRINT_OUTPUT "| 9-Print                        |"

/**
 * @brief A string constant representing the packaging machine type option.
 *
 * This option is displayed when the user selects the "Packaging" machine type in the machine type menu.
 */
#define MACHINE_TYPE_PACKAGING_OUTPUT "| 10-Packaging                   |"

/**
 * @brief A string constant representing the machine status menu header.
 *
 * This header is displayed to introduce the machine status selection menu.
 */
#define STATUS_MACHINE_MENU_HEADER "--------STATUS MACHINE MENU-------"

/**
 * @brief A string constant for the operational status option in the machine status menu.
 *
 * This option is displayed when the user selects the "Operational" status for a machine.
 */
#define STATUS_MACHINE_OPERATIONAL_OPTION "| 1-Operational                  |"

/**
 * @brief A string constant for the unoperational status option in the machine status menu.
 *
 * This option is displayed when the user selects the "Unoperational" status for a machine.
 */
#define STATUS_MACHINE_UNOPERATIONAL_OPTION "| 2-Unoperational                |"

/**
 * @brief A string constant for the inactive status option in the machine status menu.
 *
 * This option is displayed when the user selects the "Inactive" status for a machine.
 */
#define STATUS_MACHINE_INACTIVE_OPTION "| 3-Inactive                     |"

/**
 * @brief A string constant representing the machine ID in the machine details.
 *
 * This string is used to display the ID of a machine.
 */
#define MACHINE_ID "\nMachine ID: %d"

/**
 * @brief A string constant representing the machine name in the machine details.
 *
 * This string is used to display the name of a machine.
 */
#define MACHINE_NAME "\nMachine Name: %s"

/**
 * @brief A string constant representing the machine type in the machine details.
 *
 * This string is used to display the type of a machine.
 */
#define MACHINE_TYPE "\nMachine Type: %s"

/**
 * @brief A string constant representing the machine status in the machine details.
 *
 * This string is used to display the status of a machine.
 */
#define MACHINE_STATUS "\nMachine Status: %s\n"
    
/**
 * @brief A string constant representing the machine's name and its usage count.
 *
 * This string is used to display the name of a machine along with the number of times it has been used.
 * The first placeholder (%s) will be replaced by the machine's name, and the second placeholder (%d) 
 * will be replaced by the usage count (an integer value).
 */
#define MACHINE_MOST_USED "Machine: %s | Uses: %d\n"


/**
 * @brief A string constant for the success message when a machine is successfully created.
 *
 * This message is displayed when a machine is successfully created.
 */
#define MACHINE_CREATED "Machine created successfully!\n"

/**
 * @brief A string constant for the success message when a machine's name is edited.
 *
 * This message is displayed when a machine's name is successfully edited.
 */
#define SUCCESS_EDIT_MACHINE_NAME "Machine name edited with success!"

/**
 * @brief A string constant for the success message when a machine's type is edited.
 *
 * This message is displayed when a machine's type is successfully edited.
 */
#define SUCCESS_EDIT_MACHINE_TYPE "Machine type edited with success!"

/**
 * @brief A string constant for the success message when a machine's status is edited.
 *
 * This message is displayed when a machine's status is successfully edited.
 */
#define SUCCESS_EDIT_MACHINE_STATUS "Machine status edited with success!"

/**
 * @brief A string constant for the success message when a machine is successfully deleted.
 *
 * This message is displayed when a machine is successfully deleted.
 */
#define MACHINE_DELETED "Machine deleted with success!"
    
/**
 * @brief A string constant for the header of the average production time per machine report.
 *
 * This message is displayed as the title of the report showing the average production time
 * for each machine in the system.
 */
#define AVERAGE_PRODUCTION_TIME_PER_MACHINE "----------AVERAGE PRODUCTION TIME PER MACHINE----------\n"

/**
 * @brief A format string for printing the header row of the average production time per machine report.
 *
 * This format specifies the column labels for the report, including ID, Name, and Average (HH:MM:SS).
 */
#define PRINT_AVERAGE_PRODUCTION_TIME_PER_MACHINE "| %-10s | %-20s | %-15s |\n", "ID", "Name", "Average (HH:MM:SS)"

/**
 * @brief A string constant for the separator line in the average production time per machine report.
 *
 * This line is used to visually separate sections of the report for clarity.
 */
#define LINE_AVERAGE_PRODUCTION_TIME_PER_MACHINE "-------------------------------------------------------\n"

/**
 * @brief A format string for printing machines without production time data in the report.
 *
 * This format is used to display machines that have no recorded production time, showing "00:00:00" as the average.
 */
#define PRINT_NO_MACHINE_AVERAGE_TIME "| %-10d | %-20s | 00:00:00           |\n"

/**
 * @brief A format string for printing machines with calculated average production time.
 *
 * This format is used to display the machine's ID, name, and average production time in HH:MM:SS format.
 */
#define PRINT_MACHINE_AVERAGE_TIME "| %-10d | %-20s | %02d:%02d:%02d       |\n"

/**
 * @brief A string constant for the machine performance report header.
 *
 * This message is displayed at the beginning of the machine performance report.
 */
#define MACHINE_PERFORMANCE_REPORT_HEADER "Machine Performance Report:\n"

/**
 * @brief A string constant for displaying the machine type header.
 *
 * This format string is used to display the type of machines being analyzed in the report.
 */
#define MACHINE_PERFORMANCE_REPORT_TYPE_HEADER "\nMachine Type: %s\n"

/**
 * @brief A string constant for displaying the maximum time machine information.
 *
 * This format string is used to display the machine with the maximum processing time.
 */
#define MACHINE_PERFORMANCE_REPORT_MAX_TIME "  Max Time Machine: %s (ID: %d) - %02d:%02d:%02d\n"

/**
 * @brief A string constant for displaying no maximum time machine available.
 *
 * This message is displayed when no machine has a maximum processing time.
 */
#define MACHINE_PERFORMANCE_REPORT_MAX_TIME_NONE "  Max Time Machine: None\n"

/**
 * @brief A string constant for displaying the minimum time machine information.
 *
 * This format string is used to display the machine with the minimum processing time.
 */
#define MACHINE_PERFORMANCE_REPORT_MIN_TIME "  Min Time Machine: %s (ID: %d) - %02d:%02d:%02d\n"

/**
 * @brief A string constant for displaying no minimum time machine available.
 *
 * This message is displayed when no machine has a minimum processing time.
 */
#define MACHINE_PERFORMANCE_REPORT_MIN_TIME_NONE "  Min Time Machine: None\n"

    
#ifdef __cplusplus
}
#endif

#endif /* DESIGNMACHINES_H */

