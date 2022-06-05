#include<stdio.h>
#include<stdlib.h>
struct vsv_MyData{
    int vsv_i;
    float vsv_f;
    double vsv_d;
};
int main(void){

    int vsv_iSize;
    int vsv_fSize;
    int vsv_dSize;
    int vsv_StructMyDataSize;
    int vsv_PtrMyDataSize;

    struct vsv_MyData *vsv_pData=NULL;

    vsv_pData=(struct vsv_MyData *)malloc(sizeof(struct vsv_MyData));
    
    if(vsv_pData==NULL){
        printf("\nFailed allocate memory for vsv_pData");
        exit(0);
    }
    
    vsv_pData->vsv_i=20;
    vsv_pData->vsv_f=7.32f;
    vsv_pData->vsv_d=45.54463;
    

    printf("\nData Members of `struct vsv_MyData`are:");
    printf("\nvsv_i=%d",vsv_pData->vsv_i);
    printf("\nvsv_f=%f",vsv_pData->vsv_f);
    printf("\nvsv_d=%lf",vsv_pData->vsv_d);
    
    vsv_iSize=sizeof(vsv_pData->vsv_i);
    vsv_fSize=sizeof(vsv_pData->vsv_f);
    vsv_dSize=sizeof(vsv_pData->vsv_d);

    printf("\n\nData Members sizes of `struct vsv_MyData`are:");
    printf("\nsize of vsv_i=%d",vsv_iSize);
    printf("\nsize of vsv_f=%d",vsv_fSize);
    printf("\nsize of vsv_d=%d",vsv_dSize);

    vsv_StructMyDataSize=sizeof(struct vsv_MyData);
    vsv_PtrMyDataSize=sizeof(struct vsv_MyData *);

    printf("\n\nsize of struct vsv_MyData:%d",vsv_StructMyDataSize);
    printf("\n\nsize of struct vsv_MyData *:%d",vsv_PtrMyDataSize);

    if(vsv_pData){
        free(vsv_pData);
        vsv_pData=NULL;
        printf("\nMemory is deallocated for vsv_pData");
    }

    return 0;
}
/*

Data Members of `struct vsv_MyData`are:
vsv_i=20
vsv_f=7.320000
vsv_d=45.544630

Data Members sizes of `struct vsv_MyData`are:
size of vsv_i=4
size of vsv_f=4
size of vsv_d=8

size of struct vsv_MyData:16

size of struct vsv_MyData *:8
Memory is deallocated for vsv_pData
*/