/**
 * @file macrosMachine.h
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief This header file contains macros for managing machine-related data structures and operations.
 *
 * These macros simplify access to the fields of machine and management structures.
 * They are designed to enhance code readability and reduce repetitive code when dealing with 
 * machine-related data in a management system.
 */

#ifndef MACROSMACHINE_H
#define MACROSMACHINE_H

#ifdef __cplusplus
extern "C" {
#endif

#define ACCESS_TO_MACHINE management->machine /**< Access the current machine. */

#define ACCESS_TO_MACHINE_COUNTER_1 management.machine_counter /**< Access the total machine count. */
#define ACCESS_TO_MACHINE_COUNTER management->machine_counter /**< Access the total machine count. */
#define ACCESS_TO_MACHINE_BY_MACHINE_COUNTER management->machine[management->machine_counter] /**< Access the machine by counter index. */
#define ACCESS_TO_MACHINE_USED_BY_PRODUCT_BY_MACHINE_COUNTER management->machine[management->machine_counter]->used_by_product /**< Access machine's product usage count by counter index. */
#define ACCESS_TO_MACHINE_ID_BY_MACHINE_COUNTER management->machine[management->machine_counter]->id /**< Access machine ID by counter index. */
#define ACCESS_TO_MACHINE_NAME_BY_MACHINE_COUNTER management->machine[management->machine_counter]->name /**< Access machine name by counter index. */
#define ACCESS_TO_MACHINE_TYPE_BY_MACHINE_COUNTER management->machine[management->machine_counter]->machinetype /**< Access machine type by counter index. */
#define ACCESS_TO_MACHINE_STATUS_BY_MACHINE_COUNTER management->machine[management->machine_counter]->machinestatus /**< Access machine status by counter index. */

#define ACCESS_TO_MACHINE_BY_I management->machine[i] /**< Access the machine by iterator index. */
#define ACCESS_TO_MACHINE_ID_BY_I_1 management.machine[i]->id /**< Access machine ID by iterator index. */
#define ACCESS_TO_MACHINE_ID_BY_I management->machine[i]->id /**< Access machine ID by iterator index. */
#define ACCESS_TO_MACHINE_NAME_BY_I management->machine[i]->name /**< Access machine name by iterator index. */

#define ACCESS_TO_MACHINE_BY_ID management->machine[id] /**< Access the machine by ID. */
#define ACCESS_TO_MACHINE_STATUS_BY_ID management->machine[id]->machinestatus /**< Access machine status by ID. */
#define ACCESS_TO_MACHINE_USED_BY_PRODUCT_BY_ID management->machine[id]->used_by_product /**< Access machine's product usage count by ID. */
#define ACCESS_TO_MACHINE_TYPE_BY_ID management->machine[id]->machinetype /**< Access machine type by ID. */
#define ACCESS_TO_MACHINE_NAME_BY_ID management->machine[id]->name /**< Access machine name by ID. */

#define ACCESS_TO_MACHINE_BY_MACHINE_ID management->machine[machine_id]; /**< Access machine by machine ID. */
#define ACCESS_TO_MACHINE_USED_BY_PRODUCT_BY_MACHINE_ID management->machine[machine_id]->used_by_product /**< Access machine's product usage count by machine ID. */

#define ACCESS_TO_MACHINE_ID machine->id /**< Access machine ID. */
#define ACCESS_TO_MACHINE_NAME machine->name /**< Access machine name. */
#define ACCESS_TO_MACHINE_TYPE machine->machinetype /**< Access machine type. */
#define ACCESS_TO_MACHINE_STATUS machine->machinestatus /**< Access machine status. */
#define ACCESS_TO_MACHINE_USED_BY_PRODUCT machine->used_by_product /**< Access machine's product usage count. */

#define ACCESS_TO_MACHINE_J management->machine[j] /**< Access the machine by j iterator index. */
    
#ifdef __cplusplus
}
#endif

#endif /* MACROSMACHINE_H */
