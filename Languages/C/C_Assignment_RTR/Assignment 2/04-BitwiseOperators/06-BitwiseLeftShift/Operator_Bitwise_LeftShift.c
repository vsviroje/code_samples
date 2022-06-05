#include<stdio.h>
int main(){

    void printBinaryFormOfNumber(unsigned int);

    unsigned int vsv_a;
    unsigned int vsv_num_bits;
    unsigned int vsv_res;

    printf("\nEnter vsv_a:");
    scanf("%u",&vsv_a);

    printf("\nEnter vsv_num_bits:");
    scanf("%u",&vsv_num_bits);

    vsv_res= vsv_a << vsv_num_bits;
    printf("\nvsv_a << vsv_num_bits So Result:[%d]",vsv_res);

    printBinaryFormOfNumber(vsv_a);
    printBinaryFormOfNumber(vsv_res);

    return 0;
}

void printBinaryFormOfNumber(unsigned int vsv_decimal_number){

    unsigned int vsv_quotient,vsv_remainder;
    unsigned int vsv_num;
    unsigned int vsv_binary_array[8];
    int vsv_i;

    for(vsv_i=0 ; vsv_i<8 ; vsv_i++){
        vsv_binary_array[vsv_i]=0;
    }

    printf("\nDecimal Number :[%d]\n",vsv_decimal_number);

    vsv_num=vsv_decimal_number;
    vsv_i=7;

    while(vsv_num != 0){

        vsv_quotient = vsv_num / 2;
        vsv_remainder = vsv_num % 2;
        vsv_binary_array[vsv_i]=vsv_remainder;
        vsv_num=vsv_quotient;
        vsv_i--;
    }

    for(vsv_i=0 ; vsv_i<8 ; vsv_i++){
        printf("%u",vsv_binary_array[vsv_i]);
    }
    printf("\n");
}
/*output

Enter vsv_a:6

Enter vsv_num_bits:4

vsv_a << vsv_num_bits So Result:[96]
Decimal Number :[6]
00000110

Decimal Number :[96]
01100000

*/