#include<stdio.h>
int main(void){

    double vsv_Num;
    double* vsv_Ptr=NULL;
    vsv_Num=21.24567575674;

    printf("\nBefore vsv_ptr=&vsv_num");
    printf("\nValue of vsv_num=%lf",vsv_Num);
    printf("\nAddress of vsv_num=%p",&vsv_Num);
    printf("\nValue at Address of vsv_num=%lf",*(&vsv_Num));

    vsv_Ptr=&vsv_Num;
    
    printf("\n\nAfter vsv_ptr=&vsv_num");
    printf("\nValue of vsv_num=%lf",vsv_Num);
    printf("\nAddress of vsv_num=%p",vsv_Ptr);
    printf("\nValue at Address of vsv_num=%lf",*vsv_Ptr);

    return(0);
}
/*

Before vsv_ptr=&vsv_num
Value of vsv_num=21.245676
Address of vsv_num=000000205B7FF710
Value at Address of vsv_num=21.245676

After vsv_ptr=&vsv_num
Value of vsv_num=21.245676
Address of vsv_num=000000205B7FF710
Value at Address of vsv_num=21.245676
*/