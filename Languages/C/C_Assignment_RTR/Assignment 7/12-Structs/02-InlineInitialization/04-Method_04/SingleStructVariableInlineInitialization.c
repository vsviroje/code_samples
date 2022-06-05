#include<stdio.h>

struct vsv_MyData{
    int vsv_i;
    float vsv_f;
    double vsv_d;
    char vsv_c;
};

int main(void){
    struct vsv_MyData data1={70,2.5f,13.53,'Q'};

    printf("\nData1 member of struct vsv_MyData:");
    printf("\nvsv_i=%d",data1.vsv_i);
    printf("\nvsv_f=%f",data1.vsv_f);
    printf("\nvsv_d=%lf",data1.vsv_d);
    printf("\nvsv_c=%c",data1.vsv_c);

    struct vsv_MyData data2={20,52.5f,63.53,'U'};

    printf("\nData2 member of struct vsv_MyData:");
    printf("\nvsv_i=%d",data2.vsv_i);
    printf("\nvsv_f=%f",data2.vsv_f);
    printf("\nvsv_d=%lf",data2.vsv_d);
    printf("\nvsv_c=%c",data2.vsv_c);

    struct vsv_MyData data3={60,32.5f,89.53,'B'};

    printf("\nData3 member of struct vsv_MyData:");
    printf("\nvsv_i=%d",data3.vsv_i);
    printf("\nvsv_f=%f",data3.vsv_f);
    printf("\nvsv_d=%lf",data3.vsv_d);
    printf("\nvsv_c=%c",data3.vsv_c);

    struct vsv_MyData data4={74,21.5f,73.53,'R'};

    printf("\nData4 member of struct vsv_MyData:");
    printf("\nvsv_i=%d",data4.vsv_i);
    printf("\nvsv_f=%f",data4.vsv_f);
    printf("\nvsv_d=%lf",data4.vsv_d);
    printf("\nvsv_c=%c",data4.vsv_c);

    return 0;
}
/*
~~Output~~
Data1 member of struct vsv_MyData:
vsv_i=70
vsv_f=2.500000
vsv_d=13.530000
vsv_c=Q
Data2 member of struct vsv_MyData:
vsv_i=20
vsv_f=52.500000
vsv_d=63.530000
vsv_c=U
Data3 member of struct vsv_MyData:
vsv_i=60
vsv_f=32.500000
vsv_d=89.530000
vsv_c=B
Data4 member of struct vsv_MyData:
vsv_i=74
vsv_f=21.500000
vsv_d=73.530000
vsv_c=R

*/