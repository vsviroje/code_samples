#include<stdio.h>
struct VSV_MyData{
    int vsv_i;
    float vsv_f;
    double vsv_d;
    char vsv_c;
}data;
int main(void){
    int vsv_iSize;
    int vsv_fSize;
    int vsv_dSize;
    int vsv_StructMyDataSize;

    data.vsv_i=201;
    data.vsv_f=432.234f;
    data.vsv_d=32.4534534;
    data.vsv_c='V';

    printf("\nData member of struct VSV_MyData:");
    printf("\n data.vsv_i=%d", data.vsv_i);
    printf("\n data.vsv_f=%f", data.vsv_f);
    printf("\n data.vsv_d=%lf", data.vsv_d);
    printf("\n data.vsv_c=%c\n\n", data.vsv_c);

    vsv_iSize=sizeof(data.vsv_i);
    vsv_fSize=sizeof(data.vsv_f);
    vsv_dSize=sizeof(data.vsv_d);
    vsv_StructMyDataSize=sizeof(struct VSV_MyData);

    printf("\nvsv_iSize=%d",vsv_iSize);
    printf("\nvsv_fSize=%d",vsv_fSize);
    printf("\nvsv_dSize=%d",vsv_dSize);
    printf("\nvsv_StructMyDataSize=%d",vsv_StructMyDataSize);

    return 0; 
}
/*
~~OUTPUT~~

Data member of struct VSV_MyData:
 data.vsv_i=201
 data.vsv_f=432.234009
 data.vsv_d=32.453453
 data.vsv_c=V


vsv_iSize=4
vsv_fSize=4
vsv_dSize=8
vsv_StructMyDataSize=24
*/