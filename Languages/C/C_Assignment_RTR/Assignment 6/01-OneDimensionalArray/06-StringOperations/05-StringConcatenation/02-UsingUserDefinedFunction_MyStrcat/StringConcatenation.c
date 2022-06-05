#include<stdio.h>
#define VSV_MAX_STRING_LENGTH 512

int main(void){
    
    void vsv_Func_MyStrCat(char[],char[]);

    char vsv_szArray1[VSV_MAX_STRING_LENGTH];
    char vsv_szArray2[VSV_MAX_STRING_LENGTH];
  
    printf("\nEnter a 1st string:");
    gets_s(vsv_szArray1,VSV_MAX_STRING_LENGTH);

    printf("\nEnter a 2nd string:");
    gets_s(vsv_szArray2,VSV_MAX_STRING_LENGTH);

    printf("\n`vsv_szArray1[]` Entered by you: [%s]\n",vsv_szArray1);
    printf("\n`vsv_szArray2[]` Entered by you: [%s]\n",vsv_szArray2);

    vsv_Func_MyStrCat(vsv_szArray1,vsv_szArray2);

    printf("\n`vsv_szArray1[]` After strcat through `vsv_Func_MyStrCat`: [%s]\n",vsv_szArray1);
    printf("\n`vsv_szArray2[]` After strcat through `vsv_Func_MyStrCat`: [%s]\n",vsv_szArray2);

    return 0;
}
void vsv_Func_MyStrCat(char vsv_szDest[],char vsv_szSrc[]){
    int vsv_Func_MyStrLen(char[]);
    int vsv_i,vsv_j,vsv_iStrLenSrc=0,vsv_iStrLenDest=0;
    
    vsv_iStrLenSrc=vsv_Func_MyStrLen(vsv_szSrc);
    vsv_iStrLenDest=vsv_Func_MyStrLen(vsv_szDest);

    for(vsv_i=vsv_iStrLenDest,vsv_j=0 ; vsv_j<vsv_iStrLenSrc ; vsv_j++,vsv_i++){
        vsv_szDest[vsv_i]=vsv_szSrc[vsv_j];
    }

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
Enter a 1st string:vsv

Enter a 2nd string:asv

`vsv_szArray1[]` Entered by you: [vsv ]

`vsv_szArray2[]` Entered by you: [asv]

`vsv_szArray1[]` After strcat through `vsv_Func_MyStrCat`: [vsv asv]

`vsv_szArray2[]` After strcat through `vsv_Func_MyStrCat`: [asv]
*/