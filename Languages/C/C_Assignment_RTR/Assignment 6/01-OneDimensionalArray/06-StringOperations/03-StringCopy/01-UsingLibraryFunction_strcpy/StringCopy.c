#include<stdio.h>
#define VSV_MAX_STRING_LENGTH 512

int main(void){

    char vsv_szOrignalArray[VSV_MAX_STRING_LENGTH];
    char vsv_szCopyArray[VSV_MAX_STRING_LENGTH];


    printf("\nEnter a string:");
    gets_s(vsv_szOrignalArray,VSV_MAX_STRING_LENGTH);

    strcpy(vsv_szCopyArray,vsv_szOrignalArray);

    printf("\n`vsv_szOrignalArray[]` Entered by you: [%s]\n",vsv_szOrignalArray);
    printf("\n`vsv_szCopyArray[]` Copied String: [%s]\n",vsv_szCopyArray);
    

    return 0;
}


/*
--Output--
Enter a string:random word

`vsv_szOrignalArray[]` Entered by you: [random word]

`vsv_szCopyArray[]` Copied String: [random word]
*/