#include<stdio.h>
#include<stdlib.h>

#define vsv_MAX_STRING_LEN 512

int main(void){

    int vsv_ifnMyStrLen(char *);

    char *vsv_chArray=NULL;

    int vsv_iStrLen=0;

    vsv_chArray=(char *)malloc(vsv_MAX_STRING_LEN*sizeof(char));

    if(vsv_chArray==NULL){
        printf("\nMemory allocation Failed");
        exit(0);
    }

    printf("\nEnter A string:\n");
    gets_s(vsv_chArray,vsv_MAX_STRING_LEN);

    printf("\nString Entered by you:[%s]\n",vsv_chArray);
    
    vsv_iStrLen=vsv_ifnMyStrLen(vsv_chArray);

    printf("Length of String :[%d]",vsv_iStrLen);

    if(vsv_chArray){
        free(vsv_chArray);
        printf("\nAllocated memory is cleared for vsv_chArray ");
        vsv_chArray=NULL;
    }

    return 0;
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
asdas fgadf

String Entered by you:[asdas fgadf]
Length of String :[11]
Allocated memory is cleared for vsv_chArray
*/