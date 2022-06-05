#include<stdio.h>
#include<stdlib.h>
#define vsv_MAX_STRING_LEN 512

int main(void){

    int vsv_ifnMyStrLen(char *);
    void vsv_fnMyStrRev(char *,char *);

    char *vsv_chArrayOriginal=NULL;
    char *vsv_chArrayReversed=NULL;

    int vsv_iStrLen=0;

    vsv_chArrayOriginal=(char *)malloc(vsv_MAX_STRING_LEN * sizeof(char));

    if(vsv_chArrayOriginal==NULL){
        printf("\nMemory allocation Failed for vsv_chArrayOriginal");
        exit(0);
    }

    printf("\nEnter A string:\n");
    gets_s(vsv_chArrayOriginal,vsv_MAX_STRING_LEN);

    printf("\nString Entered by you:[%s]\n",vsv_chArrayOriginal);
    
    vsv_iStrLen=vsv_ifnMyStrLen(vsv_chArrayOriginal);
    printf("Length of String :[%d]",vsv_iStrLen);

    vsv_chArrayReversed=(char *)malloc(vsv_iStrLen*sizeof(char));

    if(vsv_chArrayReversed==NULL){
        printf("\nMemory allocation Failed for vsv_chArrayReversed");
        exit(0);
    }

    vsv_fnMyStrRev(vsv_chArrayReversed,vsv_chArrayOriginal);

    printf("\nvsv_chArrayOriginal:[%s]\nvsv_chArrayReversed:[%s]",vsv_chArrayOriginal,vsv_chArrayReversed);

    if(vsv_chArrayReversed){
        free(vsv_chArrayReversed);
        printf("\nAllocated memory is cleared for vsv_chArrayReversed ");
        vsv_chArrayReversed=NULL;
    }
    if(vsv_chArrayOriginal){
        free(vsv_chArrayOriginal);
        printf("\nAllocated memory is cleared for vsv_chArrayOriginal ");
        vsv_chArrayOriginal=NULL;
    }


    return 0;
}

void vsv_fnMyStrRev(char *vsv_chArrayReversed,char *vsv_chArrayOriginal){
    int vsv_ifnMyStrLen(char *);
    int vsv_iStrLen=0;
    int vsv_i,vsv_j;

    vsv_iStrLen=vsv_ifnMyStrLen(vsv_chArrayOriginal);

    for(vsv_i=0,vsv_j=(vsv_iStrLen-1) ; vsv_i<vsv_iStrLen,vsv_j>=0 ; vsv_i++,vsv_j--)
        *(vsv_chArrayReversed+vsv_i)=*(vsv_chArrayOriginal+vsv_j);

    *(vsv_chArrayReversed+vsv_i)='\0';

}

int vsv_ifnMyStrLen(char *vsv_chArray){
    int vsv_j;
    int vsv_iStrLen=0;

    for(vsv_j=0;vsv_j<vsv_MAX_STRING_LEN;vsv_j++){
        if(*(vsv_chArray+vsv_j)=='\0')
            break;
        else
            vsv_iStrLen++;
    }

    return(vsv_iStrLen);
}

/*

Enter A string:
vardhaman viroje

String Entered by you:[vardhaman viroje]
Length of String :[16]
vsv_chArrayOriginal:[vardhaman viroje]
vsv_chArrayReversed:[ejoriv namahdrav]
Allocated memory is cleared for vsv_chArrayReversed
Allocated memory is cleared for vsv_chArrayOriginal
*/