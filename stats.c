/*#include "stdafx.h"*/
#include <stdint.h>
#include <stdio.h>
//#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)


  /*---------------------- print_array()----------------------------*/
   int print_array(unsigned char t[SIZE])
   {
    printf("array is:");
    printf("[");
	
    // navigate through all items 
    for(int i = 0;i < SIZE ;i++)
    {
        printf("%d ",t[i]);
    }
    printf("]\n");
   }



  /*---------------------- find_minimum()----------------------------*/
   int find_minimum(unsigned char t[SIZE])
    {

    //unsigned char minNum = t[0];
	int minNum = t[0];
    int pointer = 0;

    for(int i = 1 ; i < SIZE - 1 ; i++)
    {
         if (t[i] < minNum)
         {
            minNum = t[i];
            pointer = i;
         }
    }
    
   // printf("min is:%d", minNum);
    return minNum;
    }

   /*---------------------- find_maximum()----------------------------*/
   int  find_maximum(unsigned char t[SIZE])
    {

        //unsigned char maxNum = t[0];
		int maxNum = t[0];
        int pointer = 0;

        for(int i = 1 ; i < SIZE - 1 ; i++)
        {
         if (t[i] > maxNum)
         {
            maxNum = t[i];
            pointer = i;
         }
        }
    
        //printf("max is:%d", maxNum);
        return maxNum;
    }
    /*---------------------- find_mean()----------------------------*/
    int find_mean(unsigned char t[SIZE])
    {
        int SUM = 0;
        int mean = 0;
        
        for(int i = 0 ; i < SIZE - 1 ; i++)
        {
            SUM = SUM + t[i];
        }
        mean = (SUM / SIZE);
        
    }
    /*---------------------- sort()----------------------------*/
    int sort(unsigned char t[SIZE])
    {
        
        int temp;
        for(int i = 0 ; i < SIZE - 1 ; ++i)
        {
            for(int j = i + 1 ; j < SIZE  ; ++j)
            {
                if(t[i] < t[j])
                {
                    temp = t[i];
                    t[i] = t[j];
                    t[j] = temp;
                }
            }
        }
        printf("sort is:");
        printf("[");
	
        // navigate through all items 
        for(int i = 0;i < SIZE ;i++)
        {
            printf("%d ",t[i]);
        }
        printf("]\n");
           
        
    }



/*int _tmain(int argc, _TCHAR* argv[])*/
void main()
{
	unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

    char array = print_array(test);
    printf("\n----------------------------------------------\n");
    
    int minNum = find_minimum(test);
    printf("min is:%d", minNum);
    printf("\n----------------------------------------------\n");
    
    int maxNum = find_maximum(test);
    printf("max is:%d", maxNum);
    printf("\n----------------------------------------------\n");
    
    int mean = find_mean(test);
    printf("mean is:%d", mean);
    printf("\n----------------------------------------------\n");
    
    int t = sort(test);
    printf("\n----------------------------------------------\n");
    
    getch();
    return 0;

}
