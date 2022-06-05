#include<stdio.h>
#include<string.h>
#define VSV_MAX_STRING_LENGTH 512

int main(void){
    
    char vsv_szArray[VSV_MAX_STRING_LENGTH];
  
    printf("\nEnter a string:");
    gets_s(vsv_szArray,VSV_MAX_STRING_LENGTH);

    printf("\n`vsv_szArray[]` Entered by you: [%s]\n",vsv_szArray);
    
    printf("The Reversed string is [%s]\n",strrev(vsv_szArray));

    return 0;
}
/*
--Output--
Enter a string:dcba hgfe

`vsv_szArray[]` Entered by you: [dcba hgfe]
The Reversed string is [efgh abcd]

*/