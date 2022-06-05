#include<stdio.h>
enum{
    NEGATIVE =-1,
    ZERO,
    POSITIVE
};
int main(void){
    int vsv_fnDifference(int,int,int *);
    int vsv_a;
    int vsv_b;
    int vsv_ans,vsv_ret;

    
    printf("\nEnter value of 'A': ");
    scanf("%d",&vsv_a);

    printf("\nEnter value of 'B': ");
    scanf("%d",&vsv_b);

    vsv_ret=vsv_fnDifference(vsv_a,vsv_b,&vsv_ans);

    printf("\nDifference of %d and %d =%d",vsv_a,vsv_b,vsv_ans);

    if(vsv_ret==POSITIVE) 
        printf("\nDifference is in POSITIVE");
    else if(vsv_ret==NEGATIVE)
        printf("\nDifference is in NEGATIVE");
    else
        printf("\nDifference is ZERO");

    return (0);
}
int vsv_fnDifference(int vsv_a,int vsv_b,int *vsv_ans){
    *vsv_ans=vsv_a-vsv_b;
    if(*vsv_ans>0)
        return(POSITIVE);
    else if(*vsv_ans<0)
        return(NEGATIVE);
    else
        return(ZERO);
}
/*

Enter value of 'A': 3

Enter value of 'B': 8

Difference of 3 and 8 =-5
Difference is in NEGATIVE
*/