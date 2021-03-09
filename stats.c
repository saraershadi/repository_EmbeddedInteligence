#include <stdio.h>
int main()
{  
     int i;                          
     int    a[40]={1,2,43,4,51,56,7,8,9,10,47,21,54,56,25,14,44,41,21,24,26,52,41,32,12,41,25,36,30,38,25,65,42,36,44,57,65,39,28,74};
     float sum=0;                  
     float average=0; 
     int max=0,min=a[0];
     int odd,even;          
     for(i=0;i<40;i++){
       sum+=a[i];
          }
      printf("sum is: %d",sum);
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

      printf("max: %d\n",max);                

      printf("min: %d\n",min);   
                     
      printf("sum: %.1f",sum);

      average=sum/40;   

	      printf("average: %1.f",average);   


                      
    
            return(EXIT_SUCCESS);          
	   }
