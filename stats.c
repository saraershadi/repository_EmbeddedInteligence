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
 * @brief <the main file that has to be executed >
 *
 * <Add Extended Description Here>
 *9913101017
 * @author <Atta Maleki>
 * @date <1400/02/14 >
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
                                7,  87, 250, 230,  99,   3, 100,  96};
  /* Other Variable Declarations Go Here */
  unsigned char minimum =find_minimum(test, SIZE);
  unsigned char maximum =find_maximum(test, SIZE);
  float mean = find_mean(test,SIZE);
  unsigned char median = find_median(test, SIZE);
  
  /* Statistics and Printing Functions Go Here */
	printf("****Array => \n");
	print_array(test,SIZE);
	printf("\n");
	printf("****Sorted Array => \n");
	print_array(sort_array(test, SIZE), SIZE);
	printf("\n");
	printf("**** STATISTICS => \n");
	print_statistics(minimum, maximum, median, mean);


}
/* Add other Implementation File Code Here */
void print_array(unsigned char *array, int iteration)
{
	for (int i = 0; i<iteration; i++)
	{ 
		printf("%d \t", array[i]);}}
unsigned char find_minimum(unsigned char *array, unsigned int iteration)
{	unsigned char min = array[0];
	for (int i = 0; i < iteration; i++)
	{	if (min > array[i])
			min = array[i];
	}
	return min;
}
unsigned char find_maximum(unsigned char *array, unsigned int iteration)
{	unsigned char max = array[0];
	for (int i = 1; i < SIZE; i++)
	{	if (max < array[i])
			max = array[i];
	}
	return max;
}
float find_mean(unsigned char *array ,  unsigned int iteration)
{
	float mean = 0;
	for (int i =0; i < iteration; i++)
	{
		mean += array[i];
	}
	mean = mean / SIZE;
	return mean;
	}
unsigned char * sort_array(unsigned char *array, unsigned int iteration){
	unsigned char temp;
	for(int i = 0; i < iteration; i++){
		for(int j = i+1; j < iteration; j++){
			if( array[i] < array[j] ){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	return array;
}		

unsigned char find_median(unsigned char *array , unsigned int iteration)
{
	unsigned char median;
	array = sort_array(array, SIZE);
	median = array[SIZE/2];
	return median;}

void print_statistics(unsigned char min, unsigned char max, unsigned char med, float me)
{
	printf("MINIMUM = %d \n", min);
	printf("MAXIMUM = %d \n", max);
	printf("MEDIAN = %d \n", med);
	printf("MEAN = %f \n", me);
}
















