#include<stdio.h>
int main(void){

    int vsv_a;

    vsv_a=8;
    if (vsv_a){
        printf("\nvsv_a has value");
    }

    vsv_a=-8;
    if (vsv_a){
        printf("\nvsv_a has negative value");
    }

    vsv_a=0;
    if (vsv_a){
        printf("\nvsv_a has zero value");
    }


    return (0);
}
/*

vsv_a has value
vsv_a has negative value
*/