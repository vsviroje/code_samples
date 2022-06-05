#include<stdio.h>
int main(void){
    int vsv_ifnAddInteger(int,int);
    int vsv_ifnSubInteger(int,int);
    float vsv_ffnAddFloat(float,float);

    typedef int (*vsv_ifnpAddInt)(int,int);
    vsv_ifnpAddInt fnpAddTwoInt=NULL;
    vsv_ifnpAddInt fnp=NULL;

    typedef float(*vsv_ffnpAddFloat)(float,float);
    vsv_ffnpAddFloat fnpAddTwoFloat=NULL;

    int iAns=0;
    float fAns=0.0f;

    fnpAddTwoInt=vsv_ifnAddInteger;
    iAns=fnpAddTwoInt(7,3);
    printf("\nAddition of int iAns=%d",iAns);

    fnp=vsv_ifnSubInteger;
    iAns=fnp(5,4);
    printf("\nSubtraction of int iAns=%d",iAns);

    fnpAddTwoFloat=vsv_ffnAddFloat;
    fAns=fnpAddTwoFloat(7.5f,1.5f);
    printf("\nAddition of float fAns=%f",fAns);

    return 0;
}

int vsv_ifnAddInteger(int vsv_a,int vsv_b){
    return (vsv_a+vsv_b);
}
int vsv_ifnSubInteger(int vsv_a,int vsv_b){
    return (vsv_a-vsv_b);
}
float vsv_ffnAddFloat(float vsv_a,float vsv_b){
    return (vsv_a+vsv_b);
}
/*

Addition of int iAns=10
Subtraction of int iAns=1
Addition of float fAns=9.000000
*/