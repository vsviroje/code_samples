#include<stdio.h>
#include<stdlib.h>
int main(void){

    void vsv_fnMathOperation(int,int,int *,int *,int *,int *,int *);

    int vsv_a,vsv_b;
    int *vsv_iAnsSum,*vsv_iAnsDiff,*vsv_iAnsProduct,*vsv_iAnsQuotient,*vsv_iAnsRemainder;


    printf("\nEnter Value of A:\n");
    scanf("%d",&vsv_a);

    printf("\nEnter Value of B:\n");
    scanf("%d",&vsv_b);
    
    vsv_iAnsSum=(int *)malloc(1*sizeof(int));
    if(vsv_iAnsSum==NULL){
        printf("\nFailed to allocate memory for vsv_iAnsSum");
        exit(0);
    }

    vsv_iAnsDiff=(int *)malloc(1*sizeof(int));
    if(vsv_iAnsDiff==NULL){
        printf("\nFailed to allocate memory for vsv_iAnsDiff");
        exit(0);
    }
   
    vsv_iAnsProduct=(int *)malloc(1*sizeof(int));
    if(vsv_iAnsProduct==NULL){
        printf("\nFailed to allocate memory for vsv_iAnsProduct");
        exit(0);
    }

    vsv_iAnsQuotient=(int *)malloc(1*sizeof(int));
    if(vsv_iAnsQuotient==NULL){
        printf("\nFailed to allocate memory for vsv_iAnsQuotient");
        exit(0);
    }

    vsv_iAnsRemainder=(int *)malloc(1*sizeof(int));
    if(vsv_iAnsRemainder==NULL){
        printf("\nFailed to allocate memory for vsv_iAnsRemainder");
        exit(0);
    }

    vsv_fnMathOperation(vsv_a,vsv_b,vsv_iAnsSum,vsv_iAnsDiff,vsv_iAnsProduct,vsv_iAnsQuotient,vsv_iAnsRemainder);
    
    printf("\nResult:");
    printf("\nSum:%d",*vsv_iAnsSum);
    printf("\nDiff:%d",*vsv_iAnsDiff);
    printf("\nProduct:%d",*vsv_iAnsProduct);
    printf("\nQuotient:%d",*vsv_iAnsQuotient);
    printf("\nRemainder:%d",*vsv_iAnsRemainder);
    
    if(vsv_iAnsRemainder){
        free(vsv_iAnsRemainder);
        vsv_iAnsRemainder=NULL;
        printf("\nMemory deallocated for vsv_iAnsRemainder");
    }

    if(vsv_iAnsQuotient){
        free(vsv_iAnsQuotient);
        vsv_iAnsQuotient=NULL;
        printf("\nMemory deallocated for vsv_iAnsQuotient");
    }

    if(vsv_iAnsProduct){
        free(vsv_iAnsProduct);
        vsv_iAnsProduct=NULL;
        printf("\nMemory deallocated for vsv_iAnsProduct");
    }

    if(vsv_iAnsDiff){
        free(vsv_iAnsDiff);
        vsv_iAnsDiff=NULL;
        printf("\nMemory deallocated for vsv_iAnsDiff");
    }

    if(vsv_iAnsSum){
        free(vsv_iAnsSum);
        vsv_iAnsSum=NULL;
        printf("\nMemory deallocated for vsv_iAnsSum");
    }

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
5

Enter Value of B:
4

Result:
Sum:9
Diff:1
Product:20
Quotient:1
Remainder:1
Memory deallocated for vsv_iAnsRemainder
Memory deallocated for vsv_iAnsQuotient
Memory deallocated for vsv_iAnsProduct
Memory deallocated for vsv_iAnsDiff
Memory deallocated for vsv_iAnsSum
*/