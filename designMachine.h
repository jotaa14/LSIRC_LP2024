#ifndef DESIGNMACHINES_H
#define DESIGNMACHINES_H

#ifdef __cplusplus
extern "C" {
#endif

#define MSG_GET_MACHINE "Introduce the machine ID: "
    
//MACHINE MENU DESIGN

#define MACHINE_MENU_HEADER "-----------MACHINE MENU-----------"
#define MACHINE_CREATE "| 1-Create Machine               |"
#define MACHINE_EDIT "| 2-Edit Machine                 |"
#define MACHINE_DELETE "| 3-Delete Machine               |"
#define MACHINE_LIST "| 4-Reports Machine              |"

#define ERROR_MACHINES_REACHED "ERROR: Maximum number of machines reached!"
#define ERROR_MACHINE_NOT_EXIST "ERROR: Machine do not exist!"
#define ERROR_NO_MACHINES "ERROR: Machine list is empty!"    
    
#define CREATE_MACHINE_NAME "Enter machine name: "
#define CREATE_MACHINE_TYPE "Select machine type: "
#define CREATE_MACHINE_STATUS "Select machine status: "
#define MACHINE_CREATED "Machine created sucessfully!\n"
                                 
#define MACHINE_EDIT_MENU_HEADER "---------EDIT MACHINE MENU--------"
#define EDIT_MACHINE_NAME "| 1-Edit Machine Name            |"
#define EDIT_MACHINE_TYPE "| 2-Edit Machine Type            |"
#define EDIT_MACHINE_STATUS "| 3-Edit Machine Status          |"
#define EDIT_MACHINE_GET_NAME "Enter new machine name: "
#define EDIT_MACHINE_GET_TYPE "Enter new machine type: "
#define EDIT_MACHINE_GET_STATUS "Enter new machine status: "
    
#define MACHINE_TYPE_MENU_HEADER "---------MACHINE TYPE MENU--------"
#define MACHINE_TYPE_CUT_OUTPUT        "| 1-Cut                          |"
#define MACHINE_TYPE_INJECTION_OUTPUT "| 2-Injection                    |"
#define MACHINE_TYPE_SOLDER_OUTPUT "| 3-Solder                       |"
#define MACHINE_TYPE_MILLING_OUTPUT "| 4-Milling                      |"
#define MACHINE_TYPE_SANDING_OUTPUT "| 5-Sanding                      |"
#define MACHINE_TYPE_DRILLING_OUTPUT "| 6-Drilling                     |"
#define MACHINE_TYPE_CNC_OUTPUT "| 7-CNC                          |"
#define MACHINE_TYPE_TURNING_OUTPUT "| 8-Turning                      |"
#define MACHINE_TYPE_PRINT_OUTPUT "| 9-Print                        |"
#define MACHINE_TYPE_PACKAGING_OUTPUT "| 10-Packaging                   |"
    
//MACHINE STATUS MENU
#define STATUS_MACHINE_MENU_HEADER "--------STATUS MACHINE MENU-------"   
#define STATUS_MACHINE_OPERATIONAL_OPTION "| 1-Operational                  |"
#define STATUS_MACHINE_UNOPERATIONAL_OPTION "| 2-Unoperational                |"
#define STATUS_MACHINE_INACTIVE_OPTION "| 3-Inactive                     |"

    
//MACHINE LIST DESIGN
#define MACHINE_ID "\nMachine ID: %d"
#define MACHINE_NAME "\nMachine Name: %s"
#define MACHINE_TYPE "\nMachine Type: %s"
#define MACHINE_STATUS "\nMachine Status: %s\n"

    
#ifdef __cplusplus
}
#endif

#endif /* DESIGNMACHINES_H */

