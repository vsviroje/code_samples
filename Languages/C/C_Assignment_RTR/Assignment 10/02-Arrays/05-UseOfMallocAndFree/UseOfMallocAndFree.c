#include<stdio.h>
#include<stdlib.h>
int main(void){
    int *vsv_ipArray=NULL;
    unsigned int vsv_iArrayLen=0;
    int vsv_i;

    printf("\nEnter Number of Element for array:");
    scanf("%d",&vsv_iArrayLen);
    
    vsv_ipArray=(int *)malloc(sizeof(int)*vsv_iArrayLen);

    if(vsv_ipArray==NULL){
        printf("\nMemory Allocation failed");
        exit(0);
    }else{
        printf("\nMemory Address from [%p] to [%p] is allocated for array",vsv_ipArray,(vsv_ipArray+(vsv_iArrayLen-1)));
    }

    printf("\n\nEnter %d Element",vsv_iArrayLen);

    for(vsv_i=0;vsv_i<vsv_iArrayLen;vsv_i++){
        scanf("%d",(vsv_ipArray+vsv_i));
    }

    printf("\n\nEntered by you %d number of Element",vsv_iArrayLen);

    for(vsv_i=0;vsv_i<vsv_iArrayLen;vsv_i++){
        printf("\n\tvsv_ipArray[%d]=[%d] at &vsv_ipArray=[%p]",vsv_i,vsv_ipArray[vsv_i],&vsv_ipArray[vsv_i]);
    }
    
    printf("\n\nAnother Way to represent");
    for(vsv_i=0;vsv_i<vsv_iArrayLen;vsv_i++){
        printf("\n\t*(vsv_ipArray+%d)=[%d] at address (vsv_ipArray+%d)=[%p]",vsv_i,*(vsv_ipArray+vsv_i),vsv_i,(vsv_ipArray+vsv_i));
    }

    if(vsv_ipArray){
        free(vsv_ipArray);
        vsv_ipArray=NULL;
        printf("\nMemory is Deallocated");
    }

    return 0;
}
/*

Enter Number of Element for array:3

Memory Address from [00000215EF915E00] to [00000215EF915E08] is allocated for array

Enter 3 Element1
2
3


Entered by you 3 number of Element
        vsv_ipArray[0]=[1] at &vsv_ipArray=[00000215EF915E00]
        vsv_ipArray[1]=[2] at &vsv_ipArray=[00000215EF915E04]
        vsv_ipArray[2]=[3] at &vsv_ipArray=[00000215EF915E08]

Another Way to represent
        *(vsv_ipArray+0)=[1] at address (vsv_ipArray+0)=[00000215EF915E00]
        *(vsv_ipArray+1)=[2] at address (vsv_ipArray+1)=[00000215EF915E04]
        *(vsv_ipArray+2)=[3] at address (vsv_ipArray+2)=[00000215EF915E08]
Memory is Deallocated
*/