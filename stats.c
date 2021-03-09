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
 * @file <stats.c> 
 *
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  float mean = find_mean(test, SIZE);
  float median = find_median(test, SIZE);
  unsigned char min = find_minimum(test, SIZE);
  unsigned char max = find_maximum(test, SIZE);

  /* Statistics and Printing Functions Go Here */
  print_statistics(mean, median, min, max);
  printf("\nArray before sorting : \n");
  print_array(test, SIZE);

  printf("\nArray after sorting in descending order : \n");
  sort_array(test, SIZE);  
  print_array(test, SIZE);

}

/* Add other Implementation File Code Here */

void print_statistics(float mean, float median, unsigned char min, unsigned char max){
	printf("Mean: %f \n", mean);
	printf("Median: %f \n", median);
	printf("Minimum: %u \n", min);
	printf("Maximum: %u \n", max);
}


void print_array(unsigned char *ptr, unsigned int size){
	for(int i = 0; i < size; i++){
		printf("%d \t", ptr[i] );
	}
}


float find_median(unsigned char *ptr, unsigned int size){

	unsigned char sorted_array[size];
	for(int i = 0; i < size; i++)
		sorted_array[i] = ptr[i];

	unsigned char temp;
	for(int i = 0; i < size; i++){
		for(int j = i+1; j < size; j++){
			if( sorted_array[i] > sorted_array[j] ){
				temp = sorted_array[i];
				sorted_array[i] = sorted_array[j];
				sorted_array[j] = temp;
			}
		}
	}

	if ( size%2 == 0 ){
		float a = (float)(sorted_array[(size/2)-1]);
		float b = (float)(sorted_array[(size/2)]);
		float med = (a+b)/2.0;
		return med;
	}
	else
		return sorted_array[(size)/2];
}


float find_mean(unsigned char *ptr, unsigned int size){
	float mean = 0;
	for(int i = 0; i < size; i++){
		mean += ptr[i];
	}
	mean = mean / size;
	return mean;
}



unsigned char find_minimum(unsigned char *ptr, unsigned int size){
	unsigned char min = ptr[0];
	for(int i = 1; i < size; i++){
		if ( ptr[i] < min )
			min = ptr[i];
	}
	return min;
}


unsigned char find_maximum(unsigned char *ptr, unsigned int size){
	unsigned char max = ptr[0];
	for(int i = 1; i < size; i++){
		if ( ptr[i] > max )
			max = ptr[i];
	}
	return max;
}


void sort_array(unsigned char *ptr, unsigned int size){
	unsigned char temp;
	for(int i = 0; i < size; i++){
		for(int j = i+1; j < size; j++){
			if( ptr[i] < ptr[j] ){
				temp = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = temp;
			}
		}
	}
}
