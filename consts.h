/**
 * @file consts.h
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains constant definitions used throughout the system.
 */

#ifndef CONSTS_H
#define CONSTS_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief A constant representing the minimum valid day for a date.
 *
 * This constant defines the smallest possible day value in a date (1).
 */
#define MIN_DATE_DAY 1

/**
 * @brief A constant representing the maximum valid day for a date.
 *
 * This constant defines the largest possible day value in a date (31).
 */
#define MAX_DATE_DAY 31

/**
 * @brief A constant representing the minimum valid month for a date.
 *
 * This constant defines the smallest possible month value in a date (1).
 */
#define MIN_DATE_MONTH 1

/**
 * @brief A constant representing the maximum valid month for a date.
 *
 * This constant defines the largest possible month value in a date (12).
 */
#define MAX_DATE_MONTH 12

/**
 * @brief A constant representing the minimum valid year for a date.
 *
 * This constant defines the smallest possible year value in a date (2024).
 */
#define MIN_DATE_YEAR 2024

/**
 * @brief A constant representing the maximum valid year for a date.
 *
 * This constant defines the largest possible year value in a date (3000).
 */
#define MAX_DATE_YEAR 3000

/**
 * @brief A constant representing the minimum valid size for an entity.
 *
 * This constant defines the smallest possible valid size (1).
 */
#define MIN_SIZE 1


#ifdef __cplusplus
}
#endif

#endif /* CONSTS_H */

