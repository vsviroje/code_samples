#include<stdio.h>
int main(void){

    float vsv_Num;
    float *vsv_Ptr=NULL;
    vsv_Num=1.20f;

    printf("\nBefore vsv_ptr=&vsv_num");
    printf("\nValue of vsv_num=%f",vsv_Num);
    printf("\nAddress of vsv_num=%p",&vsv_Num);
    printf("\nValue at Address of vsv_num=%f",*(&vsv_Num));

    vsv_Ptr=&vsv_Num;
    
    printf("\n\nAfter vsv_ptr=&vsv_num");
    printf("\nValue of vsv_num=%f",vsv_Num);
    printf("\nAddress of vsv_num=%p",vsv_Ptr);
    printf("\nValue at Address of vsv_num=%f",*vsv_Ptr);

    return(0);
}
/*

Before vsv_ptr=&vsv_num
Value of vsv_num=1.200000
Address of vsv_num=000000643150FBA0
Value at Address of vsv_num=1.200000

After vsv_ptr=&vsv_num
Value of vsv_num=1.200000
Address of vsv_num=000000643150FBA0
Value at Address of vsv_num=1.200000
*/