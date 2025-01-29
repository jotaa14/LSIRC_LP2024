/**
 * @file constsMachine.h
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains constants related to machine management.
 */


#ifndef CONSTSMACHINE_H
#define CONSTSMACHINE_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief A constant representing the maximum number of machines in the system.
 *
 * This constant defines the maximum number of machines that can be managed by the system (40).
 */
#define MACHINES_SIZE 40

/**
 * @brief A constant representing the maximum size of a machine's name.
 *
 * This constant defines the maximum length for a machine's name (100 characters).
 */
#define MACHINE_NAME_SIZE 100

/**
 * @brief A constant representing the minimum valid size for a machine.
 *
 * This constant defines the smallest possible size for a machine (1).
 */
#define MIN_SIZE_MACHINE 1



#ifdef __cplusplus
}
#endif

#endif /* CONSTSMACHINE_H */

