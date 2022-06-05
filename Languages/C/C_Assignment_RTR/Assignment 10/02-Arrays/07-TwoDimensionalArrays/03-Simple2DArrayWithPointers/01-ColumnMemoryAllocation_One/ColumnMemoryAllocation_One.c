#include<stdio.h>
#include<stdlib.h>

#define vsv_NUM_ROW 5
#define vsv_NUM_COL 3

int main(void){

    int *vsv_iArray[vsv_NUM_ROW];
    int vsv_i,vsv_j;

    for(vsv_i=0;vsv_i<vsv_NUM_ROW;vsv_i++){
        vsv_iArray[vsv_i]=(int *)malloc(vsv_NUM_COL*sizeof(int));
        if(vsv_iArray[vsv_i]==NULL){
            printf("\nFailed to allocate memory");
            exit(0);
        }
    }
    
    for(vsv_i=0;vsv_i<vsv_NUM_ROW;vsv_i++){
        for(vsv_j=0;vsv_j<vsv_NUM_COL;vsv_j++)
        {
            vsv_iArray[vsv_i][vsv_j]=(vsv_i+1)*(vsv_j+1);
        }
    }

    for(vsv_i=0;vsv_i<vsv_NUM_ROW;vsv_i++){
        for(vsv_j=0;vsv_j<vsv_NUM_COL;vsv_j++){
            printf("\nvsv_iArray[%d][%d]=%d",vsv_i,vsv_j,vsv_iArray[vsv_i][vsv_j]);
        }
        printf("\n");
    }

    for(vsv_i=vsv_NUM_ROW-1;vsv_i>=0;vsv_i--){
        free(vsv_iArray[vsv_i]);
        vsv_iArray[vsv_i]=NULL;
        printf("\nvsv_iArray[%d] is successfully memory deallocated.",vsv_i);
    }

    return (0);
}
/*

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

vsv_iArray[4] is successfully memory deallocated.
vsv_iArray[3] is successfully memory deallocated.
vsv_iArray[2] is successfully memory deallocated.
vsv_iArray[1] is successfully memory deallocated.
vsv_iArray[0] is successfully memory deallocated.
*/