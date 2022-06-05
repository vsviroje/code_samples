#include<stdio.h>
#include<stdlib.h>
struct vsv_MyData{
    int vsv_i;
    int *vsv_ip;

    float vsv_f;
    float *vsv_fp;

    double vsv_d;
    double *vsv_dp;

};
int main(void){
    struct vsv_MyData *pdata=NULL;

    pdata=(struct vsv_MyData *)malloc(sizeof(struct vsv_MyData));

    if(NULL == pdata){
        printf("\nFailed to allocate memory for pdata");
        exit(0);
    }

    pdata->vsv_i=5;
    pdata->vsv_ip=&pdata->vsv_i;

    pdata->vsv_f=9.354f;
    pdata->vsv_fp=&pdata->vsv_f;
    
    pdata->vsv_d=4.23425462;
    pdata->vsv_dp=&pdata->vsv_d;
    
    printf("\nvsv_i=[%d] and address :[%p]",*(pdata->vsv_ip),pdata->vsv_ip);
    printf("\nvsv_f=[%f] and address :[%p]",*(pdata->vsv_fp),pdata->vsv_fp);
    printf("\nvsv_d=[%fl] and address :[%p]",*(pdata->vsv_dp),pdata->vsv_dp);

    if(pdata){
        free(pdata);
        pdata=NULL;
        printf("\nMemory is deallocated for pdata");
    }

    return 0;
}
/*

vsv_i=[5] and address :[000001D09F8E3890]
vsv_f=[9.354000] and address :[000001D09F8E38A0]
vsv_d=[4.234255l] and address :[000001D09F8E38B0]
Memory is deallocated for pdata
*/