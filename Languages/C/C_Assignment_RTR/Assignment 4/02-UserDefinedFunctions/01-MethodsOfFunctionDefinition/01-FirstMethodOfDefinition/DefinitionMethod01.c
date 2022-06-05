#include<stdio.h>
int main(int vsv_argc,char *vsv_argv[],char *vsv_envp[]){

    void vsv_MyAdd(void);

    vsv_MyAdd();

    return (0);
}

void vsv_MyAdd(void){

    int vsv_a,vsv_b,vsv_sum;
    printf("\nEnter Number A:");
    scanf("%d",&vsv_a);

    printf("\nEnter Number B:");
    scanf("%d",&vsv_b);
    
    vsv_sum=vsv_a+vsv_b;

    printf("\nSum:[%d]",vsv_sum);

}
/*

Enter Number A:1

Enter Number B:2

Sum:[3]
*/