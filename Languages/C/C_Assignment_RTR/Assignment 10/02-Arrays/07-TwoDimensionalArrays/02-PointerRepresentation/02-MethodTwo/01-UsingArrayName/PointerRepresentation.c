#include<stdio.h>
#include<stdlib.h>
#define vsv_NUM_ROWS 5
#define vsv_NUM_COLUMNS 3

int main(void){

    int vsv_iArray[vsv_NUM_ROWS][vsv_NUM_COLUMNS];
    int vsv_i,vsv_j;
    

    for(vsv_i=0;vsv_i<vsv_NUM_ROWS;vsv_i++){
        //printf("\n%p",(vsv_iArray+vsv_i));

        for(vsv_j=0;vsv_j<vsv_NUM_COLUMNS;vsv_j++){
            
            *(*(vsv_iArray+vsv_i) + vsv_j)=(vsv_i + 1)*(vsv_j + 1);
        }
        //printf("\n%d",**(vsv_iArray+vsv_i));

    }

    printf("\n2D array with value and address:");
    for(vsv_i=0;vsv_i<vsv_NUM_ROWS;vsv_i++){

        for(vsv_j=0;vsv_j<vsv_NUM_COLUMNS;vsv_j++)
        {
            printf("\n*(*(vsv_iArray+%d)+%d)=[%d]\t at Address :[%p]",vsv_i,vsv_j,*(*(vsv_iArray+vsv_i) + vsv_j),(*(vsv_iArray+vsv_i) + vsv_j));
        }
        printf("\n\n");
    }

    return 0;
}
/*

2D array with value and address:
*(*(vsv_iArray+0)+0)=[1]         at Address :[000000E2DECFF758]
*(*(vsv_iArray+0)+1)=[2]         at Address :[000000E2DECFF75C]
*(*(vsv_iArray+0)+2)=[3]         at Address :[000000E2DECFF760]


*(*(vsv_iArray+1)+0)=[2]         at Address :[000000E2DECFF764]
*(*(vsv_iArray+1)+1)=[4]         at Address :[000000E2DECFF768]
*(*(vsv_iArray+1)+2)=[6]         at Address :[000000E2DECFF76C]


*(*(vsv_iArray+2)+0)=[3]         at Address :[000000E2DECFF770]
*(*(vsv_iArray+2)+1)=[6]         at Address :[000000E2DECFF774]
*(*(vsv_iArray+2)+2)=[9]         at Address :[000000E2DECFF778]


*(*(vsv_iArray+3)+0)=[4]         at Address :[000000E2DECFF77C]
*(*(vsv_iArray+3)+1)=[8]         at Address :[000000E2DECFF780]
*(*(vsv_iArray+3)+2)=[12]        at Address :[000000E2DECFF784]


*(*(vsv_iArray+4)+0)=[5]         at Address :[000000E2DECFF788]
*(*(vsv_iArray+4)+1)=[10]        at Address :[000000E2DECFF78C]
*(*(vsv_iArray+4)+2)=[15]        at Address :[000000E2DECFF790]


*/