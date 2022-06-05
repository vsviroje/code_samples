#include<stdio.h>
#include<stdarg.h>
int main(void){
    int vsv_ifncalculateSum(int,...);
    int vsv_iAns;

    vsv_iAns=vsv_ifncalculateSum(4,1,2,3,4);
    printf("\nAnser of Sum=%d",vsv_iAns);
    
    vsv_iAns=vsv_ifncalculateSum(10,1,2,3,4,5,6,7,8,0,9);
    printf("\nAnser of Sum=%d",vsv_iAns);
    
    vsv_iAns=vsv_ifncalculateSum(0);
    printf("\nAnser of Sum=%d",vsv_iAns);

    return 0;
}
int vsv_ifncalculateSum(int num,...){
    int vsv_ifn_va_CalculateSum(int,va_list);
    int iSum=0;
    
    va_list num_list;

    va_start(num_list,num);

    iSum=vsv_ifn_va_CalculateSum(num,num_list);
    va_end(num_list);
    return(iSum);

}

int vsv_ifn_va_CalculateSum(int num,va_list num_list)
{
    int vsv_n;
    int vsv_iSumTotal=0;

    while(num){
        vsv_n=va_arg(num_list,int);
        vsv_iSumTotal+=vsv_n;
        num--;
    }

    return (vsv_iSumTotal);
}
/*

Anser of Sum=10
Anser of Sum=45
Anser of Sum=0
*/