#include<stdio.h>
int vsv_globalCount=0;

int main(void){

    void vsv_ChangeCount01(void);
    void vsv_ChangeCount02(void);
    void vsv_ChangeCount03(void);

    printf("\nmain():vsv_globalCount:[%d]",vsv_globalCount);

    vsv_ChangeCount01();
    vsv_ChangeCount02();
    vsv_ChangeCount03();


    return (0);
}

void vsv_ChangeCount01(void){
    vsv_globalCount=100;
    printf("\nvsv_ChangeCount01():vsv_globalCount:[%d]",vsv_globalCount);
}
void vsv_ChangeCount02(void){
    vsv_globalCount+=1;
    printf("\nvsv_ChangeCount02():vsv_globalCount:[%d]",vsv_globalCount);
}
void vsv_ChangeCount03(void){
    vsv_globalCount+=10;
    printf("\nvsv_ChangeCount03():vsv_globalCount:[%d]",vsv_globalCount);
}
/*

main():vsv_globalCount:[0]
vsv_ChangeCount01():vsv_globalCount:[100]
vsv_ChangeCount02():vsv_globalCount:[101]
vsv_ChangeCount03():vsv_globalCount:[111]
*/