#include<stdio.h>
#define VSV_MAX_STRING_LENGTH 512

int main(void){
    char vsv_szArray[VSV_MAX_STRING_LENGTH];

    printf("\nEnter a string:");
    gets_s(vsv_szArray,VSV_MAX_STRING_LENGTH);

    printf("\nString Entered by you: [%s]\n",vsv_szArray);
    return 0;
}
/*
--Output--
Enter a string:My name is VSViroje

String Entered by you: [My name is VSViroje]

*/