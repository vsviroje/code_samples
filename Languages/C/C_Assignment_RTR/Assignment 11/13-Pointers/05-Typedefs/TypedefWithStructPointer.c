#include<stdio.h>
#include<stdlib.h>
struct vsv_MyData{
    int vsv_i;
    float vsv_f;
    double vsv_d;
};

int main(void)
{
    int vsv_iSize;
    int vsv_fSize;
    int vsv_dSize;
    int vsv_StructMyDataSize;
    int vsv_PtrStructMyDataSize;

    typedef struct vsv_MyData * MyDataPtr;
    MyDataPtr pData=NULL;

    pData=(MyDataPtr)malloc(sizeof(struct vsv_MyData));
    if(NULL==pData){
        printf("\nFailed to allocate memory for pData");
        exit(0);
    }

    pData->vsv_i=40;
    pData->vsv_f=44.34f;
    pData->vsv_d=23.2342342;

    vsv_iSize=sizeof(pData->vsv_i);
    vsv_fSize=sizeof(pData->vsv_f);
    vsv_dSize=sizeof(pData->vsv_d);

    printf("\nSizes of Data Member value:\n");
    printf("\n\tsizeof vsv_i=%d",vsv_iSize);
    printf("\n\tsizeof vsv_f=%d",vsv_fSize);
    printf("\n\tsizeof vsv_d=%d",vsv_dSize);

    vsv_StructMyDataSize=sizeof(struct vsv_MyData);
    vsv_PtrStructMyDataSize=sizeof(MyDataPtr);

    printf("\n\tsizeof struct vsv_MyData=%d",vsv_StructMyDataSize);
    printf("\n\tsizeof MyDataPtr=%d",vsv_PtrStructMyDataSize);

    if(pData){
        free(pData);
        pData=NULL;
        printf("\nMemory is deallocated for pData");
    }

    return 0;
}
/*

Sizes of Data Member value:

        sizeof vsv_i=4
        sizeof vsv_f=4
        sizeof vsv_d=8
        sizeof struct vsv_MyData=16
        sizeof MyDataPtr=8
Memory is deallocated for pDatas
*/