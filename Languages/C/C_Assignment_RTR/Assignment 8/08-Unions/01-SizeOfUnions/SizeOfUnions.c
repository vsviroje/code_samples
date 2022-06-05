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
    union vsv_MyUnion vsv_u;

    printf("\nSizeOf vsv_MyStruct %zu",sizeof(vsv_s));
    printf("\nSizeOf vsv_MyUnion %zu",sizeof(vsv_u));

    return 0;
}
/*

SizeOf vsv_MyStruct 24
SizeOf vsv_MyUnion 8
*/