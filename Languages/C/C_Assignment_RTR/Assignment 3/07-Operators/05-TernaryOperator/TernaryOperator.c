#include<stdio.h>
int main(void){

    int vsv_a,vsv_b,vsv_p,vsv_q,vsv_res1,vsv_res2;
    char vsv_ch1,vsv_ch2;

    vsv_a=17;
    vsv_b=67;

    vsv_ch1=(vsv_a>vsv_b)?'V':'S';

    vsv_res1=(vsv_a>vsv_b)?vsv_a:vsv_b;

    printf("\nvsv_ch1:[%c] and vsv_res1:[%d]",vsv_ch1,vsv_res1);
    
    vsv_p=20;
    vsv_q=20;

    vsv_ch2=(vsv_p!=vsv_q)?'U':'I';
    vsv_res2=(vsv_p!=vsv_q)?vsv_p:vsv_q;

    printf("\nvsv_ch2:[%c] and vsv_res2:[%d]\n",vsv_ch2,vsv_res2);

    return (0);
}

/*

vsv_ch1:[S] and vsv_res1:[67]
vsv_ch2:[I] and vsv_res2:[20]

*/