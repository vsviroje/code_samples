#include<stdio.h>
int main(void){

    int vsv_i;

    printf("\nIncrement While Loop");
    vsv_i=1;
    while(vsv_i<=10){
        printf("\t%d\n",vsv_i);
        vsv_i++;
    }

    return(0);
}
/*

Increment While Loop    1
        2
        3
        4
        5
        6
        7
        8
        9
        10

*/