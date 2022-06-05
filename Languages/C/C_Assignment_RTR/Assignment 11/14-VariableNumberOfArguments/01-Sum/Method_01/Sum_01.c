#include<stdio.h>
#include<stdarg.h>
int main(void)
{
    int vsv_ifnCalculateSum(int,...);

    int vsv_iAns;

    vsv_iAns=vsv_ifnCalculateSum(2,3,4);
    printf("\nAnswer of Sum:[%d]",vsv_iAns);

    vsv_iAns=vsv_ifnCalculateSum(10,1,1,1,3,4,1,6,7,9,7);
    printf("\nAnswer of Sum:[%d]",vsv_iAns);
    
    vsv_iAns=vsv_ifnCalculateSum(0);
    printf("\nAnswer of Sum:[%d]",vsv_iAns);

    return 0;
}
    int vsv_ifnCalculateSum(int vsv_iNum,...){
        int vsv_iSum=0,vsv_n;

        va_list num_list;
        va_start(num_list,vsv_iNum);
        
        while(vsv_iNum)
        {
            vsv_n=va_arg(num_list,int);
            vsv_iSum=vsv_iSum+vsv_n;
            vsv_iNum--;
        }

        va_end(num_list);
        return (vsv_iSum);
    }
    /*
    
Answer of Sum:[7]
Answer of Sum:[40]
Answer of Sum:[0]
    */