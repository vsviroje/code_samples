#include<stdio.h>
int main(void){

    int ifnSumOfTwoInteger(int,int);

    int vsv_num1,vsv_num2,vsv_num3;

    vsv_num1=75;
    vsv_num2=25;
    
    vsv_num3=ifnSumOfTwoInteger(vsv_num1,vsv_num2);
    printf("\nvsv_num3=%d",vsv_num3);

    printf("\nFunc call in printf and result catched in printf : [%d]",ifnSumOfTwoInteger(vsv_num1,vsv_num2));
    printf("\nFunc call in printf and result catched in printf : [%d]",ifnSumOfTwoInteger(175,125));

    //If return value is not catch it does not matter(dont stop/give error in program)
    ifnSumOfTwoInteger(vsv_num1,vsv_num2);

    return (0);
}
int ifnSumOfTwoInteger(int vsv_num1,int vsv_num2){
    int vsv_num3;
    vsv_num3=vsv_num1+vsv_num2;
    return vsv_num3;
}
/*

vsv_num3=100
Func call in printf and result catched in printf : [100]
Func call in printf and result catched in printf : [300]
*/