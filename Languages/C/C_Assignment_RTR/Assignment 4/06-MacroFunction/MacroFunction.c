#include<stdio.h>
#define VSV_MAX_NUMBER(vsv_a,vsv_b) ((vsv_a>vsv_b)? vsv_a:vsv_b)
int main(int vsv_argc,char *vsv_argv[],char *vsv_envp[]){
    int vsv_in1,vsv_in2,vsv_ires;
    float vsv_fn1,vsv_fn2,vsv_fres;

    printf("\nEnter Integer Number 1:");
    scanf("%d",&vsv_in1);

    printf("\nEnter Integer Number 2:");
    scanf("%d",&vsv_in2);

    vsv_ires=VSV_MAX_NUMBER(vsv_in1,vsv_in2);
    printf("\nMacro Result of Integer :[%d]",vsv_ires);

    printf("\nEnter Float Number 1:");
    scanf("%f",&vsv_fn1);

    printf("\nEnter Float Number 2:");
    scanf("%f",&vsv_fn2);

    vsv_fres=VSV_MAX_NUMBER(vsv_fn1,vsv_fn2);
    printf("\nMacro Result of Float :[%f]",vsv_fres);

    return(0);
}

/*

Enter Integer Number 1:2

Enter Integer Number 2:7

Macro Result of Integer :[7]
Enter Float Number 1:3.4

Enter Float Number 2:2.2

Macro Result of Float :[3.400000]
*/