#include<stdio.h>
int vsv_GlobalCount=0;
int main(void){

    void vsv_ChangeCount01(void);
    void vsv_ChangeCount02(void);
    void vsv_ChangeCount03(void);

    vsv_ChangeCount01();
    vsv_ChangeCount02();
    vsv_ChangeCount03();

    return (0);
}
void vsv_ChangeCount01(void){
    vsv_GlobalCount++;
    printf("\nGlobal Count in Main File:[%d]",vsv_GlobalCount);
}
/*
E:\RTR2020\Codes\Assignment_Code\Assignment 4\RTR2020_C_Snippets_Upload_04_01.06.2020\10-Functions\03-GlobalVariables\02-ExternalGlobalVariables\02-ExternalGlobalVariablesInMultipleFiles>link ExternalGlobalVariablesInMultiplesFiles.obj File01.obj File02.obj
Microsoft (R) Incremental Linker Version 14.25.28614.0
Copyright (C) Microsoft Corporation.  All rights reserved.


E:\RTR2020\Codes\Assignment_Code\Assignment 4\RTR2020_C_Snippets_Upload_04_01.06.2020\10-Functions\03-GlobalVariables\02-ExternalGlobalVariables\02-ExternalGlobalVariablesInMultipleFiles>ExternalGlobalVariablesInMultiplesFiles.exe

Global Count in Main File:[1]
Global Count in File 01:[2]
Global Count in File 02:[3]
*/