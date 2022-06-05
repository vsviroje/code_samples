#include<stdio.h>
int main(void){

    int vsv_i,vsv_j;

    printf("\nIncrement For Loop\n");

    for(vsv_i=1,vsv_j=10;vsv_i<=10,vsv_j<=100;vsv_i++,vsv_j+=10){
        printf("\t%d\t%d\n",vsv_i,vsv_j);
    }

    return(0);
}

/*

Increment For Loop
        1       10
        2       20
        3       30
        4       40
        5       50
        6       60
        7       70
        8       80
        9       90
        10      100

*/