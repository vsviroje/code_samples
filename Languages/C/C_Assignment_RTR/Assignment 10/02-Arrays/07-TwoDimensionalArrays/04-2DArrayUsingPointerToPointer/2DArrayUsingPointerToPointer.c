#include<stdio.h>
#include<stdlib.h>

int main(void){

    int **vsv_ppiArray=NULL;
    int vsv_i,vsv_j;
    int vsv_iNumRow,vsv_iNumCol;

    printf("\nEnter Number of Rows:\n");
    scanf("%d",&vsv_iNumRow);


    printf("\nEnter Number of Columns:\n");
    scanf("%d",&vsv_iNumCol);


    vsv_ppiArray=(int **)malloc((vsv_iNumRow)*sizeof(int *));
    if(vsv_ppiArray==NULL){
        printf("\nFailed to allocate memory for 2D array");
        exit(0);
    }

    printf("\nMemory Allocation of 2D array\n");
    for(vsv_i=0;vsv_i<vsv_iNumRow;vsv_i++){
        vsv_ppiArray[vsv_i]=(int *)malloc((vsv_iNumRow)*sizeof(int));

        if(vsv_ppiArray[vsv_i]==NULL){
            printf("\nFailed to allocate memory at %d",vsv_i);
            exit(0);
        }
    }

    for(vsv_i=0;vsv_i<vsv_iNumRow;vsv_i++){
        for(vsv_j=0;vsv_j<vsv_iNumCol;vsv_j++){
            vsv_ppiArray[vsv_i][vsv_j]=(vsv_i*1)+(vsv_j*1);
        }
    }

    for(vsv_i=0;vsv_i<vsv_iNumRow;vsv_i++){
        for(vsv_j=0;vsv_j<vsv_iNumCol;vsv_j++){
            printf("\nvsv_ppiArray[%d][%d]=%d \t at Address:%p",vsv_i,vsv_j,vsv_ppiArray[vsv_i][vsv_j],&vsv_ppiArray[vsv_i][vsv_j]);
        }
        printf("\n");
    }

    for(vsv_i=(vsv_iNumRow-1);vsv_i>=0;vsv_i--){
        if(vsv_ppiArray[vsv_i]){

            free(vsv_ppiArray[vsv_i]);
            vsv_ppiArray[vsv_i]=NULL;
            printf("\nMemory deallocated at %d",vsv_i);
        }

    }

    if(vsv_ppiArray){
        free(vsv_ppiArray);
        vsv_ppiArray=NULL;
        printf("\nMemory Deallocated");
    }

    return 0;
}
/*

Enter Number of Rows:
3

Enter Number of Columns:
4

Memory Allocation of 2D array

vsv_ppiArray[0][0]=0     at Address:000001F861AD9000
vsv_ppiArray[0][1]=1     at Address:000001F861AD9004
vsv_ppiArray[0][2]=2     at Address:000001F861AD9008
vsv_ppiArray[0][3]=3     at Address:000001F861AD900C

vsv_ppiArray[1][0]=1     at Address:000001F861AD90A0
vsv_ppiArray[1][1]=2     at Address:000001F861AD90A4
vsv_ppiArray[1][2]=3     at Address:000001F861AD90A8
vsv_ppiArray[1][3]=4     at Address:000001F861AD90AC

vsv_ppiArray[2][0]=2     at Address:000001F861AD8F60
vsv_ppiArray[2][1]=3     at Address:000001F861AD8F64
vsv_ppiArray[2][2]=4     at Address:000001F861AD8F68
vsv_ppiArray[2][3]=5     at Address:000001F861AD8F6C

Memory deallocated at 2
Memory deallocated at 1
Memory deallocated at 0
Memory Deallocateds
*/