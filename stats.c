/******************************************************************************
 @file <stats.c> 
 @author <Pardis Gifani>
 @date 05/28/2021

   * Instructions:
 
        This is the 1st HW of the Coursera Course Embedded Software.
 
                main() - The main entry point for your program
                print_statistics() - A function that prints the statistics of an array including minimum, maximum, mean, and median.
                print_array() - Given an array of data and a length, prints the array to the screen             [DONE]
                find_median() - Given an array of data and a length, returns the median value                   [DONE]
                find_mean() - Given an array of data and a length, returns the mean                             [DONE]
                find_maximum() - Given an array of data and a length, returns the maximum                       [DONE]
                find_minimum() - Given an array of data and a length, returns the minimum                       [DONE]
                sort_array() - Given an array of data and a length, sorts the array from largest to smallest.   [DONE]
                        (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )

 *****************************************************************************/

#include <stdio.h>
#include "stats.h"

#define SIZE (40)
/* main() - The main entry point for your program */
void main() {
   unsigned char array[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                               114, 88,   45,  76, 123,  87,  25,  23,
                               200, 122, 150, 90,   92,  87, 177, 244,
                               201,   6,  12,  60,   8,   2,   5,  67,
                                 7,  87, 250, 230,  99,   3, 100,  90};
  
  unsigned char sorted_array[SIZE];
  int maximum = 0, minimum = 0, median = 0, mean = 0;
  
  printf("Unsorted array \n");
  print_array(array);
  sort_array(array);
  printf("\nSorted array \n");
  print_array(array);
  printf("\n");
  maximum = find_maximum(array);
  minimum = find_minimum(array);
  median  = find_median(array);
  mean   = find_mean(array);
  print_statistics(median, mean, maximum, minimum);
 
 }


/* print_statistics() *///////////////////////
void print_statistics(int median, int mean, int maximum, int minimum) {
       printf("Median = %i; \t
              Mean = %i;
              \t Maximum = %i;
              \t Minimum = %i\n"
              , median, mean, maximum, minimum);
}


/* print_array(): Given an array of data and a length, prints the array to the screen */
void print_array(unsigned char array[]) {
       int i = 0;
       for (i = 0; i < SIZE; i++) {
               printf("%i\t%i\n", array[i], i);
       }
}


/* find_median() - Given an array of data and a length, returns the median value */
int find_median(unsigned char sorted_array[]) {
       int i = 0, median = 0;
       if (SIZE % 2 == 0) {
               median = sorted_array[SIZE/2] + sorted_array[SIZE/2 - 1];
       } else {
               median = sorted_array[(SIZE - 2) / 2];
       }
       return median;
}



/* find_mean() -  Given an array of data and a length, returns the mean */
int find_mean(unsigned char array[]) {
       int i = 0, mean = 0;
       for(i = 0; i < SIZE; i++) {
               mean = mean + array[i];
       }
       mean = mean / (SIZE + 1);
       return mean;
 }


/* find_maximum() -  Given an array of data and a length, returns the maximum */
int find_maximum(unsigned char array[]) {
       int i = 0, maximum = 0;
       for(i = 0; i < SIZE; i++) {
               if(maximum < array[i]) {
                       maximum = array[i];
               }
       }
}


/* find_minimum() -  Given an array of data and a length, returns the minimum */ 
int find_minimum(unsigned char array[]) {
       int i = 0, minimum = 0;
       for(i = 0; i < SIZE; i++) {
               if(minimum < array[i]) {
                       minimum = array[i];
               }
       }
       return minimum;
}


/* sort_array() - Given an array of data and a length, sorts the array from largest to smallest.  (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value */
void sort_array(unsigned char array[], unsigned int length) {
	int i = 0, j = 0;
	unsigned char tmp = 0; // selection sort
	for(int i = 0; i < length; i++){
		for(int j = i; j < length; j++){
			if(array[j] < array[i]){
				tmp = array[j];
				array[j] = array[i];
				array[i] = tmp;
			}
		}
	}
	return;
}

