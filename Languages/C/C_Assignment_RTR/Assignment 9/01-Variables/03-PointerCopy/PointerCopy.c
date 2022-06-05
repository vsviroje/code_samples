#include<stdio.h>
int main(void){

    int vsv_num;
    int *vsv_ptr=NULL;
    int *vsv_CopyPtr=NULL;

    vsv_num=51;
    vsv_ptr=&vsv_num;

    printf("\n Before vsv_CopyPtr=vsv_ptr ");
    printf("\nvsv_num=[%d]",vsv_num);
    printf("\n&vsv_num=[%p]",&vsv_num);
    printf("\n*(&vsv_num)=[%d]",*(&vsv_num));
    printf("\nvsv_ptr=[%p]",vsv_ptr);
    printf("\n*vsv_ptr=[%d]",*vsv_ptr);
    
    vsv_CopyPtr=vsv_ptr;
    printf("\n\n After vsv_CopyPtr=vsv_ptr ");
    printf("\nvsv_num=[%d]",vsv_num);
    printf("\n&vsv_num=[%p]",&vsv_num);
    printf("\n*(&vsv_num)=[%d]",*(&vsv_num));
    printf("\nvsv_ptr=[%p]",vsv_ptr);
    printf("\n*vsv_ptr=[%d]",*vsv_ptr);
    printf("\nvsv_CopyPtr=[%p]",vsv_CopyPtr);
    printf("\n*vsv_CopyPtr=[%d]",*vsv_CopyPtr);
    
    return (0);
}
/*

 Before vsv_CopyPtr=vsv_ptr
vsv_num=[51]
&vsv_num=[0000005CEAB9FDE0]
*(&vsv_num)=[51]
vsv_ptr=[0000005CEAB9FDE0]
*vsv_ptr=[51]

 After vsv_CopyPtr=vsv_ptr
vsv_num=[51]
&vsv_num=[0000005CEAB9FDE0]
*(&vsv_num)=[51]
vsv_ptr=[0000005CEAB9FDE0]
*vsv_ptr=[51]
vsv_CopyPtr=[0000005CEAB9FDE0]
*vsv_CopyPtr=[51]
*/