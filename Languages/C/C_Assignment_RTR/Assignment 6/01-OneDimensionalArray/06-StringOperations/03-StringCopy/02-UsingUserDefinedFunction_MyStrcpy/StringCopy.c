#include<stdio.h>
#define VSV_MAX_STRING_LENGTH 512

int main(void){
    
    void vsv_Func_MyStrCpy(char[],char[]);

    char vsv_szOrignalArray[VSV_MAX_STRING_LENGTH];
    char vsv_szCopyArray[VSV_MAX_STRING_LENGTH];


    printf("\nEnter a string:");
    gets_s(vsv_szOrignalArray,VSV_MAX_STRING_LENGTH);

    vsv_Func_MyStrCpy(vsv_szCopyArray,vsv_szOrignalArray);

    printf("\n`vsv_szOrignalArray[]` Entered by you: [%s]\n",vsv_szOrignalArray);
    printf("\n`vsv_szCopyArray[]` Copied String from `vsv_Func_MyStrCpy`: [%s]\n",vsv_szCopyArray);
    

    return 0;
}

void vsv_Func_MyStrCpy(char vsv_szDest[],char vsv_szSrc[]){
    int vsv_Func_MyStrLen(char[]);
   
    int vsv_i,vsv_iStrLen=0;
   
    vsv_iStrLen=vsv_Func_MyStrLen(vsv_szSrc);
   
    for(vsv_i=0;vsv_i<vsv_iStrLen;vsv_i++)
        vsv_szDest[vsv_i]=vsv_szSrc[vsv_i];
    
    vsv_szDest[vsv_i];
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
Enter a string:adsd sdfsds sdcc

`vsv_szOrignalArray[]` Entered by you: [adsd sdfsds sdcc]

`vsv_szCopyArray[]` Copied String from `vsv_Func_MyStrCpy`: [adsd sdfsds sdcca]
*/