#include<stdio.h>
#include<conio.h>

struct vsv_MyData{
    int vsv_i;
    float vsv_f;
    double vsv_d;
    char vsv_ch;

};

int main(void){
    struct vsv_MyData data;

    printf("\nEnter data.vsv_i:");
    scanf("%d",&data.vsv_i);
    
    printf("\nEnter data.vsv_f:");
    scanf("%f",&data.vsv_f);

    printf("\nEnter data.vsv_d:");
    scanf("%lf",&data.vsv_d);
    
    printf("\nEnter data.vsv_ch:");
    data.vsv_ch=getch();

    printf("\nData member of struct vsv_MyData:");
    printf("\nvsv_i=%d",data.vsv_i);
    printf("\nvsv_f=%f",data.vsv_f);
    printf("\nvsv_d=%lf",data.vsv_d);
    printf("\nvsv_c=%c",data.vsv_ch);

    return 0;
}
/*
~~Output~~
Enter data.vsv_i:2

Enter data.vsv_f:34.34

Enter data.vsv_d:3242.4534

Enter data.vsv_ch:
Data member of struct vsv_MyData:
vsv_i=2
vsv_f=34.340000
vsv_d=3242.453400
vsv_c=r
*/