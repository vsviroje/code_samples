#include<stdio.h>
int main(){

    void printBinaryFormOfNumber(unsigned int);

    unsigned int vsv_a;
    unsigned int vsv_b;
    unsigned int vsv_res;

    printf("\nEnter vsv_a:");
    scanf("%u",&vsv_a);

    printf("\nEnter vsv_b:");
    scanf("%u",&vsv_b);

    vsv_res= vsv_a & vsv_b;
    printf("\nvsv_a & vsv_b So Result:[%d]",vsv_res);

    printBinaryFormOfNumber(vsv_a);
    printBinaryFormOfNumber(vsv_b);
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
/*

Enter vsv_a:3

Enter vsv_b:5

vsv_a & vsv_b So Result:[1]
Decimal Number :[3]
00000011

Decimal Number :[5]
00000101

Decimal Number :[1]
00000001

*/