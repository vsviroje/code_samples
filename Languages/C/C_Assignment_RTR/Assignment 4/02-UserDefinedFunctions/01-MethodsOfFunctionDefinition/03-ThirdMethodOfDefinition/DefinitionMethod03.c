#include<stdio.h>
int main(int vsv_argc,char *vsv_argv[],char *vsv_envp[]){

    void vsv_MyAdd(int,int);
    int vsv_a,vsv_b;

    printf("\nEnter Number A:");
    scanf("%d",&vsv_a);

    printf("\nEnter Number B:");
    scanf("%d",&vsv_b);

    vsv_MyAdd(vsv_a,vsv_b);
    
    return (0);
}

void vsv_MyAdd(int vsv_a,int vsv_b){

    int vsv_sum;
    
    vsv_sum=vsv_a+vsv_b;

    printf("\nIn vsv_MyAdd Sum:[%d]",vsv_sum);

}

/*

Enter Number A:8

Enter Number B:8

In vsv_MyAdd Sum:[16]
*/


