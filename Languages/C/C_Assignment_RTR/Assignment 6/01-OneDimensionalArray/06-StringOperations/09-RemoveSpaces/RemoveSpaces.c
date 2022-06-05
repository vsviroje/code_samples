#include<stdio.h>
#define VSV_MAX_STRING_LENGTH 512

int main(void){
    int vsv_Func_MyStrLen(char[]);

    char vsv_szArray[VSV_MAX_STRING_LENGTH];
    char vsv_szArraySpaceRemoved[VSV_MAX_STRING_LENGTH];

    int vsv_iStrLen=0;
    int vsv_i,vsv_j;


    printf("\nEnter a string:");
    gets_s(vsv_szArray,VSV_MAX_STRING_LENGTH);

    printf("\nString Entered by you: [%s]\n",vsv_szArray);
    
    vsv_iStrLen=vsv_Func_MyStrLen(vsv_szArray);
   
    printf("\nLength of string from  `vsv_Func_MyStrLen`:[%d] char\n",vsv_iStrLen);
    
    vsv_j=0;
    for(vsv_i=0;vsv_i<vsv_iStrLen;vsv_i++){
        if(vsv_szArray[vsv_i]==' '){
            continue;
        }else{
            vsv_szArraySpaceRemoved[vsv_j]=vsv_szArray[vsv_i];
            vsv_j++;
        }   
    }
    vsv_szArraySpaceRemoved[vsv_j]='\0';

    printf("\nAfter space removed from string :[%s]\n",vsv_szArraySpaceRemoved);

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
Enter a string:Vardhman S Viroje

String Entered by you: [Vardhman S Viroje]

Length of string from  `vsv_Func_MyStrLen`:[17] char

After space removed from string :[VardhmanSViroje]
*/