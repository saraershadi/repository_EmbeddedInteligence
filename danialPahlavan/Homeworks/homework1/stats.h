
/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.h> 
 * @brief <header file of stats.c>
 * @author <Pouya Hosseinzadeh>
 * @date <05/03/2021>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


void print_statistics(unsigned char array[], unsigned int length); //print statistics result of array


void print_array(unsigned char array[], unsigned int length); // print array


//methods for find specifict things
unsigned char find_median(unsigned char array[], unsigned int length);


unsigned char find_min(unsigned char array[], unsigned int length);


unsigned char find_max(unsigned char array[], unsigned int length);


unsigned char find_mean(unsigned char array[], unsigned int length);


void sort_array(unsigned char array[], unsigned int length);

#endif /* __STATS_H__ */
