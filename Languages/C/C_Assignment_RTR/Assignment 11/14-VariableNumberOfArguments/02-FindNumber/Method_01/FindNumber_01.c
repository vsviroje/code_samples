#include<stdio.h>
#include<stdarg.h>

#define VSV_NUM_TO_BE_FOUND 3
#define VSV_NUM_ELEMENTS 10

int main(void)
{
    void vsv_fnFindNumber(int,int,...);

    vsv_fnFindNumber(VSV_NUM_TO_BE_FOUND,VSV_NUM_ELEMENTS,1,2,3,4,5,6,3,8,9,3);

    return 0;
}
void vsv_fnFindNumber(int vsv_NumToBeFound,int vsv_NumElements,...)
{
    int vsv_Count=0;
    int vsv_n;
    va_list num_list;

    va_start(num_list,vsv_NumElements);

    while(vsv_NumElements){
        vsv_n=va_arg(num_list,int);
        if(vsv_n==vsv_NumToBeFound)
            vsv_Count++;
        vsv_NumElements--;
    }

    if(vsv_Count==0)
        printf("\nNumber %d Could not be found",vsv_NumToBeFound);
    else
        printf("\nNumber %d Found %d times",vsv_NumToBeFound,vsv_Count);

    va_end(num_list);
}
/*

Number 3 Found 3 times
*/

