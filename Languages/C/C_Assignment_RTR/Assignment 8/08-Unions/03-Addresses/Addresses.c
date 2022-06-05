#include<stdio.h>
struct vsv_MyStruct{
    int vsv_i;
    float vsv_f;
    double vsv_d;
    char vsv_ch;
};
union vsv_MyUnion{
    int vsv_i;
    float vsv_f;
    double vsv_d;
    char vsv_ch;
};

int main(void){
    struct vsv_MyStruct vsv_s;
    union vsv_MyUnion vsv_u1;

    vsv_s.vsv_i=20;
    vsv_s.vsv_f=320.43f;
    vsv_s.vsv_d=98.323242;
    vsv_s.vsv_ch='R';

    printf("\nData member and its value:");
    printf("\n\tvsv_s.i=%d",vsv_s.vsv_i);
    printf("\n\tvsv_s.f=%f",vsv_s.vsv_f);
    printf("\n\tvsv_s.d=%lf",vsv_s.vsv_d);
    printf("\n\tvsv_s.ch=%c",vsv_s.vsv_ch);

    printf("\n\nData member and its Address:");
    printf("\n\tvsv_s.i=%p",&vsv_s.vsv_i);
    printf("\n\tvsv_s.f=%p",&vsv_s.vsv_f);
    printf("\n\tvsv_s.d=%p",&vsv_s.vsv_d);
    printf("\n\tvsv_s.ch=%p",&vsv_s.vsv_ch);
    
    printf("\nvsv_s address:%p",&vsv_s);

    vsv_u1.vsv_i=45;
    vsv_u1.vsv_f=9.34f;
    vsv_u1.vsv_d=34.2312543;
    vsv_u1.vsv_ch='v';
    
    printf("\n\nvsv_u1 member and value:");
    printf("\n\tvsv_u1.vsv_i=%d",vsv_u1.vsv_i);
    printf("\n\tvsv_u1.vsv_f=%f",vsv_u1.vsv_f);
    printf("\n\tvsv_u1.vsv_d=%lf",vsv_u1.vsv_d);
    printf("\n\tvsv_u1.vsv_ch=%c",vsv_u1.vsv_ch);

    printf("\nvsv_u1 member and address:");
    printf("\n\tvsv_u1.vsv_i=%p",&vsv_u1.vsv_i);
    printf("\n\tvsv_u1.vsv_f=%p",&vsv_u1.vsv_f);
    printf("\n\tvsv_u1.vsv_d=%p",&vsv_u1.vsv_d);
    printf("\n\tvsv_u1.vsv_ch=%p",&vsv_u1.vsv_ch);

    printf("\nvsv_u1 address:%p",&vsv_u1);

    return 0;
}
/*

Data member and its value:
        vsv_s.i=20
        vsv_s.f=320.429993
        vsv_s.d=98.323242
        vsv_s.ch=R

Data member and its Address:
        vsv_s.i=0000000D8B4FFC28
        vsv_s.f=0000000D8B4FFC2C
        vsv_s.d=0000000D8B4FFC30
        vsv_s.ch=0000000D8B4FFC38
vsv_s address:0000000D8B4FFC28

vsv_u1 member and value:
        vsv_u1.vsv_i=-1112815754
        vsv_u1.vsv_f=-0.083877
        vsv_u1.vsv_d=34.231254
        vsv_u1.vsv_ch=v
vsv_u1 member and address:
        vsv_u1.vsv_i=0000000D8B4FFC20
        vsv_u1.vsv_f=0000000D8B4FFC20
        vsv_u1.vsv_d=0000000D8B4FFC20
        vsv_u1.vsv_ch=0000000D8B4FFC20
vsv_u1 address:0000000D8B4FFC20
*/
