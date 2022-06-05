#include<stdio.h>

union vsv_MyUnion{
    int vsv_i;
    float vsv_f;
    double vsv_d;
    char vsv_ch;
};

int main(void){
    union vsv_MyUnion vsv_u1,vsv_u2;
    vsv_u1.vsv_i=45;
    vsv_u1.vsv_f=9.34f;
    vsv_u1.vsv_d=34.2312543;
    vsv_u1.vsv_ch='v';
    
    printf("\nvsv_u1 member and value:");
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

    vsv_u2.vsv_i=25;
    vsv_u2.vsv_f=19.34f;
    vsv_u2.vsv_d=4.2312543;
    vsv_u2.vsv_ch='t';

    
    printf("\nvsv_u2 member and value:");
    printf("\n\tvsv_u2.vsv_i=%d",vsv_u2.vsv_i);
    printf("\n\tvsv_u2.vsv_f=%f",vsv_u2.vsv_f);
    printf("\n\tvsv_u2.vsv_d=%lf",vsv_u2.vsv_d);
    printf("\n\tvsv_u2.vsv_ch=%c",vsv_u2.vsv_ch);

    printf("\nvsv_u2 member and address:");
    printf("\n\tvsv_u2.vsv_i=%p",&vsv_u2.vsv_i);
    printf("\n\tvsv_u2.vsv_f=%p",&vsv_u2.vsv_f);
    printf("\n\tvsv_u2.vsv_d=%p",&vsv_u2.vsv_d);
    printf("\n\tvsv_u2.vsv_ch=%p",&vsv_u2.vsv_ch);

    printf("\nvsv_u2 address:%p",&vsv_u2);

    return 0;
}
/*

vsv_u1 member and value:
        vsv_u1.vsv_i=-1112815754
        vsv_u1.vsv_f=-0.083877
        vsv_u1.vsv_d=34.231254
        vsv_u1.vsv_ch=v
vsv_u1 member and address:
        vsv_u1.vsv_i=000000DD2DCFFB60
        vsv_u1.vsv_f=000000DD2DCFFB60
        vsv_u1.vsv_d=000000DD2DCFFB60
        vsv_u1.vsv_ch=000000DD2DCFFB60
vsv_u1 address:000000DD2DCFFB60
vsv_u2 member and value:
        vsv_u2.vsv_i=-312591244
        vsv_u2.vsv_f=-4298672220251718492889284608.000000
        vsv_u2.vsv_d=4.231254
        vsv_u2.vsv_ch=t
vsv_u2 member and address:
        vsv_u2.vsv_i=000000DD2DCFFB68
        vsv_u2.vsv_f=000000DD2DCFFB68
        vsv_u2.vsv_d=000000DD2DCFFB68
        vsv_u2.vsv_ch=000000DD2DCFFB68
vsv_u2 address:000000DD2DCFFB68
*/