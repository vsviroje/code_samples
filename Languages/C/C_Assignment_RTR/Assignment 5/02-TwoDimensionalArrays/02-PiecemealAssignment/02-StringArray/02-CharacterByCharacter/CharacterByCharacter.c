#include<stdio.h>
#define VSV_MAX_STRING_LENGTH 512
int main(void){
    char vsv_strArray[5][10];
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
    printf("\nvsv_strArrayNumElement:[%d]\n",vsv_strArrayNumElement);


    vsv_strArray[0][0]='o';
    vsv_strArray[0][1]='n';
    vsv_strArray[0][2]='e';
    vsv_strArray[0][3]='\0';

    vsv_strArray[1][0]='t';
    vsv_strArray[1][1]='w';
    vsv_strArray[1][2]='o';
    vsv_strArray[1][3]='\0';

    vsv_strArray[2][0]='t';
    vsv_strArray[2][1]='h';
    vsv_strArray[2][2]='r';
    vsv_strArray[2][3]='e';
    vsv_strArray[2][4]='e';
    vsv_strArray[2][5]='\0';

    vsv_strArray[3][0]='f';
    vsv_strArray[3][1]='o';
    vsv_strArray[3][2]='u';
    vsv_strArray[3][3]='r';
    vsv_strArray[3][4]='\0';

    vsv_strArray[4][0]='f';
    vsv_strArray[4][1]='i';
    vsv_strArray[4][2]='v';
    vsv_strArray[4][3]='e';
    vsv_strArray[4][4]='\0';


    for(vsv_i=0;vsv_i<vsv_strArrayNumRows;vsv_i++){
        printf("%s\t",vsv_strArray[vsv_i]);
    }

    return(0);
}
/*

vsv_cSize:[1]
vsv_strArraySize:[50]
vsv_strArrayNumRows:[5]
vsv_strArrayNumCols:[10]
vsv_strArrayNumElement:[50]
one     two     three   four    five
*/