#include<stdio.h>
int main(void){

    void vsv_fnMathOperation(int,int,int *,int *,int *,int *,int *);

    int vsv_a,vsv_b;
    int vsv_iAnsSum,vsv_iAnsDiff,vsv_iAnsProduct,vsv_iAnsQuotient,vsv_iAnsRemainder;

    printf("\nEnter Value of A:\n");
    scanf("%d",&vsv_a);

    printf("\nEnter Value of B:\n");
    scanf("%d",&vsv_b);
    
    vsv_fnMathOperation(vsv_a,vsv_b,&vsv_iAnsSum,&vsv_iAnsDiff,&vsv_iAnsProduct,&vsv_iAnsQuotient,&vsv_iAnsRemainder);
    printf("\nResult:");
    printf("\nSum:%d",vsv_iAnsSum);
    printf("\nDiff:%d",vsv_iAnsDiff);
    printf("\nProduct:%d",vsv_iAnsProduct);
    printf("\nQuotient:%d",vsv_iAnsQuotient);
    printf("\nRemainder:%d",vsv_iAnsRemainder);

    return(0);
}

void vsv_fnMathOperation(int vsv_a,int vsv_b,int *vsv_iAnsSum,int *vsv_iAnsDiff,int *vsv_iAnsProduct,int *vsv_iAnsQuotient,int *vsv_iAnsRemainder){
    *vsv_iAnsSum=vsv_a+vsv_b;
    *vsv_iAnsDiff=vsv_a-vsv_b;
    *vsv_iAnsProduct=vsv_a*vsv_b;
    *vsv_iAnsQuotient=vsv_a/vsv_b;
    *vsv_iAnsRemainder=vsv_a%vsv_b;
}
/*

Enter Value of A:
4

Enter Value of B:
5

Result:
Sum:9
Diff:-1
Product:20
Quotient:0
Remainder:4
*/