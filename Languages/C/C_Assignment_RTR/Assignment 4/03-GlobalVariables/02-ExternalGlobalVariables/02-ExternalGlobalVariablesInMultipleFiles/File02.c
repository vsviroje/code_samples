#include<stdio.h>
extern int vsv_GlobalCount;

void vsv_ChangeCount03(void){
    vsv_GlobalCount++;
    printf("\nGlobal Count in File 02:[%d]",vsv_GlobalCount);
}
