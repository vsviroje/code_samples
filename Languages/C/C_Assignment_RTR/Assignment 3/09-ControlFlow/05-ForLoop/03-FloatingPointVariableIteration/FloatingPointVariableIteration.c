#include<stdio.h>
int main(void){

    float vsv_f;
    float vsv_fnum=42.34f;

    printf("\nFor Loop");
    for(vsv_f=vsv_fnum ; vsv_f<=(vsv_fnum*10.0f) ; vsv_f+=vsv_fnum){
        printf("\t%f\n",vsv_f);     
    }


    return (0);
}
/*

For Loop        42.340000
        84.680000
        127.020004
        169.360001
        211.699997
        254.039993
        296.380005
        338.720001
        381.059998
        423.399994

*/