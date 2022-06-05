#include<stdio.h>
int main(void){

    int vsv_iArray[5][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}};
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

    //Row1
    printf("\n[0][0]=%d",vsv_iArray[0][0]);
    printf("\n[0][1]=%d",vsv_iArray[0][1]);
    printf("\n[0][2]=%d",vsv_iArray[0][2]);
    //Row2
    printf("\n[1][0]=%d",vsv_iArray[1][0]);
    printf("\n[1][1]=%d",vsv_iArray[1][1]);
    printf("\n[1][2]=%d",vsv_iArray[1][2]);
    //Row3
    printf("\n[2][0]=%d",vsv_iArray[2][0]);
    printf("\n[2][1]=%d",vsv_iArray[2][1]);
    printf("\n[2][2]=%d",vsv_iArray[2][2]);
    //Row4
    printf("\n[3][0]=%d",vsv_iArray[3][0]);
    printf("\n[3][1]=%d",vsv_iArray[3][1]);
    printf("\n[3][2]=%d",vsv_iArray[3][2]);
    //Row5
    printf("\n[4][0]=%d",vsv_iArray[4][0]);
    printf("\n[4][1]=%d",vsv_iArray[4][1]);
    printf("\n[4][2]=%d",vsv_iArray[4][2]);

    return(0);
}
/*

vsv_iSize:[4]
vsv_iArraySize:[60]
vsv_iArrayNumRows:[5]
vsv_iArrayNumCols:[3]
vsv_iArrayNumElements:[15]
[0][0]=1
[0][1]=2
[0][2]=3
[1][0]=4
[1][1]=5
[1][2]=6
[2][0]=7
[2][1]=8
[2][2]=9
[3][0]=10
[3][1]=11
[3][2]=12
[4][0]=13
[4][1]=14
[4][2]=15
*/