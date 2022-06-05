#include<stdio.h>
#include<stdlib.h>
#define vsv_NUM_ROWS 5
#define vsv_NUM_COLUMNS 3

int main(void){

    int vsv_iArray[vsv_NUM_ROWS][vsv_NUM_COLUMNS];
    int vsv_i,vsv_j;

    for(vsv_i=0;vsv_i<vsv_NUM_ROWS;vsv_i++){

        for(vsv_j=0;vsv_j<vsv_NUM_COLUMNS;vsv_j++){
            *(vsv_iArray[vsv_i]+vsv_j)=(vsv_i+1)*(vsv_j+1);
        }

    }

    printf("\n2D array with value and address:");
    for(vsv_i=0;vsv_i<vsv_NUM_ROWS;vsv_i++){

        for(vsv_j=0;vsv_j<vsv_NUM_COLUMNS;vsv_j++)
        {
            printf("\n*(vsv_iArray[%d]+%d)=[%d]\t at Address :[%p]",vsv_i,vsv_j,*(vsv_iArray[vsv_i]+vsv_j),(vsv_iArray[vsv_i]+vsv_j));
        }
        printf("\n\n");
    }

    return 0;
}
/*

2D array with value and address:
*(vsv_iArray[0]+0)=[1]   at Address :[000000A0E616FD28]
*(vsv_iArray[0]+1)=[2]   at Address :[000000A0E616FD2C]
*(vsv_iArray[0]+2)=[3]   at Address :[000000A0E616FD30]


*(vsv_iArray[1]+0)=[2]   at Address :[000000A0E616FD34]
*(vsv_iArray[1]+1)=[4]   at Address :[000000A0E616FD38]
*(vsv_iArray[1]+2)=[6]   at Address :[000000A0E616FD3C]


*(vsv_iArray[2]+0)=[3]   at Address :[000000A0E616FD40]
*(vsv_iArray[2]+1)=[6]   at Address :[000000A0E616FD44]
*(vsv_iArray[2]+2)=[9]   at Address :[000000A0E616FD48]


*(vsv_iArray[3]+0)=[4]   at Address :[000000A0E616FD4C]
*(vsv_iArray[3]+1)=[8]   at Address :[000000A0E616FD50]
*(vsv_iArray[3]+2)=[12]  at Address :[000000A0E616FD54]


*(vsv_iArray[4]+0)=[5]   at Address :[000000A0E616FD58]
*(vsv_iArray[4]+1)=[10]  at Address :[000000A0E616FD5C]
*(vsv_iArray[4]+2)=[15]  at Address :[000000A0E616FD60]


*/