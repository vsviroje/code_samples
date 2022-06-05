#include<stdio.h>
int main(void){

    int vsv_i;

    printf("\nIncrement Do-while Loop");
    vsv_i=1;
    do{
        printf("\t%d\n",vsv_i);
        vsv_i++;
    }while(vsv_i<=10);
  
    return(0);
}
/*

Increment Do-while Loop 1
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