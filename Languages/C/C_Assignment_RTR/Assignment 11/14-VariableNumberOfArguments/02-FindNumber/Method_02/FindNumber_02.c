#include<stdio.h>
#include<stdarg.h>

#define VSV_NUM_TO_BE_FOUND 3
#define VSV_NUM_ELEMENTS 10

int main(void)
{
    void vsv_fnFindNumber(int,int,...);

    vsv_fnFindNumber(VSV_NUM_TO_BE_FOUND,VSV_NUM_ELEMENTS,1,2,3,3,5,6,3,8,9,3);

    return 0;
}
void vsv_fnFindNumber(int vsv_NumToBeFound,int vsv_NumElements,...)
{
    int vsv_ifn_va_FindNumber(int,int,va_list);

    int vsv_Count=0;
    
    va_list num_list;


    va_start(num_list,vsv_NumElements);

    vsv_Count=vsv_ifn_va_FindNumber(vsv_NumToBeFound,vsv_NumElements,num_list);

    if(vsv_Count==0)
        printf("\nNumber %d Could not be found",vsv_NumToBeFound);
    else
        printf("\nNumber %d Found %d times",vsv_NumToBeFound,vsv_Count);

    va_end(num_list);
}
int vsv_ifn_va_FindNumber(int vsv_NumToBeFound,int vsv_NumElements,va_list num_list){
    int vsv_Count=0;
    int vsv_n;

    while(vsv_NumElements){
        vsv_n=va_arg(num_list,int);
        if(vsv_n==vsv_NumToBeFound)
            vsv_Count++;
        vsv_NumElements--;
    }
    return vsv_Count;
}
/*

Number 3 Found 4 times
*/
