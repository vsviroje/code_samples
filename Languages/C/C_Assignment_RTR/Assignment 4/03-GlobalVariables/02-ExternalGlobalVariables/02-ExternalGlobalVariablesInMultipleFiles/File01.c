#include<stdio.h>
extern int vsv_GlobalCount;

void vsv_ChangeCount02(void){
    vsv_GlobalCount++;
    printf("\nGlobal Count in File 01:[%d]",vsv_GlobalCount);
}
