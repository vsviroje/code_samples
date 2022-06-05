#include<stdio.h>
int main(int vsv_argc,char *vsv_argv[],char *vsv_envp[]){

    void vsv_MyAdd(void);
    int vsv_MySub(void);
    void vsv_MyMult(int,int);
    int vsv_MyDiv(int,int);

    int vsv_a,vsv_b,vsv_ret;

    //Add------------------------
    printf("\nAddition Operation:");
    vsv_MyAdd();
    //--------------------------------------
    
    //Sub-----------------------------------
    printf("\nSubtraction Operation:");
    vsv_ret=vsv_MySub();
    printf("\nIn Main Subtraction:[%d]",vsv_ret);

    //Mul---------------------------
    printf("\nMultiplication Operation:");
    printf("\nEnter Number A:");
    scanf("%d",&vsv_a);

    printf("\nEnter Number B:");
    scanf("%d",&vsv_b);
    
    vsv_MyMult(vsv_a,vsv_b);
    //--------------------------------------

    //Div-------------------------------
    printf("\nDivision Operation:");
    printf("\nEnter Number A:");
    scanf("%d",&vsv_a);

    printf("\nEnter Number B:");
    scanf("%d",&vsv_b);

    vsv_ret=vsv_MyDiv(vsv_a,vsv_b);
    printf("\nIn Main Division:[%d]",vsv_ret);
    //--------------------------------------

    return (0);
}

int vsv_MyDiv(int vsv_a,int vsv_b){

    int vsv_div;
    if (vsv_b>vsv_a){
        vsv_div=vsv_b/vsv_a;
    }else{
        vsv_div=vsv_a/vsv_b;
    }
    return (vsv_div);


}

void vsv_MyMult(int vsv_a,int vsv_b){
    int vsv_mult;
    vsv_mult=vsv_a*vsv_b;
    printf("\nvsv_MyMult Multiplicatiop:[%d]",vsv_mult);

}

int vsv_MySub(void){
    int vsv_a,vsv_b,vsv_sub;
    
    printf("\nEnter Number A:");
    scanf("%d",&vsv_a);

    printf("\nEnter Number B:");
    scanf("%d",&vsv_b);
    
    vsv_sub=vsv_a-vsv_b;

    return (vsv_sub);
 }
void vsv_MyAdd(void){

    int vsv_a,vsv_b,vsv_sum;
    
    printf("\nEnter Number A:");
    scanf("%d",&vsv_a);

    printf("\nEnter Number B:");
    scanf("%d",&vsv_b);
    
    vsv_sum=vsv_a+vsv_b;

    printf("\nvsv_MyAdd Sum:[%d]",vsv_sum);

}
/*

Addition Operation:
Enter Number A:2

Enter Number B:1

vsv_MyAdd Sum:[3]
Subtraction Operation:
Enter Number A:4

Enter Number B:2

In Main Subtraction:[2]
Multiplication Operation:
Enter Number A:5

Enter Number B:3

vsv_MyMult Multiplicatiop:[15]
Division Operation:
Enter Number A:4

Enter Number B:3

In Main Division:[1]
*/