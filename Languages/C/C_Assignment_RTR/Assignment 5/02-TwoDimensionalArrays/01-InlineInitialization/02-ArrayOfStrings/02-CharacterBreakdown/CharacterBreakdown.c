#include<stdio.h>
#define VSV_MAX_STRING_LENGTH 512

int main(void){

    int vsv_MyStrLen(char[]);

    char vsv_strArray[10][15]={"one","two","three","four","five","six","seven","eight","nine","ten"};
    int vsv_iStrLength[10];
    int vsv_strArraySize,vsv_strArrayNumRows;
    int vsv_i,vsv_j;

    vsv_strArraySize=sizeof(vsv_strArray);
    printf("\nvsv_strArraySize:[%d]",vsv_strArraySize);
    
    vsv_strArrayNumRows=vsv_strArraySize/sizeof(vsv_strArray[0]);
    printf("\nvsv_strArrayNumRows:[%d]",vsv_strArrayNumRows);

    for(vsv_i=0;vsv_i<vsv_strArrayNumRows;vsv_i++){
        vsv_iStrLength[vsv_i]= vsv_MyStrLen(vsv_strArray[vsv_i]);
    }
    
    for(vsv_i=0;vsv_i<vsv_strArrayNumRows;vsv_i++){
        printf("\nvsv_strArray[%d]=[%s]",vsv_i,vsv_strArray[vsv_i]);
        for(vsv_j=0;vsv_j<vsv_iStrLength[vsv_i];vsv_j++){
            printf("\nChar [%d]=[%c]",vsv_j,vsv_strArray[vsv_i][vsv_j]);
        }
    }

    return(0);
}

int vsv_MyStrLen(char vsv_str[] ){
    int vsv_i,vsv_strLength=0;
    for(vsv_i=0;vsv_i<VSV_MAX_STRING_LENGTH;vsv_i++){
        if(vsv_str[vsv_i]=='\0')
            break;
        else
            vsv_strLength++;
    }

    return(vsv_strLength);
}
/*

vsv_strArraySize:[150]
vsv_strArrayNumRows:[10]
vsv_strArray[0]=[one]
Char [0]=[o]
Char [1]=[n]
Char [2]=[e]
vsv_strArray[1]=[two]
Char [0]=[t]
Char [1]=[w]
Char [2]=[o]
vsv_strArray[2]=[three]
Char [0]=[t]
Char [1]=[h]
Char [2]=[r]
Char [3]=[e]
Char [4]=[e]
vsv_strArray[3]=[four]
Char [0]=[f]
Char [1]=[o]
Char [2]=[u]
Char [3]=[r]
vsv_strArray[4]=[five]
Char [0]=[f]
Char [1]=[i]
Char [2]=[v]
Char [3]=[e]
vsv_strArray[5]=[six]
Char [0]=[s]
Char [1]=[i]
Char [2]=[x]
vsv_strArray[6]=[seven]
Char [0]=[s]
Char [1]=[e]
Char [2]=[v]
Char [3]=[e]
Char [4]=[n]
vsv_strArray[7]=[eight]
Char [0]=[e]
Char [1]=[i]
Char [2]=[g]
Char [3]=[h]
Char [4]=[t]
vsv_strArray[8]=[nine]
Char [0]=[n]
Char [1]=[i]
Char [2]=[n]
Char [3]=[e]
vsv_strArray[9]=[ten]
Char [0]=[t]
Char [1]=[e]
Char [2]=[n]
*/