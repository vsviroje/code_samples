#include<stdio.h>
#include<stdlib.h>
#define vsv_NUM_ROWS 5
#define vsv_NUM_COLUMNS 3

int main(void){

    int vsv_iArray[vsv_NUM_ROWS][vsv_NUM_COLUMNS];
    int vsv_i,vsv_j;

    for(vsv_i=0;vsv_i<vsv_NUM_ROWS;vsv_i++){

        for(vsv_j=0;vsv_j<vsv_NUM_COLUMNS;vsv_j++){
            vsv_iArray[vsv_i][vsv_j]=(vsv_i+1)*(vsv_j+1);
        }

    }

    printf("\n2D array with value and address:");
    for(vsv_i=0;vsv_i<vsv_NUM_ROWS;vsv_i++){

        for(vsv_j=0;vsv_j<vsv_NUM_COLUMNS;vsv_j++)
        {
            printf("\nvsv_iArray[%d][%d]=[%d]\t at Address :[%p]",vsv_i,vsv_j,vsv_iArray[vsv_i][vsv_j],&vsv_iArray[vsv_i][vsv_j]);
        }
        printf("\n\n");
    }

    return 0;
}
/*

2D array with value and address:
vsv_iArray[0][0]=[1]     at Address :[0000007ABACFFC98]
vsv_iArray[0][1]=[2]     at Address :[0000007ABACFFC9C]
vsv_iArray[0][2]=[3]     at Address :[0000007ABACFFCA0]


vsv_iArray[1][0]=[2]     at Address :[0000007ABACFFCA4]
vsv_iArray[1][1]=[4]     at Address :[0000007ABACFFCA8]
vsv_iArray[1][2]=[6]     at Address :[0000007ABACFFCAC]


vsv_iArray[2][0]=[3]     at Address :[0000007ABACFFCB0]
vsv_iArray[2][1]=[6]     at Address :[0000007ABACFFCB4]
vsv_iArray[2][2]=[9]     at Address :[0000007ABACFFCB8]


vsv_iArray[3][0]=[4]     at Address :[0000007ABACFFCBC]
vsv_iArray[3][1]=[8]     at Address :[0000007ABACFFCC0]
vsv_iArray[3][2]=[12]    at Address :[0000007ABACFFCC4]


vsv_iArray[4][0]=[5]     at Address :[0000007ABACFFCC8]
vsv_iArray[4][1]=[10]    at Address :[0000007ABACFFCCC]
vsv_iArray[4][2]=[15]    at Address :[0000007ABACFFCD0]


*/