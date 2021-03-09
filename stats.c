#include <stdio.h>
int main()
{  
     int i;                          
     int    a[40]={1,2,43,4,51,56,7,8,9,10,47,21,54,56,25,14,44,41,21,24,26,52,41,32,12,41,25,36,30,38,25,65,42,36,44,57,65,39,28,74};
     int sum=0;
     int n=0;     
     int temp = 0;     
     float mean=0; 
     float median=0;
     int max=0,min=a[0];
     int odd,even;          
     printf("Elements of array befor sort: \n");
    for (int i = 0; i < 40; i++) {
        printf("%d ", a[i]);
    }
     for(i=0;i<40;i++){
       sum+=a[i];}
      for(i=0;i<40;i++){
            if(a[i]>max){             
                max=a[i];
        }
            else if(a[i]<=min){ /** my problem is this part,it should give the minimum           

	                                       integer as what the user enter but it always give

	                                       min=0 can anyone edit this part or the code in getting

                                       max and min**/ 
                min=a[i];
         }                          
      }  
      for (int i=0;i<40;i++) {
        for (int j=i+1;j<40;j++) {
           if(a[i]>a[j]) {
               temp = a[i];
               a[i] = a[j];
               a[j] = temp;
           }
        }
    }
      printf("\n Elements of array sorted in ascending order: \n");
      for (int i = 0; i < 40; i++) {
        printf("%d ", a[i]);
    }

    if(40%2 == 0){
        median = (a[(40-1)/2] + a[40/2])/2.0;}
    // if number of elements are odd
    else{
      median = a[40/2];}
      printf("\n\nThe median is : %f\n",median);
      printf("max: %d\n",max);                
      printf("min: %d\n",min);   
      printf("sum: %d\n",sum);
      mean=sum/40;   
      printf("mean: %1.f\n",mean);   
     return 0;          
	   }
