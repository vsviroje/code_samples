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

    switch(vsv_option){

        case 'A':
        case 'a':
            vsv_res=vsv_a+vsv_b;
            printf("\nvsv_res=vsv_a+vsv_b So vsv_res:[%d]",vsv_res);
            break;
        
        case 'S':
        case 's':
            if(vsv_a>=vsv_b){
                vsv_res=vsv_a-vsv_b;
            }else{
                vsv_res=vsv_b-vsv_a;
            }
            printf("\nAfter Subtracting Smaller Value from Bigger So vsv_res:[%d]",vsv_res);
            break;
        
        case 'M':
        case 'm':
            vsv_res=vsv_a*vsv_b;
            printf("\nvsv_res=vsv_a*vsv_b So vsv_res:[%d]",vsv_res);
            break;
        
        case 'D':
        case 'd':

            printf("\nEnter Option In Character : \n");  
            printf("'Q' or 'q' or '/' For Quotient Upon Division : \n");  
            printf("'R' or 'r' or '%%' For Remainder Upon Division : \n");
            printf("Enter Option : ");  
            vsv_option_division=getch();

                switch(vsv_option_division){
                    case 'Q':
                    case 'q':
                        if(vsv_a>=vsv_b){
                            vsv_res=vsv_a/vsv_b;
                        }else{
                            vsv_res=vsv_b/vsv_a;
                        }
                        printf("\nAfter division Smaller Value from Bigger So Quotient vsv_res:[%d]",vsv_res);
                        break;


                    case 'R':
                    case 'r':
                    case '%':
                        if(vsv_a>=vsv_b){
                            vsv_res=vsv_a%vsv_b;
                        }else{
                            vsv_res=vsv_b%vsv_a;
                        }
                        printf("\nAfter division Smaller Value from Bigger So Remainder vsv_res:[%d]",vsv_res);
                        break;

                    default:
                        printf("\nInvalid Character entered :[%c]",vsv_option_division);
                        break;
                }
            break;
            
        default:
            printf("\nInvalid Character entered :[%c]",vsv_option);
            break;
    }


    return (0);
}
/*

Enter value for A:2

Enter value for B:3

Enter Option In Character :
'A' or 'a' For Addition :
'S' or 's' For Subtraction :
'M' or 'm' For Multiplication :
'D' or 'd' For Division :

Enter Option :
Enter Option In Character :
'Q' or 'q' or '/' For Quotient Upon Division :
'R' or 'r' or '%' For Remainder Upon Division :
Enter Option :
After division Smaller Value from Bigger So Remainder vsv_res:[1]
*/