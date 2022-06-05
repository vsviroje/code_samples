#include<stdio.h>
int main(){

    void printBinaryFormOfNumber(unsigned int);

    unsigned int vsv_a;
    unsigned int vsv_res;

    printf("\nEnter vsv_a:");
    scanf("%u",&vsv_a);

    vsv_res= ~vsv_a;
    printf("\n~vsv_a So Result:[%d]",vsv_res);

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

Enter vsv_a:5

~vsv_a So Result:[-6]
Decimal Number :[5]
00000101

Decimal Number :[-6]
11111010

*/