/**
 * @file macrosProduct.h
 * @author João Ribeiro & Diogo Costa
 * @date 13-12-2024
 * @version 1
 *
 * @copyright Copyright (C) ESTG 2024. All Rights MIT Licensed.
 *
 * @brief Contains macro definitions related to product handling in the system.
 */


#ifndef MACROSPRODUCT_H
#define MACROSPRODUCT_H

#ifdef __cplusplus
extern "C" {
#endif

#define ACCESS_TO_PRODUCT_COUNTER management->product_counter   
#define ACCESS_TO_PRODUCT_BY_COUNTER management->product[management->product_counter]
#define ACCESS_TO_PRODUCT_ID management->product[management->product_counter]->id
#define ACCESS_TO_PRODUCT_NAME management->product[management->product_counter]->name
#define ACCESS_TO_PRODUCT_CATEGORY management->product[management->product_counter]->category    
#define ACCESS_TO_PRODUCT_MACHINEID management->product[management->product_counter]->machineid
#define ACCESS_TO_PRODUCT_HOURS_WASTED management->product[management->product_counter]->hours_wasted
#define ACCESS_TO_PRODUCT_MINUTES_WASTED management->product[management->product_counter]->minutes_wasted
#define ACCESS_TO_PRODUCT_SECONDS_WASTED management->product[management->product_counter]->seconds_wasted
#define ACCESS_TO_PRODUCT_STATUS management->product[management->product_counter]->status

#define ACCESS_TO_PRODUCT_BY_ID management->product[id]    
#define ACCESS_TO_PRODUCT_NAME_BY_ID management->product[id]->name
#define ACCESS_TO_PRODUCT_CATEGORY_BY_ID management->product[id]->category   
#define ACCESS_TO_PRODUCT_HOURS_WASTED_BY_ID management->product[id]->hours_wasted
#define ACCESS_TO_PRODUCT_MINUTES_WASTED_BY_ID management->product[id]->minutes_wasted
#define ACCESS_TO_PRODUCT_SECONDS_WASTED_BY_ID management->product[id]->seconds_wasted
#define ACCESS_TO_PRODUCT_STATUS_BY_ID management->product[id]->status  
    
#define ACCESS_TO_PRODUCT_BY_I management->product[i]      
#define ACCESS_TO_PRODUCT_BY_I_ID management->product[i]->id  
    
#define ACCESS_PRODUCT_ID product->id    
#define ACCESS_PRODUCT_NAME product->name
#define ACCESS_PRODUCT_CATEGORY product->category
#define ACCESS_PRODUCT_STATUS product->status

#define ACCESS_TO_PRODUCT_COUNTER_UTIL management.product_counter
#define ACCESS_TO_PRODUCT_BY_I_ID_UTIL management.product[i]->id  


    
    
    
#ifdef __cplusplus
}
#endif

#endif /* MACROSPRODUCT_H */

