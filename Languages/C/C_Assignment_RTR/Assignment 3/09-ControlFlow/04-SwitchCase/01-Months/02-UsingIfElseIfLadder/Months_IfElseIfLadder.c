#include<stdio.h>
int main(void){

    int vsv_n;

    printf("\nEnter no from 1 to 12:");
    scanf("%d",&vsv_n);
    
    if (vsv_n==1)
        printf("Month is Jan :[%d]",vsv_n);
    
    else if (vsv_n==2)
        printf("Month is Feb :[%d]",vsv_n);
      
    else if (vsv_n==3)
        printf("Month is Mar :[%d]",vsv_n);
    
    else if (vsv_n==4)
        printf("Month is Apr :[%d]",vsv_n);
        
    else if (vsv_n==5)
        printf("Month is May :[%d]",vsv_n);
     
    else if (vsv_n==6)
        printf("Month is Jun :[%d]",vsv_n);
         
    else if (vsv_n==7)
        printf("Month is Jul :[%d]",vsv_n);
     
    else if (vsv_n==8)
        printf("Month is Aug :[%d]",vsv_n);
        
    else if (vsv_n==9)
        printf("Month is Sep :[%d]",vsv_n);
     
    else if (vsv_n==10)
        printf("Month is Oct :[%d]",vsv_n);
          
    else if (vsv_n==11)
        printf("Month is Nov :[%d]",vsv_n);
        
    else if (vsv_n==12)
        printf("Month is Dec :[%d]",vsv_n);
        
    else 
        printf("Month number is Invalid :[%d]",vsv_n);
  

    return (0);
}


Enter no from 1 to 12:7
Month is Jul :[7]