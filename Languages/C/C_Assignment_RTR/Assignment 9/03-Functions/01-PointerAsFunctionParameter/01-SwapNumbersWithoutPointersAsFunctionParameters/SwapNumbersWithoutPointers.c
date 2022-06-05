#include<stdio.h>
int main(void){

    void vsv_Func_SwapNumbers(int,int);

    int vsv_a;
    int vsv_b;

    printf("\nEnter value for 'A':");
    scanf("%d",&vsv_a);

    printf("\nEnter value for 'B':");
    scanf("%d",&vsv_b);

    vsv_Func_SwapNumbers(vsv_a,vsv_b);

    printf("\nnAfter Swapping in main");
    printf("\n\tValue of 'A':%d ",vsv_a);
    printf("\n\tValue of 'B':%d ",vsv_b);

    return 0;
}

void vsv_Func_SwapNumbers(int vsv_a,int vsv_b){
    int vsv_temp;

    
    printf("\nBefore Swapping in vsv_Func_SwapNumbers");
    printf("\n\tValue of 'A':%d ",vsv_a);
    printf("\n\tValue of 'B':%d ",vsv_b);

    vsv_temp=vsv_a;
    vsv_a=vsv_b;
    vsv_b=vsv_temp;


}
/*

Enter value for 'A':2

Enter value for 'B':3

Before Swapping in vsv_Func_SwapNumbers
        Value of 'A':2
        Value of 'B':3
nAfter Swapping in main
        Value of 'A':2
        Value of 'B':3
*/
