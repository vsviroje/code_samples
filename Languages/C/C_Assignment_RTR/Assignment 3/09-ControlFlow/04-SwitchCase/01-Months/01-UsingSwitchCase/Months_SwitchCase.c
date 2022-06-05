#include<stdio.h>
int main(void){

    int vsv_n;

    printf("\nEnter no from 1 to 12:");
    scanf("%d",&vsv_n);
    
    switch (vsv_n)
    {
        case 1:
            printf("Month is Jan :[%d]",vsv_n);
            break;
        case 2:
            printf("Month is Feb :[%d]",vsv_n);
            break;
        case 3:
            printf("Month is Mar :[%d]",vsv_n);
            break;
        case 4:
            printf("Month is Apr :[%d]",vsv_n);
            break;
        case 5:
            printf("Month is May :[%d]",vsv_n);
            break;
        case 6:
            printf("Month is Jun :[%d]",vsv_n);
            break;
        case 7:
            printf("Month is Jul :[%d]",vsv_n);
            break;
        case 8:
            printf("Month is Aug :[%d]",vsv_n);
            break;
        case 9:
            printf("Month is Sep :[%d]",vsv_n);
            break;
        case 10:
            printf("Month is Oct :[%d]",vsv_n);
            break;
        case 11:
            printf("Month is Nov :[%d]",vsv_n);
            break;
        case 12:
            printf("Month is Dec :[%d]",vsv_n);
            break;
        default:
            printf("Month number is Invalid :[%d]",vsv_n);
            break;
    }

    return (0);
}
/*

Enter no from 1 to 12:3
Month is Mar :[3]
*/