#include<stdio.h>
int main(void){

    int vsv_a,vsv_b,vsv_p;

    vsv_a=3;
    vsv_b=52;
    vsv_p=70;

    if(vsv_a<vsv_b){
        printf("\nvsv_a < vsv_b");
    }else{
        printf("\nvsv_a > vsv_b");
    }
    
    if(vsv_b!=vsv_p){
        printf("\nvsv_b != vsv_p");
    }else{
        printf("\nvsv_b == vsv_p");
    }

    return (0);
}
/*

vsv_a < vsv_b
vsv_b != vsv_p
*/