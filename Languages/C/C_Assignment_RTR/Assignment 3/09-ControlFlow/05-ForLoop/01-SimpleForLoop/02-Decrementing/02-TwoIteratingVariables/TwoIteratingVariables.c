#include<stdio.h>
int main(void){

    int vsv_i,vsv_j;

    printf("\nDecrement For Loop\n");   
    for(vsv_i=10,vsv_j=100;vsv_i>=1,vsv_j>=10;vsv_i--,vsv_j-=10){
        printf("\t%d\t%d\n",vsv_i,vsv_j);
    }
    return(0);
}
/*

Decrement For Loop
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