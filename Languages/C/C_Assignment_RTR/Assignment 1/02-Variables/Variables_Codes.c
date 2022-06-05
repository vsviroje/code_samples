
#include<stdio.h>
int main(void){


    int i_vsv=10;
    float f_vsv=2.52344f;
    double d_vsv=8.090422;
    char c_vsv='v';

    printf("\ni_vsv=[%d]\n",i_vsv);
    printf("f_vsv=[%f]\n",f_vsv);
    printf("d_vsv=[%lf]\n",d_vsv);
    printf("c_vsv=[%c]\n",c_vsv);

    i_vsv=32;
    f_vsv=3.24f;
    d_vsv=49.354535;
    c_vsv='X';

    printf("\n after value change\n");
    printf("\ni_vsv=[%d]\n",i_vsv);
    printf("f_vsv=[%f]\n",f_vsv);
    printf("d_vsv=[%lf]\n",d_vsv);
    printf("c_vsv=[%c]\n",c_vsv);

    return(0);
}
/*Output

i_vsv=[10]
f_vsv=[2.523440]
d_vsv=[8.090422]
c_vsv=[v]

 after value change

i_vsv=[32]
f_vsv=[3.240000]
d_vsv=[49.354535]
c_vsv=[X]

*/