#include<stdio.h>
#define VSV_MAX_STRING_LENGTH 512

int main(void){
    int vsv_Func_MyStrLen(char[]);
    void vsv_Func_MyStrCpy(char[],char[]);

    char vsv_szArray[VSV_MAX_STRING_LENGTH];
    char vsv_szVowelReplaceArray[VSV_MAX_STRING_LENGTH];

    int vsv_iStrLen=0;
    int vsv_i;

    printf("\nEnter a string:");
    gets_s(vsv_szArray,VSV_MAX_STRING_LENGTH);

    printf("\nString Entered by you: [%s]\n",vsv_szArray);
    
    vsv_iStrLen=vsv_Func_MyStrLen(vsv_szArray);
    printf("\nLength of string from  `vsv_Func_MyStrLen`:[%d] char\n",vsv_iStrLen);
    
    vsv_Func_MyStrCpy(vsv_szVowelReplaceArray,vsv_szArray);

    for(vsv_i=0;vsv_i<vsv_iStrLen;vsv_i++){
        switch(vsv_szVowelReplaceArray[vsv_i]){
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
                vsv_szVowelReplaceArray[vsv_i]='*';
                break;
            
            default:
                break;
        }   
    }

    printf("\nString after Replace through copy str: [%s]\n",vsv_szVowelReplaceArray);


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

void vsv_Func_MyStrCpy(char vsv_szDest[],char vsv_szSrc[]){
    int vsv_Func_MyStrLen(char[]);
   
    int vsv_i,vsv_iStrLen=0;
   
    vsv_iStrLen=vsv_Func_MyStrLen(vsv_szSrc);
   
    for(vsv_i=0;vsv_i<vsv_iStrLen;vsv_i++)
        vsv_szDest[vsv_i]=vsv_szSrc[vsv_i];
    
    vsv_szDest[vsv_i];
}
/*
--Output--
String Entered by you: [india you are]

Length of string from  `vsv_Func_MyStrLen`:[13] char

String after Replace through copy str: [*nd** y** *r*]
*/