#include<stdio.h>
int main(void){

    unsigned int vsv_num;

    void vsv_Recursive(unsigned int);

    printf("\nEnter Number:");
    scanf("%u",&vsv_num);

    vsv_Recursive(vsv_num);

    return(0);
}
void vsv_Recursive(unsigned int vsv_num){

    printf("\nvsv_num:[%d]",vsv_num);

    if(vsv_num>0){
        vsv_Recursive(vsv_num-1);
    }

}

/*

Enter Number:2

vsv_num:[2]
vsv_num:[1]
vsv_num:[0]
*/