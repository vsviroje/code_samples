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
     printf("\nEven Number:");
    for(vsv_i=0;vsv_i<VSV_NUM_ELEMENTS;vsv_i++){
        if((vsv_iArrayp[vsv_i]%2)==0)
            printf("\n%d",vsv_iArrayp[vsv_i]);
    }
    
     printf("\nOdd Number");
    for(vsv_i=0;vsv_i<VSV_NUM_ELEMENTS;vsv_i++){
        if ((vsv_iArrayp[vsv_i]%2)!=0)
            printf("\n%d",vsv_iArrayp[vsv_i]);
    }

    return(0);
}
/*

Enter Integer Element For array:2
3
4
5
6
7
8
9
1
2

Even Number:
2
4
6
8
2
Odd Number
3
5
7
9
1
*/