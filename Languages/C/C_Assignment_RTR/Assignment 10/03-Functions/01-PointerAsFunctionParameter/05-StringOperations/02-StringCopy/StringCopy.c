#include<stdio.h>
#include<stdlib.h>

#define vsv_MAX_STRING_LEN 512

int main(void){

    int vsv_ifnMyStrLen(char *);
    void vsv_fnMyStrCpy(char *,char *);

    char *vsv_chArrayOriginal=NULL;
    char *vsv_chArrayCopy=NULL;

    int vsv_iStrLen=0;

    vsv_chArrayOriginal=(char *)malloc(vsv_MAX_STRING_LEN*sizeof(char));

    if(vsv_chArrayOriginal==NULL){
        printf("\nMemory allocation Failed for vsv_chArrayOriginal");
        exit(0);
    }

    printf("\nEnter A string:\n");
    gets_s(vsv_chArrayOriginal,vsv_MAX_STRING_LEN);

    printf("\nString Entered by you:[%s]\n",vsv_chArrayOriginal);
    
    vsv_iStrLen=vsv_ifnMyStrLen(vsv_chArrayOriginal);
    printf("Length of String :[%d]",vsv_iStrLen);

    vsv_chArrayCopy=(char *)malloc(vsv_iStrLen*sizeof(char));
    if(vsv_chArrayCopy==NULL){
        printf("\nMemory allocation Failed for vsv_chArrayCopy");
        exit(0);
    }

    vsv_fnMyStrCpy(vsv_chArrayCopy,vsv_chArrayOriginal);

    printf("\nvsv_chArrayOriginal:[%s]\nvsv_chArrayCopy:[%s]",vsv_chArrayOriginal,vsv_chArrayCopy);

    if(vsv_chArrayCopy){
        free(vsv_chArrayCopy);
        printf("\nAllocated memory is cleared for vsv_chArrayCopy ");
        vsv_chArrayCopy=NULL;
    }
    if(vsv_chArrayOriginal){
        free(vsv_chArrayOriginal);
        printf("\nAllocated memory is cleared for vsv_chArrayOriginal ");
        vsv_chArrayOriginal=NULL;
    }


    return 0;
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
ad aksdk aksdn qqwoepmzc apsdkmc

String Entered by you:[ad aksdk aksdn qqwoepmzc apsdkmc]
Length of String :[32]
vsv_chArrayOriginal:[ad aksdk aksdn qqwoepmzc apsdkmc]
vsv_chArrayCopy:[ad aksdk aksdn qqwoepmzc apsdkmc]
Allocated memory is cleared for vsv_chArrayCopy
Allocated memory is cleared for vsv_chArrayOriginal
*/