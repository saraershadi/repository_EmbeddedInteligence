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
 * @brief <assignment 1 for embedded inteligence >
 *
 * <Add Extended Description Here>
 *
 * @author <fateme abedini>
 * @date <17 esfand 1399>
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
  /* Statistics and Printing Functions Go Here */

}
void myprintfunc(a)
{
  printf(a,'/n');
}
void myprintarray(int test[SIZE])
{
  for(int i=2;i<=SIZE;i++)
  { 
  printf(test[i],'/n');
  }  
  
}
int sort_array(int test[SIZE])
{
int temp;
  for(int i=0;i<=SIZE;i++)
  { 
     for(int j=i+1;j<=SIZE;j++)
      { 
         if (test[i]>test[j])
         {
           temp =test[i];
           test[i]=test[j];
           test[j]=temp;
         }
       }
         
  
  myprintarray(test[SIZE]);
}
int find_max(int test[SIZE])
{
  int max_a=test[1];
  for(int i=2;i<=SIZE;i++)
  { 
    if (test[i]>max_a)
       {
         max_a=test[i];
       }
  }  
  myprintfunc(max_a);
}
int find_min(int test[SIZE])
{
  int min_a=test[1];
  for(int i=2;i<=SIZE;i++)
  { 
    if (test[i]<min_a)
       {
         min_a=test[i];
       }
  }  
  myprintfunc(min_a);
}
int find_mean(int test[SIZE])
{
  sort_array(test);
  myprintfunc(test[SIZE/2]);
}
int find_median(int test[SIZE])
{
  int sum=test[1];
  for(int i=2;i<=SIZE;i++)
  { 
   sum=sum+test[i];
  }  
  int average=sum/SIZE;
  myprintfunc(average);
}
}
/* Add other Implementation File Code Here */
