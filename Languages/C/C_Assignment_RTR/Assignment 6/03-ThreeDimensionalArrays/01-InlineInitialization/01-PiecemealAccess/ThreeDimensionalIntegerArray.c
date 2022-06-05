#include<stdio.h>
int main(void){

    int vsv_iArray[5][3][2]={   {{1,2},{3,4},{5,6}},
                                {{7,8},{9,10},{11,12}},
                                {{13,14},{15,16},{17,18}},
                                {{19,20},{21,22},{23,24}},
                                {{25,26},{27,28},{29,30}}   };


    int vsv_iSize,vsv_iArraySize;

    int vsv_iArrayNumElements,vsv_iArrayWidth,vsv_iArrayHeight,vsv_iArrayDepth;
    vsv_iSize=sizeof(int);
    vsv_iArraySize=sizeof(vsv_iArray);
    vsv_iArrayWidth=vsv_iArraySize/sizeof(vsv_iArray[0]);
    vsv_iArrayHeight=sizeof(vsv_iArray[0])/sizeof(vsv_iArray[0][0]);
    vsv_iArrayDepth=sizeof(vsv_iArray[0][0])/vsv_iSize;
    vsv_iArrayNumElements=vsv_iArrayWidth*vsv_iArrayHeight*vsv_iArrayDepth;

    printf("\n3d Array[0]:");

    printf("\n2d Array[0]:");
    printf("\n[0][0][0]=%d",vsv_iArray[0][0][0]);
    printf("\n[0][0][1]=%d",vsv_iArray[0][0][1]);

    printf("\n[0][1][0]=%d",vsv_iArray[0][1][0]);
    printf("\n[0][1][1]=%d",vsv_iArray[0][1][1]);
    
    printf("\n[0][2][0]=%d",vsv_iArray[0][2][0]);
    printf("\n[0][2][1]=%d",vsv_iArray[0][2][1]);
//---------------
    printf("\n2d Array[1]:");
    printf("\n[1][0][0]=%d",vsv_iArray[1][0][0]);
    printf("\n[1][0][1]=%d",vsv_iArray[1][0][1]);

    printf("\n[1][1][0]=%d",vsv_iArray[1][1][0]);
    printf("\n[1][1][1]=%d",vsv_iArray[1][1][1]);
    
    printf("\n[1][2][0]=%d",vsv_iArray[1][2][0]);
    printf("\n[1][2][1]=%d",vsv_iArray[1][2][1]);
//---------------
    printf("\n2d Array[2]:");
    printf("\n[2][0][0]=%d",vsv_iArray[2][0][0]);
    printf("\n[2][0][1]=%d",vsv_iArray[2][0][1]);

    printf("\n[2][1][0]=%d",vsv_iArray[2][1][0]);
    printf("\n[2][1][1]=%d",vsv_iArray[2][1][1]);
    
    printf("\n[2][2][0]=%d",vsv_iArray[2][2][0]);
    printf("\n[2][2][1]=%d",vsv_iArray[2][2][1]);
//----------------------
    printf("\n2d Array[3]:");
    printf("\n[3][0][0]=%d",vsv_iArray[3][0][0]);
    printf("\n[3][0][1]=%d",vsv_iArray[3][0][1]);

    printf("\n[3][1][0]=%d",vsv_iArray[3][1][0]);
    printf("\n[3][1][1]=%d",vsv_iArray[3][1][1]);
    
    printf("\n[3][2][0]=%d",vsv_iArray[3][2][0]);
    printf("\n[3][2][1]=%d",vsv_iArray[3][2][1]);
//-------------
    printf("\n2d Array[4]:");
    printf("\n[4][0][0]=%d",vsv_iArray[4][0][0]);
    printf("\n[4][0][1]=%d",vsv_iArray[4][0][1]);

    printf("\n[4][1][0]=%d",vsv_iArray[4][1][0]);
    printf("\n[4][1][1]=%d",vsv_iArray[4][1][1]);
    
    printf("\n[4][2][0]=%d",vsv_iArray[4][2][0]);
    printf("\n[4][2][1]=%d",vsv_iArray[4][2][1]);

    return 0;
}
/*
~~Output~~
3d Array[0]:
2d Array[0]:
[0][0][0]=1
[0][0][1]=2
[0][1][0]=3
[0][1][1]=4
[0][2][0]=5
[0][2][1]=6
2d Array[1]:
[1][0][0]=7
[1][0][1]=8
[1][1][0]=9
[1][1][1]=10
[1][2][0]=11
[1][2][1]=12
2d Array[2]:
[2][0][0]=13
[2][0][1]=14
[2][1][0]=15
[2][1][1]=16
[2][2][0]=17
[2][2][1]=18
2d Array[3]:
[3][0][0]=19
[3][0][1]=20
[3][1][0]=21
[3][1][1]=22
[3][2][0]=23
[3][2][1]=24
2d Array[4]:
[4][0][0]=25
[4][0][1]=26
[4][1][0]=27
[4][1][1]=28
[4][2][0]=29
[4][2][1]=30
*/