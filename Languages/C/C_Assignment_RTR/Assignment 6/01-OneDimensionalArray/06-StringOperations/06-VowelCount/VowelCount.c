#include<stdio.h>
#define VSV_MAX_STRING_LENGTH 512

int main(void){
    int vsv_Func_MyStrLen(char[]);

    char vsv_szArray[VSV_MAX_STRING_LENGTH];
    int vsv_iStrLen=0;
    int vsv_Count_A=0,vsv_Count_U=0,vsv_Count_O=0,vsv_Count_I=0,vsv_Count_E=0;
    int vsv_i;
    printf("\nEnter a string:");
    gets_s(vsv_szArray,VSV_MAX_STRING_LENGTH);

    printf("\nString Entered by you: [%s]\n",vsv_szArray);
    
    vsv_iStrLen=vsv_Func_MyStrLen(vsv_szArray);
    printf("\nLength of string from  `vsv_Func_MyStrLen`:[%d] char\n",vsv_iStrLen);

    for(vsv_i=0;vsv_i<vsv_iStrLen;vsv_i++){
        switch(vsv_szArray[vsv_i]){
            case 'A':
            case 'a':
                vsv_Count_A++;
                break;

            case 'E':
            case 'e':
                vsv_Count_E++;
                break;

            case 'I':
            case 'i':
                vsv_Count_I++;
                break;

            case 'O':
            case 'o':
                vsv_Count_O++;
                break;

            case 'U':
            case 'u':
                vsv_Count_U++;
                break;
            
            default:
                break;
        }   
    }

    printf("\n`A` Count:[%d]",vsv_Count_A);
    printf("\n`E` Count:[%d]",vsv_Count_E);
    printf("\n`I` Count:[%d]",vsv_Count_I);
    printf("\n`O` Count:[%d]",vsv_Count_O);
    printf("\n`U` Count:[%d]",vsv_Count_U);

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

Enter a string:iweroijnvenvuthnklckanwpqpp[     po      kmmkcnjavnncjndjcnbf    nx

String Entered by you: [iweroijnvenvuthnklckanwpqpp[    po      kmmkcnjavnncjndjcnbf    nx]

Length of string from  `vsv_Func_MyStrLen`:[55] char

`A` Count:[2]
`E` Count:[2]
`I` Count:[2]
`O` Count:[2]
`U` Count:[1]

*/