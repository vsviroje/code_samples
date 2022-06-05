#include<stdio.h>
#include<stdlib.h>
#define vsv_NUM_ROWS 5
#define vsv_NUM_COLUMNS 3

int main(void){

    int vsv_iArray[vsv_NUM_ROWS][vsv_NUM_COLUMNS];
    int vsv_i,vsv_j;
    int *vsv_piArrayRow=NULL;

    for(vsv_i=0;vsv_i<vsv_NUM_ROWS;vsv_i++){
        
        vsv_piArrayRow=vsv_iArray[vsv_i];

        for(vsv_j=0;vsv_j<vsv_NUM_COLUMNS;vsv_j++){
            *(vsv_piArrayRow + vsv_j)=(vsv_i + 1)*(vsv_j + 1);
        }

    }

    printf("\n2D array with value and address:");
    for(vsv_i=0;vsv_i<vsv_NUM_ROWS;vsv_i++){
        vsv_piArrayRow=vsv_iArray[vsv_i];
        for(vsv_j=0;vsv_j<vsv_NUM_COLUMNS;vsv_j++)
        {
            printf("\n*(vsv_piArrayRow+%d)=[%d]\t at Address :[%p]",vsv_j,*(vsv_piArrayRow + vsv_j),(vsv_piArrayRow + vsv_j));
        }
        printf("\n\n");
    }

    return 0;
}
/*

2D array with value and address:
*(vsv_piArrayRow+0)=[1]  at Address :[000000159B6FF8A0]
*(vsv_piArrayRow+1)=[2]  at Address :[000000159B6FF8A4]
*(vsv_piArrayRow+2)=[3]  at Address :[000000159B6FF8A8]


*(vsv_piArrayRow+0)=[2]  at Address :[000000159B6FF8AC]
*(vsv_piArrayRow+1)=[4]  at Address :[000000159B6FF8B0]
*(vsv_piArrayRow+2)=[6]  at Address :[000000159B6FF8B4]


*(vsv_piArrayRow+0)=[3]  at Address :[000000159B6FF8B8]
*(vsv_piArrayRow+1)=[6]  at Address :[000000159B6FF8BC]
*(vsv_piArrayRow+2)=[9]  at Address :[000000159B6FF8C0]


*(vsv_piArrayRow+0)=[4]  at Address :[000000159B6FF8C4]
*(vsv_piArrayRow+1)=[8]  at Address :[000000159B6FF8C8]
*(vsv_piArrayRow+2)=[12]         at Address :[000000159B6FF8CC]


*(vsv_piArrayRow+0)=[5]  at Address :[000000159B6FF8D0]
*(vsv_piArrayRow+1)=[10]         at Address :[000000159B6FF8D4]
*(vsv_piArrayRow+2)=[15]         at Address :[000000159B6FF8D8]


*/