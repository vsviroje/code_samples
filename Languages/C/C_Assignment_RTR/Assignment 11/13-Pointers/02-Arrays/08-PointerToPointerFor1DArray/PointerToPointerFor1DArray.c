#include<stdio.h>
#include<stdlib.h>

int main(void){
    void vsv_fnMyAlloc(int **,unsigned int);

    int *vsv_piArray=NULL;
    unsigned int vsv_uiNumElements;
    int vsv_i;

    printf("\nNumber of Elements for Array:\n");
    scanf("%d",&vsv_uiNumElements);

    vsv_fnMyAlloc(&vsv_piArray,vsv_uiNumElements);

    printf("\nEnter the elements:\n");
    for(vsv_i=0;vsv_i<vsv_uiNumElements;vsv_i++){
        scanf("%d",&vsv_piArray[vsv_i]);
    }

    printf("\nArrays elements entered by you:\n");
    for(vsv_i=0;vsv_i<vsv_uiNumElements;vsv_i++){
        printf("\n\t%u",vsv_piArray[vsv_i]);
    }

    if(vsv_piArray){

        free(vsv_piArray);
        vsv_piArray=NULL;
        printf("\nMemory deallocated for vsv_piArray");
    }

    return 0;
}

void vsv_fnMyAlloc(int **vsv_piArray,unsigned int vsv_uiNumElements){
    *vsv_piArray=(int *)malloc(vsv_uiNumElements*sizeof(int));

    if(*vsv_piArray==NULL){
        printf("\nFailed to allocate Memory for vsv_piArray");
        exit(0);
    }
}
 
/*

Number of Elements for Array:
4

Enter the elements:
1
4
8
12

Arrays elements entered by you:

        1
        4
        8
        12
Memory deallocated for vsv_piArray
*/