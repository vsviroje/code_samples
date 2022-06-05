#include<stdio.h>
int main(void){
    int vsv_iArray[3][5];
    int vsv_iSize,vsv_iArraySize,vsv_iArrayNumElements,vsv_iArrayNumRows,vsv_iArrayNumCols;
    int vsv_i,vsv_j;

    vsv_iSize=sizeof(int);
    printf("\nvsv_iSize:[%d]",vsv_iSize);

    vsv_iArraySize=sizeof(vsv_iArray);
    printf("\nvsv_iArraySize:[%d]",vsv_iArraySize);
    
    vsv_iArrayNumRows=vsv_iArraySize/sizeof(vsv_iArray[0]);
    printf("\nvsv_iArrayNumRows:[%d]",vsv_iArrayNumRows);

    vsv_iArrayNumCols=sizeof(vsv_iArray[0])/vsv_iSize;
    printf("\nvsv_iArrayNumCols:[%d]",vsv_iArrayNumCols);

    vsv_iArrayNumElements=vsv_iArrayNumRows*vsv_iArrayNumCols;
    printf("\nvsv_iArrayNumElements:[%d]",vsv_iArrayNumElements);

    vsv_iArray[0][0]=1;
    vsv_iArray[0][1]=2;
    vsv_iArray[0][2]=3;
    vsv_iArray[0][3]=4;
    vsv_iArray[0][4]=5;
    
    vsv_iArray[1][0]=6;
    vsv_iArray[1][1]=7;
    vsv_iArray[1][2]=8;
    vsv_iArray[1][3]=9;
    vsv_iArray[1][4]=10;

    vsv_iArray[2][0]=11;
    vsv_iArray[2][1]=12;
    vsv_iArray[2][2]=13;
    vsv_iArray[2][3]=14;
    vsv_iArray[2][4]=15;

    for(vsv_i=0;vsv_i<vsv_iArrayNumRows;vsv_i++){
        for(vsv_j=0;vsv_j<vsv_iArrayNumCols;vsv_j++){
            printf("\niArray[%d][%d]=%d",vsv_i,vsv_j,vsv_iArray[vsv_i][vsv_j]);
        }
        printf("\n");
    }

    

    return(0);
}

/*

vsv_iSize:[4]
vsv_iArraySize:[60]
vsv_iArrayNumRows:[3]
vsv_iArrayNumCols:[5]
vsv_iArrayNumElements:[15]
iArray[0][0]=1
iArray[0][1]=2
iArray[0][2]=3
iArray[0][3]=4
iArray[0][4]=5

iArray[1][0]=6
iArray[1][1]=7
iArray[1][2]=8
iArray[1][3]=9
iArray[1][4]=10

iArray[2][0]=11
iArray[2][1]=12
iArray[2][2]=13
iArray[2][3]=14
iArray[2][4]=15

*/