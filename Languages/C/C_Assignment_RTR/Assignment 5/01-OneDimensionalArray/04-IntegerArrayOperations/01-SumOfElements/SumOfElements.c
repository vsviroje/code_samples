#include<stdio.h>
#define VSV_NUM_ELEMENTS 10

int main(void){

    int vsv_iArrayp[VSV_NUM_ELEMENTS];
    int vsv_i,vsv_num,vsv_sum=0;

    printf("\nEnter Integer Element For array:");
    for(vsv_i=0;vsv_i<VSV_NUM_ELEMENTS;vsv_i++){
        scanf("%d",&vsv_num);
        vsv_iArrayp[vsv_i]=vsv_num;
    }   

    for(vsv_i=0;vsv_i<VSV_NUM_ELEMENTS;vsv_i++){
        vsv_sum+=vsv_iArrayp[vsv_i];
    }

    printf("\nSum is :[%d]",vsv_sum);
    return(0);
}
/*

Enter Integer Element For array:1
2
3
4
5
6
7
8
9
10

Sum is :[55]
*/