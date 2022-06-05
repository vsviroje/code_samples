#include<stdio.h>
#define VSV_MAX_STRING_LENGTH 512

int main(void){

    int vsv_MyStrLen(char[]);

    char vsv_strArray[10][15]={"one","two","three","four","five","six","seven","eight","nine","ten"};
    int vsv_cSize,vsv_strArraySize,vsv_strArrayNumElement,vsv_strArrayNumRows,vsv_strArrayNumCols;
    int vsv_i,vsv_strActualNumChars=0;

    vsv_cSize=sizeof(char);
    printf("\nvsv_cSize:[%d]",vsv_cSize);

    vsv_strArraySize=sizeof(vsv_strArray);
    printf("\nvsv_strArraySize:[%d]",vsv_strArraySize);
    
    vsv_strArrayNumRows=vsv_strArraySize/sizeof(vsv_strArray[0]);
    printf("\nvsv_strArrayNumRows:[%d]",vsv_strArrayNumRows);

    vsv_strArrayNumCols=sizeof(vsv_strArray[0])/vsv_cSize;
    printf("\nvsv_strArrayNumCols:[%d]",vsv_strArrayNumCols);

    vsv_strArrayNumElement=vsv_strArrayNumRows*vsv_strArrayNumCols;
    printf("\nvsv_strArrayNumElement:[%d]",vsv_strArrayNumElement);

    for(vsv_i=0;vsv_i<vsv_strArrayNumRows;vsv_i++){
        vsv_strActualNumChars += vsv_MyStrLen(vsv_strArray[vsv_i]);
    }
    printf("\nvsv_strActualNumChars:[%d]\n\n",vsv_strActualNumChars);

    for(vsv_i=0;vsv_i<vsv_strArrayNumRows;vsv_i++){
        printf("\nvsv_strArray[%d]=[%s]",vsv_i,vsv_strArray[vsv_i]);
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

vsv_cSize:[1]
vsv_strArraySize:[150]
vsv_strArrayNumRows:[10]
vsv_strArrayNumCols:[15]
vsv_strArrayNumElement:[150]
vsv_strActualNumChars:[39]


vsv_strArray[0]=[one]
vsv_strArray[1]=[two]
vsv_strArray[2]=[three]
vsv_strArray[3]=[four]
vsv_strArray[4]=[five]
vsv_strArray[5]=[six]
vsv_strArray[6]=[seven]
vsv_strArray[7]=[eight]
vsv_strArray[8]=[nine]
vsv_strArray[9]=[ten]
*/