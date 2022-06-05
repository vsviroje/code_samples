#include<stdio.h>
#define VSV_MAX_STRING_LENGTH 512

int main(void){
    
    char vsv_szArray1[VSV_MAX_STRING_LENGTH];
    char vsv_szArray2[VSV_MAX_STRING_LENGTH];
  
    printf("\nEnter a 1st string:");
    gets_s(vsv_szArray1,VSV_MAX_STRING_LENGTH);

    printf("\nEnter a 2nd string:");
    gets_s(vsv_szArray2,VSV_MAX_STRING_LENGTH);

    printf("\n`vsv_szArray1[]` Entered by you: [%s]\n",vsv_szArray1);
    printf("\n`vsv_szArray2[]` Entered by you: [%s]\n",vsv_szArray2);

    strcat(vsv_szArray1,vsv_szArray2);

    printf("\n`vsv_szArray1[]` After strcat: [%s]\n",vsv_szArray1);
    printf("\n`vsv_szArray2[]` After strcat: [%s]\n",vsv_szArray2);


    return 0;
}
/*
--Output--
Enter a 1st string:vardhman

Enter a 2nd string: viroje

`vsv_szArray1[]` Entered by you: [vardhman]

`vsv_szArray2[]` Entered by you: [ viroje]

`vsv_szArray1[]` After strcat: [vardhman viroje]

`vsv_szArray2[]` After strcat: [ viroje]
*/