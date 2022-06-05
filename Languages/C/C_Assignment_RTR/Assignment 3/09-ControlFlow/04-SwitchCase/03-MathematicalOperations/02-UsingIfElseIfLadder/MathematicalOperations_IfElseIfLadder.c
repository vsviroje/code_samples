#include<stdio.h>
#include<conio.h>

int main(void){

    int vsv_a,vsv_b,vsv_res;

    char vsv_option,vsv_option_division;

    printf("\nEnter value for A:");
    scanf("%d",&vsv_a);

    printf("\nEnter value for B:");
    scanf("%d",&vsv_b);

    printf("\nEnter Option In Character : \n"); 
    printf("'A' or 'a' For Addition : \n"); 
    printf("'S' or 's' For Subtraction : \n"); 
    printf("'M' or 'm' For Multiplication : \n"); 
    printf("'D' or 'd' For Division : \n\n");

    printf("Enter Option : ");
    vsv_option=getch();

    if (vsv_option =='a' || vsv_option =='A' ){
     
        vsv_res=vsv_a+vsv_b;
        printf("\nvsv_res=vsv_a+vsv_b So vsv_res:[%d]",vsv_res);
    
    }else if  (vsv_option =='S' || vsv_option =='s' ){
        
        if(vsv_a>=vsv_b){
            vsv_res=vsv_a-vsv_b;
        }else{
            vsv_res=vsv_b-vsv_a;
        }
        printf("\nAfter Subtracting Smaller Value from Bigger So vsv_res:[%d]",vsv_res);
    
    }else if  (vsv_option =='M' || vsv_option =='m' ){
       
        vsv_res=vsv_a*vsv_b;
        printf("\nvsv_res=vsv_a*vsv_b So vsv_res:[%d]",vsv_res);

    }else if  (vsv_option =='D' || vsv_option =='d' ){        
       
        printf("\nEnter Option In Character : \n");  
        printf("'Q' or 'q' or '/' For Quotient Upon Division : \n");  
        printf("'R' or 'r' or '%%' For Remainder Upon Division : \n");
        printf("Enter Option : ");  
        vsv_option_division=getch();

                if(vsv_option_division == 'Q' || vsv_option_division == 'q'){
                    
                    if(vsv_a>=vsv_b){
                        vsv_res=vsv_a/vsv_b;
                    }else{
                        vsv_res=vsv_b/vsv_a;
                    }
                    printf("\nAfter division Smaller Value from Bigger So Quotient vsv_res:[%d]",vsv_res);
                
                }else if(vsv_option_division == 'R' || vsv_option_division == 'r' || vsv_option_division =='%'){
                    
                    if(vsv_a>=vsv_b){
                        vsv_res=vsv_a%vsv_b;
                    }else{
                        vsv_res=vsv_b%vsv_a;
                    }
                        printf("\nAfter division Smaller Value from Bigger So Remainder vsv_res:[%d]",vsv_res);
                
                }else{
                    
                    printf("\nInvalid Character entered :[%c]",vsv_option_division);       
                
                }            
        }else{
            printf("\nInvalid Character entered :[%c]",vsv_option);
        }

    return (0);
}
/*

Enter value for A:5

Enter value for B:7

Enter Option In Character :
'A' or 'a' For Addition :
'S' or 's' For Subtraction :
'M' or 'm' For Multiplication :
'D' or 'd' For Division :

Enter Option :
vsv_res=vsv_a+vsv_b So vsv_res:[12]
*/