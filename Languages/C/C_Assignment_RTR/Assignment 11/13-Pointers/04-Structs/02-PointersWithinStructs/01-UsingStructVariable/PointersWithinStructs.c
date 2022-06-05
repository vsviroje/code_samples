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
    struct vsv_MyData data;

    data.vsv_i=9;
    data.vsv_ip=&data.vsv_i;

   
    data.vsv_f=9.34f;
    data.vsv_fp=&data.vsv_f;

    data.vsv_d=3.325235;
    data.vsv_dp=&data.vsv_d;

    printf("\nvsv_i=[%d] and Address:[%p]",*(data.vsv_ip),data.vsv_ip);
    printf("\nvsv_f=[%f] and Address:[%p]",*(data.vsv_fp),data.vsv_fp);
    printf("\nvsv_d=[%lf] and Address:[%p]",*(data.vsv_dp),data.vsv_dp);

    return 0;
}
/*

vsv_i=[9] and Address:[000000250EEFFE70]
vsv_f=[9.340000] and Address:[000000250EEFFE80]
vsv_d=[3.325235] and Address:[000000250EEFFE90]
*/