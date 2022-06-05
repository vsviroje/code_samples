#include<stdio.h>
#include<stdlib.h>
int main(void){

    void vsv_fnMultiArrayElementByNum(int *,int,int);

    int *vsv_iArray=NULL;
    int vsv_iNumElements;
    int vsv_i,vsv_iNum;

    printf("\nEnter Number of element for Array:\n");
    scanf("%d",&vsv_iNumElements);

    vsv_iArray=(int *)malloc(vsv_iNumElements*sizeof(int));
    if(vsv_iArray==NULL){
        printf("\nMemory Allocation Failed for vsv_iArray");
        exit(0);
    }

    printf("\nEnter %d element for Array:\n",vsv_iNumElements);
    for(vsv_i=0;vsv_i<vsv_iNumElements;vsv_i++){
        scanf("%d",&vsv_iArray[vsv_i]);
    }
    
    printf("\nArray entered by you and before Multiplication");
    for(vsv_i=0;vsv_i<vsv_iNumElements;vsv_i++){
        printf("\n\tvsv_iArray[%d]=%d",vsv_i,vsv_iArray[vsv_i]);
    }

    printf("\nEnter the by which you want to multiply:\n");
    scanf("%d",&vsv_iNum);

    vsv_fnMultiArrayElementByNum(vsv_iArray,vsv_iNumElements,vsv_iNum);
    
    printf("\nArray After Multiplication");
    for(vsv_i=0;vsv_i<vsv_iNumElements;vsv_i++){
        printf("\n\tvsv_iArray[%d]=%d",vsv_i,vsv_iArray[vsv_i]);
    }

    if(vsv_iArray){
        free(vsv_iArray);
        vsv_iArray=NULL;
        printf("\nMemory deallocated successfully for vsv_iArray");
    }

    return 0;
}

void vsv_fnMultiArrayElementByNum(int *vsv_iArray,int vsv_iNumElements,int vsv_iNum){
    int vsv_i;
    for(vsv_i=0;vsv_i<vsv_iNumElements;vsv_i++){
        vsv_iArray[vsv_i]=vsv_iArray[vsv_i]*vsv_iNum;
    }
}

/*

Enter Number of element for Array:
3

Enter 3 element for Array:
1
2
3

Array entered by you and before Multiplication
        vsv_iArray[0]=1
        vsv_iArray[1]=2
        vsv_iArray[2]=3
Enter the by which you want to multiply:
4

Array After Multiplication
        vsv_iArray[0]=4
        vsv_iArray[1]=8
        vsv_iArray[2]=12
Memory deallocated successfully for vsv_iArray
*/