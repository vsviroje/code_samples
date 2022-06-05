#include<stdio.h>
int main(void){

    int vsv_n;

    printf("\nEnter the Number:");
    scanf("%d",&vsv_n);

    if (vsv_n<=0){
        printf("\nvsv_n<=0");
        printf("\t%d",vsv_n);
    }else{

        if((vsv_n>0)&&(vsv_n<=100)){
            printf("\n(vsv_n>0) && (vsv_n<=100)");
            printf("\t%d",vsv_n);
        }else{

            if((vsv_n>100)&&(vsv_n<=200)){
                printf("\n(vsv_n>100)&&(vsv_n<=200)");
                printf("\t%d",vsv_n);
            }else{

                if((vsv_n>200)&&(vsv_n<=300)){
                    printf("\n(vsv_n>200)&&(vsv_n<=300)s");
                    printf("\t%d",vsv_n);
                }else{

                    if( (vsv_n > 300) && ( vsv_n <=400) ){
                        printf("\n(vsv_n > 300) && ( vsv_n <=400)");
                        printf("\t%d",vsv_n);
                    }else{    

                        if( (vsv_n>400) && (vsv_n<=500) ){
                            printf("\n(vsv_n>400) && (vsv_n<=500)");
                            printf("\t%d",vsv_n);
                        }else{

                            printf("\n(vsv_n > 500)");
                            printf("\t%d",vsv_n);
                        }
                    }
                }
            }
        }
    }
    return(0);
}
/*


Enter the Number:34

(vsv_n>0) && (vsv_n<=100)       34
*/