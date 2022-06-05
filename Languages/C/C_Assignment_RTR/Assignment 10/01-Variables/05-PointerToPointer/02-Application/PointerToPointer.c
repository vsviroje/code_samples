#include<stdio.h>
int main(void){


    int vsv_iNum;
    int *vsv_ptr=NULL;
    int **vsv_pptr=NULL;

    vsv_iNum=20;

    printf("\nBefore vsv_ptr                =&vsv_iNum");
    printf("\nValue of vsv_iNum             =%d",vsv_iNum);
    printf("\nAddress of vsv_iNum           =%p",&vsv_iNum);
    printf("\nValue at Address of vsv_iNum  =%d",*(&vsv_iNum));

    vsv_ptr=&vsv_iNum;

    printf("\n\nAfter vsv_ptr               =&vsv_iNum");
    printf("\nValue of vsv_iNum             =%d",vsv_iNum);
    printf("\nAddress of vsv_iNum           =%p",vsv_ptr);
    printf("\nValue at Address of vsv_iNum  =%d",*vsv_ptr);

    vsv_pptr=&vsv_ptr;
    printf("\n\nAfter vsv_pptr              =&vsv_ptr");
    printf("\nValue of vsv_iNum             =%d",vsv_iNum);
    printf("\nAddress of vsv_iNum           =%p",vsv_ptr);
    printf("\nAddress of vsv_ptr            =%p",vsv_pptr);
    printf("\nValue at Address of vsv_iNum  =%d",**vsv_pptr);
    printf("\nValue at Address of vsv_ptr  =%p",*vsv_pptr);

    return 0;
}
/*

Before vsv_ptr                =&vsv_iNum
Value of vsv_iNum             =20
Address of vsv_iNum           =0000009672CFF9A0
Value at Address of vsv_iNum  =20

After vsv_ptr               =&vsv_iNum
Value of vsv_iNum             =20
Address of vsv_iNum           =0000009672CFF9A0
Value at Address of vsv_iNum  =20

After vsv_pptr              =&vsv_ptr
Value of vsv_iNum             =20
Address of vsv_iNum           =0000009672CFF9A0
Address of vsv_ptr            =0000009672CFF9A8
Value at Address of vsv_iNum  =20
Value at Address of vsv_ptr  =0000009672CFF9A0
*/