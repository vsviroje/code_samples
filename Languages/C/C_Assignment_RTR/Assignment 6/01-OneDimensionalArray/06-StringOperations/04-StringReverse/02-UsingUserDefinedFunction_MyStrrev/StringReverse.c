#include<stdio.h>
#define VSV_MAX_STRING_LENGTH 512

int main(void){
    
    void vsv_Func_MyStrRev(char[],char[]);

    char vsv_szOrignalArray[VSV_MAX_STRING_LENGTH];
    char vsv_szReverseArray[VSV_MAX_STRING_LENGTH];


    printf("\nEnter a string:");
    gets_s(vsv_szOrignalArray,VSV_MAX_STRING_LENGTH);

    vsv_Func_MyStrRev(vsv_szReverseArray,vsv_szOrignalArray);

    printf("\n`vsv_szOrignalArray[]` Entered by you: [%s]\n",vsv_szOrignalArray);
    printf("\n`vsv_szReverseArray[]` Reverse String from `vsv_Func_MyStrRev`: [%s]\n",vsv_szReverseArray);
    
    return 0;
}

void vsv_Func_MyStrRev(char vsv_szDest[],char vsv_szSrc[]){
    int vsv_Func_MyStrLen(char[]);
   
    int vsv_i, vsv_j, vsv_ilen, vsv_iStrLen=0;
   
    vsv_iStrLen=vsv_Func_MyStrLen(vsv_szSrc);
   
    vsv_ilen=vsv_iStrLen-1;

    for(vsv_i=0,vsv_j=vsv_ilen; vsv_i<vsv_ilen,vsv_j>=0; vsv_i++,vsv_j--)
        vsv_szDest[vsv_i]=vsv_szSrc[vsv_j];
    
    vsv_szDest[vsv_i]='\0';
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
Enter a string:DASD SD

`vsv_szOrignalArray[]` Entered by you: [DASD SD]

`vsv_szReverseArray[]` Reverse String from `vsv_Func_MyStrRev`: [DS DSAD]
*/