#include<stdio.h>
#define VSV_MAX_STRING_LENGTH 512

int main(void){
    int vsv_Func_MyStrLen(char[]);
    

    char vsv_szArray[VSV_MAX_STRING_LENGTH];

    int vsv_iStrLen=0;
    int vsv_i;
    int vsv_iWordCount=0,vsv_iSpaceCount=0;

    printf("\nEnter a string:");
    gets_s(vsv_szArray,VSV_MAX_STRING_LENGTH);

    printf("\nString Entered by you: [%s]\n",vsv_szArray);
    
    vsv_iStrLen=vsv_Func_MyStrLen(vsv_szArray);
    printf("\nLength of string from  `vsv_Func_MyStrLen`:[%d] char\n",vsv_iStrLen);
    

    for(vsv_i=0;vsv_i<vsv_iStrLen;vsv_i++){
        switch(vsv_szArray[vsv_i]){
           case ' ':
                vsv_iSpaceCount++;
                break;
            default:
                break;
        }   
    }
    
    vsv_iWordCount=vsv_iSpaceCount+1;

    printf("\nNumber of Space in str: [%d]\n",vsv_iSpaceCount);
    printf("\nNumber of Word in str: [%d]\n",vsv_iWordCount);

    return 0;
}

int vsv_Func_MyStrLen(char vsv_szStr[])
{
    int vsv_i,vsv_iStr_len=0;
    for(vsv_i=0;vsv_i<VSV_MAX_STRING_LENGTH;vsv_i++){
        if(vsv_szStr[vsv_i]=='\0')
            break;
        else
            vsv_iStr_len++;
    }

    return (vsv_iStr_len);
}

/*
--Output--
Enter a string:asdasc dff ajdn d adkjnq

String Entered by you: [asdasc dff ajdn d adkjnq]

Length of string from  `vsv_Func_MyStrLen`:[24] char

Number of Space in str: [4]

Number of Word in str: [5]
*/