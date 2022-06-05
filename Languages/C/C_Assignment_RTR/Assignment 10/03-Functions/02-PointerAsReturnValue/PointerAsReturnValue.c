#include<stdio.h>
#include<stdlib.h>
#define vsv_MAX_STR_LEN 512

int main(void){

    char* vsv_pcfnReplaceVowelsWithHashSymbol(char *);
    char vsv_cStr[vsv_MAX_STR_LEN];
    char *vsv_pcReplaceStr=NULL;

    printf("\nEnter String:\n");
    gets_s(vsv_cStr,vsv_MAX_STR_LEN);

    vsv_pcReplaceStr=vsv_pcfnReplaceVowelsWithHashSymbol(vsv_cStr);
    if(vsv_pcReplaceStr==NULL)
    {
        printf("\nFunc vsv_pcfnReplaceVowelsWithHashSymbol has failed to replace string");
        exit(0);
    }

    printf("\nReplaced String is :[%s]",vsv_pcReplaceStr);

    if(vsv_pcReplaceStr){
        free(vsv_pcReplaceStr);
        vsv_pcReplaceStr=NULL;
    }

    return 0;
}
char* vsv_pcfnReplaceVowelsWithHashSymbol(char *vsv_cStr){
    void vsv_fnMyStrCpy(char *,char *);
    int vsv_ifnMyStrLen(char *);
    char *vsv_pcReplaceStr=NULL;
    int vsv_i;

    vsv_pcReplaceStr=(char *)malloc(vsv_ifnMyStrLen(vsv_cStr)*sizeof(char));

    if(vsv_pcReplaceStr==NULL){
        printf("\nFailed to allocate memory for vsv_pcReplaceStr");
        return  (NULL);
    }

    vsv_fnMyStrCpy(vsv_pcReplaceStr,vsv_cStr);
    for(vsv_i=0;vsv_i<vsv_ifnMyStrLen(vsv_pcReplaceStr);vsv_i++){

        switch(vsv_pcReplaceStr[vsv_i]){
            case'A':
            case'a':
            case'E':
            case'e':
            case'I':
            case'i':
            case'O':
            case'o':
            case'U':
            case'u':
                vsv_pcReplaceStr[vsv_i]='#';
                break;
            default:
                break;
        }

    }

    return(vsv_pcReplaceStr);

}


void vsv_fnMyStrCpy(char *vsv_chArrayCopy,char *vsv_chArrayOriginal){
    int vsv_ifnMyStrLen(char *);
    int vsv_iStrLen=0;
    int vsv_i;

    vsv_iStrLen=vsv_ifnMyStrLen(vsv_chArrayOriginal);

    for(vsv_i=0;vsv_i<vsv_iStrLen;vsv_i++)
        *(vsv_chArrayCopy+vsv_i)=*(vsv_chArrayOriginal+vsv_i);

    *(vsv_chArrayCopy+vsv_i)='\0';

}

int vsv_ifnMyStrLen(char *vsv_chArray){
    int vsv_j;
    int vsv_iStrLen=0;

    for(vsv_j=0;vsv_j<vsv_MAX_STR_LEN;vsv_j++){
        if(*(vsv_chArray+vsv_j)=='\0')
            break;
        else
            vsv_iStrLen++;
    }

    return(vsv_iStrLen);
}
/*

Enter String:
vardhman viroje

Replaced String is :[v#rdhm#n v#r#j#]
*/