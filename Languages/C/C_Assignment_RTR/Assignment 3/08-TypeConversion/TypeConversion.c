#include<stdio.h>
int main(void){

    int vsv_i,vsv_j,vsv_a,vsv_ires,vsv_iexplicit;
    char vsv_ch1,vsv_ch2;
    float vsv_f,vsv_fres,vsv_fexplicit;

    //INTERCONVERSION AND IMPLICIT TYPE-CASTING BETWEEN 'char' AND 'int' TYPES.
    vsv_i=20;
    vsv_ch1=vsv_i;

    printf("\nvsv_i:[%d]",vsv_i);
    printf("\nvsv_ch1:[%c]",vsv_ch1);

    vsv_ch2='W';
    vsv_j=vsv_ch2;

    printf("\nvsv_j:[%d]",vsv_j);
    printf("\nvsv_ch2:[%c]",vsv_ch2);

    //IMPLICIT CONVERSION OF 'int' TO 'float'..
    vsv_a=10;
    vsv_f=6.9f;

    vsv_fres=vsv_a+vsv_f;
    printf("\nvsv_fres=vsv_a+vsv_f So vsv_fres:[%f]",vsv_fres);

    vsv_ires=vsv_a+vsv_f;
    printf("\nvsv_ires=vsv_a+vsv_f So vsv_ires:[%d]",vsv_ires);

    //EXPLICIT TYPE-CASTING USING CAST OPERATOR.
    vsv_fexplicit=32.23333f;
    vsv_iexplicit=(int)vsv_fexplicit;

    printf("\nvsv_iexplicit=(int)vsv_fexplicit So vsv_iexplicit:[%d]",vsv_iexplicit);    

    return(0);
}
/*

vsv_i:[20]
vsv_ch1:[]
vsv_j:[87]
vsv_ch2:[W]
vsv_fres=vsv_a+vsv_f So vsv_fres:[16.900000]
vsv_ires=vsv_a+vsv_f So vsv_ires:[16]
vsv_iexplicit=(int)vsv_fexplicit So vsv_iexplicit:[32]
*/