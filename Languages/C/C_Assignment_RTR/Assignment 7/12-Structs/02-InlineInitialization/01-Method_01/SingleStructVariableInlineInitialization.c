#include<stdio.h>

struct vsv_MyData{
    int vsv_i;
    float vsv_f;
    double vsv_d;
    char vsv_c;
}data={30,4.5f,143.53,'E'};

int main(void){
    printf("\nData member of struct vsv_MyData:");
    printf("\nvsv_i=%d",data.vsv_i);
    printf("\nvsv_f=%f",data.vsv_f);
    printf("\nvsv_d=%lf",data.vsv_d);
    printf("\nvsv_c=%c",data.vsv_c);

    return 0;
}
/*
~~Output~~

Data member of struct vsv_MyData:
vsv_i=30
vsv_f=4.500000
vsv_d=143.530000
vsv_c=E
*/