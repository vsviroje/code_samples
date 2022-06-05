#include<stdio.h>
int main(void){

    int vsv_Num;
    int *vsv_Ptr=NULL;
    vsv_Num=120;

    printf("\nBefore vsv_ptr=&vsv_num");
    printf("\nValue of vsv_num=%d",vsv_Num);
    printf("\nAddress of vsv_num=%p",&vsv_Num);
    printf("\nValue at Address of vsv_num=%d",*(&vsv_Num));

    vsv_Ptr=&vsv_Num;
    
    printf("\n\nAfter vsv_ptr=&vsv_num");
    printf("\nValue of vsv_num=%d",vsv_Num);
    printf("\nAddress of vsv_num=%p",vsv_Ptr);
    printf("\nValue at Address of vsv_num=%d",*vsv_Ptr);

    return(0);
}
/*

Before vsv_ptr=&vsv_num
Value of vsv_num=120
Address of vsv_num=0000007C00AFFD30
Value at Address of vsv_num=120

After vsv_ptr=&vsv_num
Value of vsv_num=120
Address of vsv_num=0000007C00AFFD30
Value at Address of vsv_num=120
*/