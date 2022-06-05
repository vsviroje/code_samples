#include<stdio.h>
int main(int vsv_argc,char *vsv_argv[],char *vsv_envp[]){

    int vsv_MyAdd(int,int);
    int vsv_a,vsv_b,vsv_ret;

    printf("\nEnter Number A:");
    scanf("%d",&vsv_a);

    printf("\nEnter Number B:");
    scanf("%d",&vsv_b);

    vsv_ret=vsv_MyAdd(vsv_a,vsv_b);
    printf("\nIn Main Sum:[%d]",vsv_ret);
    return (0);
}

int vsv_MyAdd(int vsv_a,int vsv_b){

    int vsv_sum;
    
    vsv_sum=vsv_a+vsv_b;

    
    return (vsv_sum);

}
/*

Enter Number A:54

Enter Number B:1

In Main Sum:[55]
*/