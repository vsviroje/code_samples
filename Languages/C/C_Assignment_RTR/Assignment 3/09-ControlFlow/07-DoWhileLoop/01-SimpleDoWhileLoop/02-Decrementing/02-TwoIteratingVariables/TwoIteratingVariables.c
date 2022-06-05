#include<stdio.h>
int main(void){

    int vsv_i,vsv_j;

    printf("\nDecrement Do-while Loop\n");
    vsv_i=10;
    vsv_j=100;

    do{
        printf("\t%d\t%d\n",vsv_i,vsv_j);
        vsv_i--;
        vsv_j-=10;
    }while(vsv_i>=1,vsv_j>=10);


    return(0);
}
/*

Decrement Do-while Loop
        10      100
        9       90
        8       80
        7       70
        6       60
        5       50
        4       40
        3       30
        2       20
        1       10

*/