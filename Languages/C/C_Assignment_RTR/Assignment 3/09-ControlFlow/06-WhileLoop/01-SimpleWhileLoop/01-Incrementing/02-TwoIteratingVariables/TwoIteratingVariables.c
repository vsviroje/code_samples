#include<stdio.h>
int main(void){

    int vsv_i,vsv_j;

    printf("\nIncrement While Loop\n");
    vsv_i=1;
    vsv_j=10;

    while(vsv_i<=10,vsv_j<=100){
        printf("\t%d\t%d\n",vsv_i,vsv_j);
        vsv_i++;
        vsv_j+=10;
    }

      return(0);
}
/*

Increment While Loop
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