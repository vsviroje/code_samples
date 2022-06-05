#include<stdio.h>

struct vsv_MyData{
    int vsv_i;
    float vsv_f;
    double vsv_d;
    char vsv_c;
};
struct vsv_MyData data={70,2.5f,13.53,'Q'};

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
vsv_i=70
vsv_f=2.500000
vsv_d=13.530000
vsv_c=Q
*/