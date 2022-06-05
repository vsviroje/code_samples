#include<stdio.h>
#define VSV_NUM_ELEMENTS 10

int main(void){

    int vsv_iArrayp[VSV_NUM_ELEMENTS];
    int vsv_i,vsv_num,vsv_j,vsv_count=0;

    printf("\nEnter Integer Element For array:");
    for(vsv_i=0;vsv_i<VSV_NUM_ELEMENTS;vsv_i++){
        
        scanf("%d",&vsv_num);
        
        if(vsv_num<0)
            vsv_num=-1*vsv_num;

        vsv_iArrayp[vsv_i]=vsv_num;
    }   

    printf("\nArray Elements");
    for(vsv_i=0;vsv_i<VSV_NUM_ELEMENTS;vsv_i++){
        printf("\n%d",vsv_iArrayp[vsv_i]);
    } 
    
    printf("\n\nPrime Number in Array:\n");

    for(vsv_i=0 ; vsv_i < VSV_NUM_ELEMENTS ; vsv_i++){
        vsv_count=0;    
        for(vsv_j=1 ; vsv_j <=vsv_iArrayp[vsv_i] ; vsv_j++){
            
            if((vsv_iArrayp[vsv_i]%vsv_j)==0)
                vsv_count++;
                //printf("\n%d-%d",vsv_iArrayp[vsv_i],vsv_j);
        
        }
        if(vsv_count == 2)
            printf("%d\n",vsv_iArrayp[vsv_i]);
    }


    return(0);
}
/*

Enter Integer Element For array:2
3
1
4
12

53
5
6
7
82

Array Elements
2
3
1
4
12
53
5
6
7
82

Prime Number in Array:
2
3
53
5
7

*/