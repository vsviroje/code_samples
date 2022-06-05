#include<stdio.h>
int main(void){

    int vsv_i;
        
    printf("\nDecrement Do-while Loop");
    vsv_i=10;
    do{
        printf("\t%d\n",vsv_i);
        vsv_i--;
    }while(vsv_i>=1);

    return(0);
}
/*

Decrement Do-while Loop 10
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