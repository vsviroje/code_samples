#include<stdio.h>
int main(){

    int vsv_a;
    int vsv_b;
    int vsv_res;

    printf("\nEnter vsv_a:");
    scanf("%d",&vsv_a);

    printf("\nEnter vsv_b:");
    scanf("%d",&vsv_b);

    printf("\nIf Result = 0, It Is 'FALSE'."); 
    printf("\nIf Result = 1, It Is 'TRUE'.\n\n");
 
    vsv_res=(vsv_a < vsv_b);
    printf("\n (vsv_a < vsv_b) so result:%d",vsv_res);
    
    vsv_res=(vsv_a > vsv_b);
    printf("\n (vsv_a > vsv_b) so result:%d",vsv_res);
    
    vsv_res=(vsv_a <= vsv_b);
    printf("\n (vsv_a <= vsv_b) so result:%d",vsv_res);

    vsv_res=(vsv_a >= vsv_b);
    printf("\n (vsv_a >= vsv_b) so result:%d",vsv_res);

    vsv_res=(vsv_a == vsv_b);
    printf("\n (vsv_a == vsv_b) so result:%d",vsv_res);
    
    vsv_res=(vsv_a != vsv_b);
    printf("\n (vsv_a != vsv_b) so result:%d",vsv_res);

    return 0;
}
/*output

Enter vsv_a:2

Enter vsv_b:3

If Result = 0, It Is 'FALSE'.
If Result = 1, It Is 'TRUE'.


 (vsv_a < vsv_b) so result:1
 (vsv_a > vsv_b) so result:0
 (vsv_a <= vsv_b) so result:1
 (vsv_a >= vsv_b) so result:0
 (vsv_a == vsv_b) so result:0
 (vsv_a != vsv_b) so result:1
*/