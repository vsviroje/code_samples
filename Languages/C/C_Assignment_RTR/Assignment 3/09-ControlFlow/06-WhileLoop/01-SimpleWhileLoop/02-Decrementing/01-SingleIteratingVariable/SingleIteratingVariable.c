#include<stdio.h>
int main(void){

    int vsv_i;

    printf("\nDecrement While Loop");
    vsv_i=10;
    while(vsv_i>=1){
        printf("\t%d\n",vsv_i);
        vsv_i--;
    }

    return(0);
}
/*

Decrement While Loop    10
        9
        8
        7
        6
        5
        4
        3
        2
        1

*/