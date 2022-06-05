#include<stdio.h>
#include<stdlib.h>

#define vsv_NUM_ROW 5
#define vsv_NUM_COL_1 3
#define vsv_NUM_COL_2 8

int main(void){

    int *vsv_iArray[vsv_NUM_ROW];
    int vsv_i,vsv_j;

    printf("\n2D array has 1D array of %d elements\n",vsv_NUM_COL_1);

    for(vsv_i=0;vsv_i<vsv_NUM_ROW;vsv_i++){
        vsv_iArray[vsv_i]=(int *)malloc(vsv_NUM_COL_1*sizeof(int));
        if(vsv_iArray[vsv_i]==NULL){
            printf("\nFailed to allocate memory at %d index",vsv_i);
            exit(0);
        }
    }
    
    for(vsv_i=0;vsv_i<vsv_NUM_ROW;vsv_i++){
        for(vsv_j=0;vsv_j<vsv_NUM_COL_1;vsv_j++){
            vsv_iArray[vsv_i][vsv_j]=(vsv_i+1)*(vsv_j+1);
        }
    }

    for(vsv_i=0;vsv_i<vsv_NUM_ROW;vsv_i++){
        for(vsv_j=0;vsv_j<vsv_NUM_COL_1;vsv_j++){
            printf("\nvsv_iArray[%d][%d]=%d",vsv_i,vsv_j,vsv_iArray[vsv_i][vsv_j]);
        }
        printf("\n");
    }

    for(vsv_i=vsv_NUM_ROW-1;vsv_i>=0;vsv_i--){
        free(vsv_iArray[vsv_i]);
        vsv_iArray[vsv_i]=NULL;
        printf("\nMemory deallocated successfuly   at %d",vsv_i);
    }

    printf("\n\n2D array has 1D array of %d elements\n",vsv_NUM_COL_2);

    for(vsv_i=0;vsv_i<vsv_NUM_ROW;vsv_i++){
        vsv_iArray[vsv_i]=(int *)malloc(vsv_NUM_COL_2*sizeof(int));
        if(vsv_iArray[vsv_i]==NULL){
            printf("\nFailed to allocate memory at %d index",vsv_i);
            exit(0);
        }
    }
    
    for(vsv_i=0;vsv_i<vsv_NUM_ROW;vsv_i++){
        for(vsv_j=0;vsv_j<vsv_NUM_COL_2;vsv_j++){
            vsv_iArray[vsv_i][vsv_j]=(vsv_i+1)*(vsv_j+1);
        }
    }

    for(vsv_i=0;vsv_i<vsv_NUM_ROW;vsv_i++){
        for(vsv_j=0;vsv_j<vsv_NUM_COL_2;vsv_j++){
            printf("\nvsv_iArray[%d][%d]=%d",vsv_i,vsv_j,vsv_iArray[vsv_i][vsv_j]);
        }
        printf("\n");
    }

    for(vsv_i=vsv_NUM_ROW-1;vsv_i>=0;vsv_i--){
        free(vsv_iArray[vsv_i]);
        vsv_iArray[vsv_i]=NULL;
        printf("\nMemory deallocated successfuly at %d",vsv_i);
    }


    return (0);
}
/*

2D array has 1D array of 3 elements

vsv_iArray[0][0]=1
vsv_iArray[0][1]=2
vsv_iArray[0][2]=3

vsv_iArray[1][0]=2
vsv_iArray[1][1]=4
vsv_iArray[1][2]=6

vsv_iArray[2][0]=3
vsv_iArray[2][1]=6
vsv_iArray[2][2]=9

vsv_iArray[3][0]=4
vsv_iArray[3][1]=8
vsv_iArray[3][2]=12

vsv_iArray[4][0]=5
vsv_iArray[4][1]=10
vsv_iArray[4][2]=15

Memory deallocated successfuly   at 4
Memory deallocated successfuly   at 3
Memory deallocated successfuly   at 2
Memory deallocated successfuly   at 1
Memory deallocated successfuly   at 0

2D array has 1D array of 8 elements

vsv_iArray[0][0]=1
vsv_iArray[0][1]=2
vsv_iArray[0][2]=3
vsv_iArray[0][3]=4
vsv_iArray[0][4]=5
vsv_iArray[0][5]=6
vsv_iArray[0][6]=7
vsv_iArray[0][7]=8

vsv_iArray[1][0]=2
vsv_iArray[1][1]=4
vsv_iArray[1][2]=6
vsv_iArray[1][3]=8
vsv_iArray[1][4]=10
vsv_iArray[1][5]=12
vsv_iArray[1][6]=14
vsv_iArray[1][7]=16

vsv_iArray[2][0]=3
vsv_iArray[2][1]=6
vsv_iArray[2][2]=9
vsv_iArray[2][3]=12
vsv_iArray[2][4]=15
vsv_iArray[2][5]=18
vsv_iArray[2][6]=21
vsv_iArray[2][7]=24

vsv_iArray[3][0]=4
vsv_iArray[3][1]=8
vsv_iArray[3][2]=12
vsv_iArray[3][3]=16
vsv_iArray[3][4]=20
vsv_iArray[3][5]=24
vsv_iArray[3][6]=28
vsv_iArray[3][7]=32

vsv_iArray[4][0]=5
vsv_iArray[4][1]=10
vsv_iArray[4][2]=15
vsv_iArray[4][3]=20
vsv_iArray[4][4]=25
vsv_iArray[4][5]=30
vsv_iArray[4][6]=35
vsv_iArray[4][7]=40

Memory deallocated successfuly at 4
Memory deallocated successfuly at 3
Memory deallocated successfuly at 2
Memory deallocated successfuly at 1
Memory deallocated successfuly at 0
*/