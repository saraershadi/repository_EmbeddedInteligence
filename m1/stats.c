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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include <stdlib.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)
#define ELEMENTS (40)
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
/* find median */
int find_median(int out[SIZE]){
int n;
  qsort (out, ELEMENTS, sizeof(int), compare);
  for (n=0; n<ELEMENTS; n++)
  {   printf ("%d ",out[n]); }
  printf ("median=%d ",out[ELEMENTS/2]);
  return 0;
  }
/*find mean */
int find_mean(int out[SIZE]) {
int n;
int sum=0;
for (n=0; n<ELEMENTS; n++)
  {   sum=sum+out[n] ; }
  printf ("mean=%d ",sum/ELEMENTS);
  return 0;

}
/*find maximum */
int find_maximum(int out[SIZE])
{
 int n;
 int max=out[0];
  for (n = 0; n < ELEMENTS; n++)
        if (out[n] > max)
            max = out[n];
            printf ("max=%d ",max);
            return 0;
}   
/*find minimum */
int find_minimum(int out[SIZE])
{
 int n;
 int min=out[0];
  for (n = 0; n < ELEMENTS; n++)
        if (out[n] < min)
            min = out[n];
            printf ("min=%d ",min);
            return 0;
}   

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  int n;
  int out[SIZE];
  for (n=0; n<SIZE; n++)
  {   
   out[n]=test[n];
    //printf ("%d ",out[n]); 
  }
  find_median(out);
  find_mean(out);
  find_maximum(out);
  find_minimum(out);

// int *out=convertuntoint(test);

}


