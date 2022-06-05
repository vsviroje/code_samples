#include<stdio.h>
int main(void){

    int vsv_iArray[5][3][2]={   {{1,2},{3,4},{5,6}},
                                {{7,8},{9,10},{11,12}},
                                {{13,14},{15,16},{17,18}},
                                {{19,20},{21,22},{23,24}},
                                {{25,26},{27,28},{29,30}}   };


    int vsv_iSize,vsv_iArraySize;
    int vsv_i,vsv_j,vsv_k;
    int vsv_iArrayNumElements,vsv_iArrayWidth,vsv_iArrayHeight,vsv_iArrayDepth;
    vsv_iSize=sizeof(int);
    printf("\nvsv_iSize:[%d]",vsv_iSize);

    vsv_iArraySize=sizeof(vsv_iArray);
    printf("\nvsv_iArraySize:[%d]",vsv_iArraySize);

    vsv_iArrayWidth=vsv_iArraySize/sizeof(vsv_iArray[0]);
    printf("\nvsv_iArrayWidth:[%d]",vsv_iArrayWidth);
    
    vsv_iArrayHeight=sizeof(vsv_iArray[0])/sizeof(vsv_iArray[0][0]);
    printf("\nvsv_iArrayHeight:[%d]",vsv_iArrayHeight);
    
    vsv_iArrayDepth=sizeof(vsv_iArray[0][0])/vsv_iSize;
    printf("\nvsv_iArrayDepth:[%d]",vsv_iArrayDepth);
    

    vsv_iArrayNumElements=vsv_iArrayWidth*vsv_iArrayHeight*vsv_iArrayDepth;
    printf("\nvsv_iArrayNumElements:[%d]",vsv_iArrayNumElements);

    printf("\n3d Array[0]:");

    for(vsv_i=0;vsv_i<vsv_iArrayWidth;vsv_i++){
        printf("\n\t2D array[%d]",vsv_i);
        for(vsv_j=0;vsv_j<vsv_iArrayHeight;vsv_j++){
            for(vsv_k=0;vsv_k<vsv_iArrayDepth;vsv_k++){
                printf("\n\t\t[%d][%d][%d]=%d",vsv_i,vsv_j,vsv_k,vsv_iArray[vsv_i][vsv_j][vsv_k]);
            }
        }
    } 

    return 0;
}
/*
~~Output~~

vsv_iSize:[4]
vsv_iArraySize:[120]
vsv_iArrayWidth:[5]
vsv_iArrayHeight:[3]
vsv_iArrayDepth:[2]
vsv_iArrayNumElements:[30]
3d Array[0]:
        2D array[0]
                [0][0][0]=1
                [0][0][1]=2
                [0][1][0]=3
                [0][1][1]=4
                [0][2][0]=5
                [0][2][1]=6
        2D array[1]
                [1][0][0]=7
                [1][0][1]=8
                [1][1][0]=9
                [1][1][1]=10
                [1][2][0]=11
                [1][2][1]=12
        2D array[2]
                [2][0][0]=13
                [2][0][1]=14
                [2][1][0]=15
                [2][1][1]=16
                [2][2][0]=17
                [2][2][1]=18
        2D array[3]
                [3][0][0]=19
                [3][0][1]=20
                [3][1][0]=21
                [3][1][1]=22
                [3][2][0]=23
                [3][2][1]=24
        2D array[4]
                [4][0][0]=25
                [4][0][1]=26
                [4][1][0]=27
                [4][1][1]=28
                [4][2][0]=29
                [4][2][1]=30
*/