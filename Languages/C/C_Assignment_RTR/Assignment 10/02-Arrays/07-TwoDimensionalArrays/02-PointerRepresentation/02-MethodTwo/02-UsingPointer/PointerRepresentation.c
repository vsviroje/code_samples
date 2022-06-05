#include<stdio.h>
#include<stdlib.h>
#define vsv_NUM_ROWS 5
#define vsv_NUM_COLUMNS 3

int main(void){

    int **vsv_ppiArray=NULL;
    int vsv_i,vsv_j;
    
    vsv_ppiArray=(int**)malloc(vsv_NUM_ROWS*sizeof(int*));

    if (vsv_ppiArray==NULL){
        printf("\nFailed allocate memory for 2d array");
        exit(0);
    }

    for(vsv_i=0;vsv_i<vsv_NUM_ROWS;vsv_i++){

        vsv_ppiArray[vsv_i]=(int*)malloc(vsv_NUM_COLUMNS*sizeof(int));
        if(vsv_ppiArray[vsv_i]==NULL){
            printf("\nFailed allocate memory for vsv_ppiArray[%d] array",vsv_i);
            exit(0);
        }

    }

    for(vsv_i=0;vsv_i<vsv_NUM_ROWS;vsv_i++){

        for(vsv_j=0;vsv_j<vsv_NUM_COLUMNS;vsv_j++){
            
            *(*(vsv_ppiArray+vsv_i) + vsv_j)=(vsv_i + 1)*(vsv_j + 1);
        }

    }

    printf("\n2D array with value and address:");
    for(vsv_i=0;vsv_i<vsv_NUM_ROWS;vsv_i++){

        for(vsv_j=0;vsv_j<vsv_NUM_COLUMNS;vsv_j++)
        {
            printf("\n*(*(vsv_ppiArray+%d)+%d)=[%d]\t at Address :[%p]",vsv_i,vsv_j,*(*(vsv_ppiArray+vsv_i) + vsv_j),(*(vsv_ppiArray+vsv_i) + vsv_j));
        }
        printf("\n\n");
    }

    for(vsv_i=vsv_NUM_ROWS-1;vsv_i>=0;vsv_i--){

        if(*(vsv_ppiArray+vsv_i)){
            free(*(vsv_ppiArray+vsv_i));
            *(vsv_ppiArray+vsv_i)=NULL;
            printf("\nMemory Deallocation succeful at `%dD` of 2D array",vsv_i);
        }
    }

    if(vsv_ppiArray){
        free(vsv_ppiArray);
        vsv_ppiArray=NULL;
        printf("\nMemory Deallocation succeful 2D array");

    }

    return 0;
}
/*

2D array with value and address:
*(*(vsv_ppiArray+0)+0)=[1]       at Address :[0000026E12F88DC0]
*(*(vsv_ppiArray+0)+1)=[2]       at Address :[0000026E12F88DC4]
*(*(vsv_ppiArray+0)+2)=[3]       at Address :[0000026E12F88DC8]


*(*(vsv_ppiArray+1)+0)=[2]       at Address :[0000026E12F88E60]
*(*(vsv_ppiArray+1)+1)=[4]       at Address :[0000026E12F88E64]
*(*(vsv_ppiArray+1)+2)=[6]       at Address :[0000026E12F88E68]


*(*(vsv_ppiArray+2)+0)=[3]       at Address :[0000026E12F89000]
*(*(vsv_ppiArray+2)+1)=[6]       at Address :[0000026E12F89004]
*(*(vsv_ppiArray+2)+2)=[9]       at Address :[0000026E12F89008]


*(*(vsv_ppiArray+3)+0)=[4]       at Address :[0000026E12F89060]
*(*(vsv_ppiArray+3)+1)=[8]       at Address :[0000026E12F89064]
*(*(vsv_ppiArray+3)+2)=[12]      at Address :[0000026E12F89068]


*(*(vsv_ppiArray+4)+0)=[5]       at Address :[0000026E12F88E80]
*(*(vsv_ppiArray+4)+1)=[10]      at Address :[0000026E12F88E84]
*(*(vsv_ppiArray+4)+2)=[15]      at Address :[0000026E12F88E88]


Memory Deallocation succeful at `4D` of 2D array
Memory Deallocation succeful at `3D` of 2D array
Memory Deallocation succeful at `2D` of 2D array
Memory Deallocation succeful at `1D` of 2D array
Memory Deallocation succeful at `0D` of 2D array
Memory Deallocation succeful 2D array
*/