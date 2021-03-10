#include <stdio.h>
#include "stats.h"
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  int test_int[SIZE],i;
  for(i =0;i < SIZE;i++){
    test_int[i] = (int)test[i];
  }
  
  printf("The original array :\n");
  print_array(test_int,SIZE);
  sort_array(test_int, SIZE);
  printf("The array after sorting process descendingly is : \n");
  print_array(test_int, SIZE);
  int T = find_maximum(test_int, SIZE);
  printf("The Maximum Value in the array is : ");
  print_statistics(T);
  T = find_minimum(test_int, SIZE);
  printf("The Minimum Value in the array is : ");
  print_statistics(T);
  T = find_median(test_int, SIZE);
  printf("The Median Value of the array is : ");
  print_statistics(T);
  T = find_mean(test_int, SIZE);
  printf("The Mean Value of the array is : ");
  print_statistics(T);

}
void print_statistics(int stats){
  printf("%d\n",stats);
  for(int i = 1; i <= 60; i++){
    printf("*");
    if(i == 60 ){
      printf("\n");
    }
  }
}
void print_array(int* array, int size){
  int i;
  for(i =0;i < size;i++){
    if(i == 0){
      printf("%d\t", *(array + i));
      continue;
    }
    else if((i+1)%5 == 0){
      printf("%d\n", *(array + i));
      continue;
    }
    else{
      printf("%d\t", *(array + i));
    }
  }
  for(i = 1; i <= 60; i++){
    printf("*");
    if(i == 60 ){
      printf("\n");
    }
  }
}
int find_median(int* array, int size){
  int median;
  median = (*(array+ ((size - 1)/2)) + *(array + (size/2)))/2;
  return median;
}
int find_mean(int* array, int size){
  int i;
  int mean = 0;
  for(i =0;i < size;i++){
    mean += *(array + i);
  }
  mean = mean /size;
  return mean;
}
int find_maximum(int* array, int size){
  int max;
  int i;
  for(i =0;i < size;i++){
    if(i == 0){
      max = *(array + i);
    }
    if(*(array + i) > max){
      max = *(array + i);
    }
  }
  return max;
}
int find_minimum(int* array, int size){
  int mini;
  int i;
  for(i = 0;i < size;i++){
    if(i == 0){
      mini = *(array + i);
    }
    if(*(array + i) < mini){
      mini = *(array + i);
    }
  }
  return mini;
}
void sort_array(int* array, int size){
  int i,j;
  for(i = 0; i < size; i++){
    int temp;
    for(j = i+1 ; j < size; j++){
      if(*(array + i) < *(array + j)){
        temp = *(array + i);
        *(array + i) = *(array + j);
        *(array + j) = temp;
      }
    }
  }
}

