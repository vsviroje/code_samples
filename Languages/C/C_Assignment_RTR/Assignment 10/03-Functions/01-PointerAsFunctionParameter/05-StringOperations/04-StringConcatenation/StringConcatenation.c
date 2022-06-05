#include<stdio.h>
#include<stdlib.h>

#define vsv_MAX_STRING_LEN 512

int main(void){

    int vsv_ifnMyStrLen(char *);
    void vsv_fnMyStrCat(char *,char *);

    char *vsv_chArray1=NULL;
    char *vsv_chArray2=NULL;

    int vsv_iStrLen=0;

    vsv_chArray1=(char *)malloc(vsv_MAX_STRING_LEN * sizeof(char));

    if(vsv_chArray1==NULL){
        printf("\nMemory allocation Failed for vsv_chArray1");
        exit(0);
    }

    printf("\nEnter A string:\n");
    gets_s(vsv_chArray1,vsv_MAX_STRING_LEN);

    printf("\nA String Entered by you:[%s]\n",vsv_chArray1);
    

    vsv_chArray2=(char *)malloc(vsv_iStrLen*sizeof(char));

    if(vsv_chArray2==NULL){
        printf("\nMemory allocation Failed for vsv_chArray2");
        exit(0);
    }

    printf("\nEnter B string:\n");
    gets_s(vsv_chArray2,vsv_MAX_STRING_LEN);

    printf("\nB String Entered by you:[%s]\n",vsv_chArray2);

    vsv_fnMyStrCat(vsv_chArray1,vsv_chArray2);

    printf("\n\nAfter Concatenation");
    printf("\nvsv_chArray1:[%s]\nvsv_chArray2:[%s]",vsv_chArray1,vsv_chArray2);

    if(vsv_chArray1){
        free(vsv_chArray1);
        printf("\nAllocated memory is cleared for vsv_chArray1 ");
        vsv_chArray1=NULL;
    }
    if(vsv_chArray2){
        free(vsv_chArray2);
        printf("\nAllocated memory is cleared for vsv_chArray2 ");
        vsv_chArray2=NULL;
    }


    return 0;
}

void vsv_fnMyStrCat(char *vsv_chArray1,char *vsv_chArray2){
    int vsv_ifnMyStrLen(char *);
    int vsv_iStrLen1=0,vsv_iStrLen2=0;
    int vsv_i,vsv_j;

    vsv_iStrLen1=vsv_ifnMyStrLen(vsv_chArray1);
    vsv_iStrLen2=vsv_ifnMyStrLen(vsv_chArray2);

    for(vsv_i=vsv_iStrLen1,vsv_j=0 ; vsv_j<vsv_iStrLen2 ; vsv_i++,vsv_j++)
        *(vsv_chArray1+vsv_i)=*(vsv_chArray2+vsv_j);

    *(vsv_chArray1+vsv_i)='\0';

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
vardhaman

A String Entered by you:[vardhaman ]

Enter B string:
viroje

B String Entered by you:[viroje]


After Concatenation
vsv_chArray1:[vardhaman viroje]
vsv_chArray2:[viroje]
Allocated memory is cleared for vsv_chArray1
Allocated memory is cleared for vsv_chArray2
*/