#include<stdio.h>
int main(void){
    int vsv_num;
    int *vsv_ptr=NULL;

    vsv_num=51;
    vsv_ptr=&vsv_num;

    printf("\nvsv_num=[%d]",vsv_num);
    printf("\n&vsv_num=[%p]",&vsv_num);
    printf("\n*(&vsv_num)=[%d]",*(&vsv_num));
    printf("\nvsv_ptr=[%p]",vsv_ptr);
    printf("\n*vsv_ptr=[%d]",*vsv_ptr);

    printf("\n\n(vsv_ptr+10)=%p",(vsv_ptr+10));
    printf("\n*(vsv_ptr+10)=%d",*(vsv_ptr+10));
    printf("\n(*vsv_ptr+10)=%d",(*vsv_ptr+10));
    
    ++*vsv_ptr;
    printf("\n\n++*vsv_ptr=%d",*vsv_ptr);

    *vsv_ptr++;
    printf("\n\n*vsv_ptr++=%d",*vsv_ptr);

    vsv_ptr=&vsv_num;
    (*vsv_ptr)++;
    printf("\n\n(*vsv_ptr)++=%d",(*vsv_ptr)++);

    return 0;
}
/*

vsv_num=[51]
&vsv_num=[000000CFDF6FFDF0]
*(&vsv_num)=[51]
vsv_ptr=[000000CFDF6FFDF0]
*vsv_ptr=[51]

(vsv_ptr+10)=000000CFDF6FFE18
*(vsv_ptr+10)=0
(*vsv_ptr+10)=61

++*vsv_ptr=52

*vsv_ptr++=0

(*vsv_ptr)++=53
*/