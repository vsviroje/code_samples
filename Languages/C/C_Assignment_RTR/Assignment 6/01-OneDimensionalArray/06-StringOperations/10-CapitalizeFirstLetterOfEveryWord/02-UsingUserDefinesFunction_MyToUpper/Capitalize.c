#include<stdio.h>

#define VSV_MAX_STRING_LENGTH 512
#define VSV_SPACE ' '
#define VSV_FULLSTOP '.'
#define VSV_COMMA ','
#define VSV_EXCLAMATION '!'
#define VSV_QUESTION_MARK '?'

int main(void){
    int vsv_Func_MyStrLen(char[]);
    char vsv_Func_MyToUpper(char);

    char vsv_szArray[VSV_MAX_STRING_LENGTH];
    char vsv_szArrayCapitalizedFirstLetterOfEveryWord[VSV_MAX_STRING_LENGTH];

    int vsv_iStrLen=0;
    int vsv_i,vsv_j;


    printf("\nEnter a string:");
    gets_s(vsv_szArray,VSV_MAX_STRING_LENGTH);

    printf("\nString Entered by you: [%s]\n",vsv_szArray);
    
    vsv_iStrLen=vsv_Func_MyStrLen(vsv_szArray);
   
    printf("\nLength of string from  `vsv_Func_MyStrLen`:[%d] char\n",vsv_iStrLen);
    
    vsv_j=0;
    for(vsv_i=0;vsv_i<vsv_iStrLen;vsv_i++){

        if(vsv_i==0){
        
            vsv_szArrayCapitalizedFirstLetterOfEveryWord[vsv_j]=vsv_Func_MyToUpper(vsv_szArray[vsv_i]);
        
        }else if(vsv_szArray[vsv_i]==' '){
           
            vsv_szArrayCapitalizedFirstLetterOfEveryWord[vsv_j]=vsv_szArray[vsv_i];
            vsv_szArrayCapitalizedFirstLetterOfEveryWord[vsv_j+1]=vsv_Func_MyToUpper(vsv_szArray[vsv_i+1]);
           
            vsv_i++;
            vsv_j++;
        }else if( (vsv_szArray[vsv_i]== VSV_FULLSTOP || vsv_szArray[vsv_i]==VSV_COMMA || vsv_szArray[vsv_i]==VSV_EXCLAMATION  || vsv_szArray[vsv_i]== VSV_QUESTION_MARK ) && (  vsv_szArray[vsv_i]!= VSV_SPACE ) ){
            
            vsv_szArrayCapitalizedFirstLetterOfEveryWord[vsv_j]=vsv_szArray[vsv_i];
            vsv_szArrayCapitalizedFirstLetterOfEveryWord[vsv_j+1]= VSV_SPACE;
            vsv_szArrayCapitalizedFirstLetterOfEveryWord[vsv_j+2]=vsv_Func_MyToUpper(vsv_szArray[vsv_i+1]);
           
            vsv_i++;
            vsv_j+=2;
        }else{
        
            vsv_szArrayCapitalizedFirstLetterOfEveryWord[vsv_j]=vsv_szArray[vsv_i];
        
        }
        vsv_j++;   
    }
    vsv_szArrayCapitalizedFirstLetterOfEveryWord[vsv_j]='\0';

    printf("\nAfter Capitalized First Letter Of Every Word from string through vsv_Func_MyToUpper:[%s]\n",vsv_szArrayCapitalizedFirstLetterOfEveryWord);

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
char vsv_Func_MyToUpper(char vsv_ch){
    int vsv_num;
    int vsv_c;

    vsv_num='a'-'A';
    if((int)vsv_ch>=97 && (int)vsv_ch<=122 ){
        vsv_c=(int)vsv_ch-vsv_num;
        return((char)vsv_c);
    }else{
        return vsv_ch;
    }
}

/*
--Output--
Enter a string:asd qwd ASdca qwxascc HAW

String Entered by you: [asd qwd ASdca qwxascc HAW]

Length of string from  `vsv_Func_MyStrLen`:[25] char

After Capitalized First Letter Of Every Word from string through vsv_Func_MyToUpper:[Asd Qwd ASdca Qwxascc HAW]
*/