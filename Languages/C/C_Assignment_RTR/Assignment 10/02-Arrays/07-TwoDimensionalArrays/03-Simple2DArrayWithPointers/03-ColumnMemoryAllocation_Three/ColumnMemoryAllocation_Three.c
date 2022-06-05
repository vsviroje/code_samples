#include<stdio.h>
#include<stdlib.h>

#define vsv_NUM_ROW 5
#define vsv_NUM_COL 5
int main(void){

    int *vsv_iArray[vsv_NUM_ROW];
    int vsv_i,vsv_j;

    printf("\nMemory Allocation of 2D array\n");
    for(vsv_i=0;vsv_i<vsv_NUM_ROW;vsv_i++){
        vsv_iArray[vsv_i]=(int *)malloc((vsv_NUM_COL-vsv_i)*sizeof(int));

        if(vsv_iArray[vsv_i]==NULL){
            printf("\nFailed to allocate memory at %d",vsv_i);
            exit(0);
        }
    }

    for(vsv_i=0;vsv_i<vsv_NUM_ROW;vsv_i++){
        for(vsv_j=0;vsv_j<(vsv_NUM_COL-vsv_i);vsv_j++){
            vsv_iArray[vsv_i][vsv_j]=(vsv_i*1)+(vsv_j*1);
        }
    }
    for(vsv_i=0;vsv_i<vsv_NUM_ROW;vsv_i++){
        for(vsv_j=0;vsv_j<(vsv_NUM_COL-vsv_i);vsv_j++){
            printf("\nvsv_iArray[%d][%d]=%d \t at Address:%p",vsv_i,vsv_j,vsv_iArray[vsv_i][vsv_j],&vsv_iArray[vsv_i][vsv_j]);
        }
        printf("\n");
    }

    for(vsv_i=(vsv_NUM_ROW-1);vsv_i>=0;vsv_i--){
        if(vsv_iArray[vsv_i]){

            free(vsv_iArray[vsv_i]);
            vsv_iArray[vsv_i]=NULL;
            printf("\nMemory deallocated at %d",vsv_i);
        }

    }

    return 0;
}
/*

Memory Allocation of 2D array

vsv_iArray[0][0]=0       at Address:0000023BEAF2CCE0
vsv_iArray[0][1]=1       at Address:0000023BEAF2CCE4
vsv_iArray[0][2]=2       at Address:0000023BEAF2CCE8
vsv_iArray[0][3]=3       at Address:0000023BEAF2CCEC
vsv_iArray[0][4]=4       at Address:0000023BEAF2CCF0

vsv_iArray[1][0]=1       at Address:0000023BEAF2CC00
vsv_iArray[1][1]=2       at Address:0000023BEAF2CC04
vsv_iArray[1][2]=3       at Address:0000023BEAF2CC08
vsv_iArray[1][3]=4       at Address:0000023BEAF2CC0C

vsv_iArray[2][0]=2       at Address:0000023BEAF2CCC0
vsv_iArray[2][1]=3       at Address:0000023BEAF2CCC4
vsv_iArray[2][2]=4       at Address:0000023BEAF2CCC8

vsv_iArray[3][0]=3       at Address:0000023BEAF2F890
vsv_iArray[3][1]=4       at Address:0000023BEAF2F894

vsv_iArray[4][0]=4       at Address:0000023BEAF2F8B0

Memory deallocated at 4
Memory deallocated at 3
Memory deallocated at 2
Memory deallocated at 1
Memory deallocated at 0
*/