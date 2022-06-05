#include<stdio.h>
int main(void){

    void vsv_ChangeCount(void);

    extern int vsv_GlobalCount;

    printf("\nValue of vsv_GlobalCount :[%d] before vsv_ChangeCount() call",vsv_GlobalCount);

    vsv_ChangeCount();

    printf("\nValue of vsv_GlobalCount :[%d] after vsv_ChangeCount() call",vsv_GlobalCount);

    return 0;
}
int vsv_GlobalCount=0;
void vsv_ChangeCount(void){
    vsv_GlobalCount=5;
}
/*

Value of vsv_GlobalCount :[0] before vsv_ChangeCount() call
Value of vsv_GlobalCount :[5] after vsv_ChangeCount() call
*/