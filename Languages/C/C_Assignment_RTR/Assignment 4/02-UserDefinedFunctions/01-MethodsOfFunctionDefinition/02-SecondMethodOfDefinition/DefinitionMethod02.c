#include<stdio.h>
int main(int vsv_argc,char *vsv_argv[],char *vsv_envp[]){

    int vsv_MyAdd(void);

    int vsv_ret;
    vsv_ret=vsv_MyAdd();
    printf("\nIn main Sum:[%d]",vsv_ret);
    return (0);
}

int vsv_MyAdd(void){

    int vsv_a,vsv_b,vsv_sum;
    printf("\nEnter Number A:");
    scanf("%d",&vsv_a);

    printf("\nEnter Number B:");
    scanf("%d",&vsv_b);
    
    vsv_sum=vsv_a+vsv_b;

    return (vsv_sum);

}
/*

Enter Number A:6

Enter Number B:3

In main Sum:[9]
*/