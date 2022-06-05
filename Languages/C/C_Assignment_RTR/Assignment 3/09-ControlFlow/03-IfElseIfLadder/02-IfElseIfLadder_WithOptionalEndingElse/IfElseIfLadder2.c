#include<stdio.h>
int main(void){

    int vsv_n;

    printf("\nEnter the Number:");
    scanf("%d",&vsv_n);

    if (vsv_n<=0)
        printf("\nvsv_n is less than 0\t%d",vsv_n);
        
    else if((vsv_n>0)&&(vsv_n<=100))
        printf("\n(vsv_n>0) && (vsv_n<=100)\t%d",vsv_n);
        
    else if((vsv_n>100)&&(vsv_n<=200))
        printf("\n(vsv_n>100)&&(vsv_n<=200)\t%d",vsv_n);
        
    else if((vsv_n>200)&&(vsv_n<=300))
        printf("\n(vsv_n>200)&&(vsv_n<=300)\t%d",vsv_n);
        
    else if( (vsv_n > 300) && ( vsv_n <=400) )
        printf("\n(vsv_n > 300) && ( vsv_n <=400)\t%d",vsv_n);
        
    else if( (vsv_n>400) && (vsv_n<=500) )
        printf("\n(vsv_n>400) && (vsv_n<=500)\t%d",vsv_n);
        
    else if(vsv_n > 500)
        printf("\n(vsv_n > 500)\t%d",vsv_n);
    
    else
        printf("\nInvalid Value");   

    return(0);
}
/*

Enter the Number:76

(vsv_n>0) && (vsv_n<=100)       76
*/