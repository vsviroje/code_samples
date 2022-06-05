#include<stdio.h>
#include<stdlib.h>
struct vsv_MyData{
    int vsv_i;
    float vsv_f;
    double vsv_d;
};

int main(void)
{
    void vsv_fnChangeValue(struct vsv_MyData*);

    struct vsv_MyData *pData=NULL;

    pData=(struct vsv_MyData *)malloc(sizeof(struct vsv_MyData));
    if(NULL==pData){
        printf("\nFailed to allocate memory for pData");
        exit(0);
    }

    pData->vsv_i=40;
    pData->vsv_f=44.34f;
    pData->vsv_d=23.2342342;

    printf("\nData Member value before change:\n");
    printf("\n\tvsv_i=%d",pData->vsv_i);
    printf("\n\tvsv_f=%f",pData->vsv_f);
    printf("\n\tvsv_d=%lf",pData->vsv_d);

    vsv_fnChangeValue(pData);
    
    printf("\nData Member value after change:\n");
    printf("\n\tvsv_i=%d",pData->vsv_i);
    printf("\n\tvsv_f=%f",pData->vsv_f);
    printf("\n\tvsv_d=%lf",pData->vsv_d);

    if(pData){
        free(pData);
        pData=NULL;
        printf("\nMemory is deallocated for pData");
    }

    return 0;
}

void vsv_fnChangeValue(struct vsv_MyData *pData){
    
    pData->vsv_i=109;
    pData->vsv_f=4.53f;
    pData->vsv_d=543.342342;

}
/*

Data Member value before change:

        vsv_i=40
        vsv_f=44.340000
        vsv_d=23.234234
Data Member value after change:

        vsv_i=109
        vsv_f=4.530000
        vsv_d=543.342342
Memory is deallocated for pData
*/