#include<stdio.h>
#define VSV_MAX_STRING_LENGTH 512

int main(void){
    char vsv_szArray[VSV_MAX_STRING_LENGTH];
    int vsv_iStrLen=0;

    printf("\nEnter a string:");
    gets_s(vsv_szArray,VSV_MAX_STRING_LENGTH);

    printf("\nString Entered by you: [%s]\n",vsv_szArray);
    
    vsv_iStrLen=strlen(vsv_szArray);
    printf("\nLength of string :[%d] char\n",vsv_iStrLen);

    return 0;
}
/*
--Output--
Enter a string:hello world

String Entered by you: [hello world]

Length of string :[11] char

*/