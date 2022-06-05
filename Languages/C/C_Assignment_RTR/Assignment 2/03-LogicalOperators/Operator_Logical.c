#include<stdio.h>
int main(){

    int vsv_a;
    int vsv_b;
    int vsv_c;
    int vsv_res;

    printf("\nEnter vsv_a:");
    scanf("%d",&vsv_a);

    printf("\nEnter vsv_b:");
    scanf("%d",&vsv_b);

    printf("\nEnter vsv_c:");
    scanf("%d",&vsv_c);

    printf("\nIf Result = 0, It Is 'FALSE'."); 
    printf("\nIf Result = 1, It Is 'TRUE'.\n\n");

    vsv_res=(vsv_a <= vsv_b) && (vsv_b != vsv_c);
    printf("\n(vsv_a <= vsv_b) && (vsv_b != vsv_c) so Result:%d",vsv_res);

    vsv_res=(vsv_b >= vsv_a) || (vsv_a == vsv_c);
    printf("\n(vsv_b >= vsv_a) || (vsv_a == vsv_c) so Result:%d",vsv_res);
    
    vsv_res=!vsv_a;
    printf("\n!vsv_a so Result:%d",vsv_res);
    
    vsv_res=!vsv_b;
    printf("\n!vsv_b so Result:%d",vsv_res);
    
    vsv_res=!vsv_c;
    printf("\n!vsv_c so Result:%d",vsv_res);
    
    vsv_res=!((vsv_b >= vsv_a) || (vsv_a == vsv_c));
    printf("\n!((vsv_b >= vsv_a) || (vsv_a == vsv_c)) so Result:%d",vsv_res);
    
    vsv_res=!((vsv_a <= vsv_b) && (vsv_b != vsv_c));
    printf("\n!((vsv_a <= vsv_b) && (vsv_b != vsv_c)) so Result:%d\n",vsv_res);

    return 0;
}
/*output

Enter vsv_b:5

Enter vsv_c:2

If Result = 0, It Is 'FALSE'.
If Result = 1, It Is 'TRUE'.


(vsv_a <= vsv_b) && (vsv_b != vsv_c) so Result:1
(vsv_b >= vsv_a) || (vsv_a == vsv_c) so Result:1
!vsv_a so Result:0
!vsv_b so Result:0
!vsv_c so Result:0
!((vsv_b >= vsv_a) || (vsv_a == vsv_c)) so Result:0
!((vsv_a <= vsv_b) && (vsv_b != vsv_c)) so Result:0

*/