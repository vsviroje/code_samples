#include<stdio.h>
int main(void){

    char vsv_Num;
    char* vsv_Ptr=NULL;
    vsv_Num='Y';

    printf("\nBefore vsv_ptr=&vsv_num");
    printf("\nValue of vsv_num=%c",vsv_Num);
    printf("\nAddress of vsv_num=%p",&vsv_Num);
    printf("\nValue at Address of vsv_num=%c",*(&vsv_Num));

    vsv_Ptr=&vsv_Num;
    
    printf("\n\nAfter vsv_ptr=&vsv_num");
    printf("\nValue of vsv_num=%c",vsv_Num);
    printf("\nAddress of vsv_num=%p",vsv_Ptr);
    printf("\nValue at Address of vsv_num=%c",*vsv_Ptr);

    return(0);
}
/*

Before vsv_ptr=&vsv_num
Value of vsv_num=Y
Address of vsv_num=000000FE8E79F990
Value at Address of vsv_num=Y

After vsv_ptr=&vsv_num
Value of vsv_num=Y
Address of vsv_num=000000FE8E79F990
Value at Address of vsv_num=Y
*/