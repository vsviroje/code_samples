#include<stdio.h>
#define VSV_MAX_STRING_LENGTH 512

int main(void){
    void vsv_MyStrCpy(char[],char[]);

    char vsv_szArray[5][10];

    int vsv_cSize,vsv_szArraySize,vsv_szArrayNumElements,vsv_szArrayNumRows,vsv_szArrayNumCols;
    int vsv_i;

    vsv_cSize=sizeof(char);
    printf("\nvsv_cSize:[%d]",vsv_cSize);

    vsv_szArraySize=sizeof(vsv_szArray);
    printf("\nvsv_szArraySize:[%d]",vsv_szArraySize);

    vsv_szArrayNumRows=vsv_szArraySize/sizeof(vsv_szArray[0]);
    printf("\nvsv_szArrayNumRows:[%d]",vsv_szArrayNumRows);

    vsv_szArrayNumCols=sizeof(vsv_szArray[0])/vsv_cSize;
    printf("\nvsv_szArrayNumCols:[%d]",vsv_szArrayNumCols);

    vsv_szArrayNumElements=vsv_szArrayNumRows*vsv_szArrayNumCols;
    printf("\nvsv_szArrayNumElements:[%d]\n\n",vsv_szArrayNumElements);

    vsv_MyStrCpy(vsv_szArray[0],"One");
    vsv_MyStrCpy(vsv_szArray[1],"Two");
    vsv_MyStrCpy(vsv_szArray[2],"Three");
    vsv_MyStrCpy(vsv_szArray[3],"Four");
    vsv_MyStrCpy(vsv_szArray[4],"Five");

    printf("\n\nString in 2d char array:\n");
    for(vsv_i=0;vsv_i<vsv_szArrayNumRows;vsv_i++){
        printf("\t%s",vsv_szArray[vsv_i]);
    }

    return(0);
}

void vsv_MyStrCpy(char vsv_szDest[],char vsv_szSrc[]){
    int vsv_MyStrlen(char[]);

    int vsv_iStrLength=0;
    int vsv_j;

    vsv_iStrLength=vsv_MyStrLen(vsv_szSrc);
    for(vsv_j=0 ; vsv_j<vsv_iStrLength ; vsv_j++){
        vsv_szDest[vsv_j]=vsv_szSrc[vsv_j];
    }
    vsv_szDest[vsv_j]='\0';

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
vsv_szArraySize:[50]
vsv_szArrayNumRows:[5]
vsv_szArrayNumCols:[10]
vsv_szArrayNumElements:[50]



String in 2d char array:
        One     Two     Three   Four    Five
*/