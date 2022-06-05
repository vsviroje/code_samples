#include<stdio.h>
struct vsv_MyData{
    int vsv_i;
    float vsv_f;
    double vsv_d;
    char vsv_ch;
};
int main(void){
    struct vsv_MyData data;

    data.vsv_i=20;
    data.vsv_f=320.43f;
    data.vsv_d=98.323242;
    data.vsv_ch='R';

    printf("\nData member and its value:");
    printf("\ni=%d",data.vsv_i);
    printf("\nf=%f",data.vsv_f);
    printf("\nd=%lf",data.vsv_d);
    printf("\nch=%c",data.vsv_ch);

    printf("\n\nData member and its Address:");
    printf("\ni=%p",&data.vsv_i);
    printf("\nf=%p",&data.vsv_f);
    printf("\nd=%p",&data.vsv_d);
    printf("\nch=%p",&data.vsv_ch);


    printf("\n\nData structs Address:");
    printf("\ndata=%p",&data);

    return 0;
}
/*

Data member and its value:
i=20
f=320.429993
d=98.323242
ch=R

Data member and its Address:
i=000000A0CE8FFC30
f=000000A0CE8FFC34
d=000000A0CE8FFC38
ch=000000A0CE8FFC40

Data structs Address:
data=000000A0CE8FFC30
*/