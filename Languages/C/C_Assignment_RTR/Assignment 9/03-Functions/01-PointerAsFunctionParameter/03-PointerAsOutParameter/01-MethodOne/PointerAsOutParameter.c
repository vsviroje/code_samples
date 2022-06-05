#include<stdio.h>
int main(void){

    void vsv_fn_MathematicalOperations(int,int,int *,int *,int *,int *,int *);

    int vsv_a;
    int vsv_b;
    int vsv_AnswerSum;
    int vsv_AnswerDifference;
    int vsv_AnswerProduct;
    int vsv_AnswerQuotient;
    int vsv_AnswerRemainder;

    printf("\nEnter value of 'A': ");
    scanf("%d",&vsv_a);

    printf("\nEnter value of 'B': ");
    scanf("%d",&vsv_b);
    vsv_fn_MathematicalOperations(vsv_a,vsv_b,&vsv_AnswerSum,&vsv_AnswerDifference,&vsv_AnswerProduct,&vsv_AnswerQuotient,&vsv_AnswerRemainder);
    printf("\nResult:");
    printf("\n\tvsv_AnswerSum=%d",vsv_AnswerSum);    
    printf("\n\tvsv_AnswerDifference=%d",vsv_AnswerDifference);    
    printf("\n\tvsv_AnswerProduct=%d",vsv_AnswerProduct);    
    printf("\n\tvsv_AnswerQuotient=%d",vsv_AnswerQuotient);    
    printf("\n\tvsv_AnswerRemainder=%d",vsv_AnswerRemainder);    

    return (0);
}

void vsv_fn_MathematicalOperations(int vsv_a,int vsv_b,int *vsv_AnswerSum,int *vsv_AnswerDifference,int *vsv_AnswerProduct,int *vsv_AnswerQuotient,int *vsv_AnswerRemainder){
    *vsv_AnswerSum=vsv_a+vsv_b;
    *vsv_AnswerDifference=vsv_a-vsv_b;
    *vsv_AnswerProduct=vsv_a*vsv_b;
    *vsv_AnswerRemainder=vsv_a/vsv_b;
    *vsv_AnswerQuotient=vsv_a%vsv_b;
}
/*

Enter value of 'A': 3

Enter value of 'B': 4

Result:
        vsv_AnswerSum=7
        vsv_AnswerDifference=-1
        vsv_AnswerProduct=12
        vsv_AnswerQuotient=3
        vsv_AnswerRemainder=0
*/