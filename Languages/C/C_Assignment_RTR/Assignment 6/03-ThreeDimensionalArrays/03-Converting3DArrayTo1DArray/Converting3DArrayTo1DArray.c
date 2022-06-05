#include<stdio.h>
#define VSV_NUM_ROWS 5
#define VSV_NUM_COLS 3
#define VSV_DEPTH 2
int main(void){

    int vsv_iArray[VSV_NUM_ROWS][VSV_NUM_COLS][VSV_DEPTH]={   {{1,2},{3,4},{5,6}},
                                {{7,8},{9,10},{11,12}},
                                {{13,14},{15,16},{17,18}},
                                {{19,20},{21,22},{23,24}},
                                {{25,26},{27,28},{29,30}}   };


    int vsv_iArray1D[VSV_NUM_ROWS*VSV_NUM_COLS*VSV_DEPTH];
    int vsv_i,vsv_j,vsv_k;
   

    printf("\n3d Array[0]:");

    for(vsv_i=0;vsv_i<VSV_NUM_ROWS;vsv_i++){
        printf("\n\t2D array[%d]",vsv_i);
        for(vsv_j=0;vsv_j<VSV_NUM_COLS;vsv_j++){
            for(vsv_k=0;vsv_k<VSV_DEPTH;vsv_k++){
                printf("\n\t\t[%d][%d][%d]=%d",vsv_i,vsv_j,vsv_k,vsv_iArray[vsv_i][vsv_j][vsv_k]);
            }
        }
    } 

    for(vsv_i=0;vsv_i<VSV_NUM_ROWS;vsv_i++){
        for(vsv_j=0;vsv_j<VSV_NUM_COLS;vsv_j++){
            for(vsv_k=0;vsv_k<VSV_DEPTH;vsv_k++){
                vsv_iArray1D[(vsv_i*VSV_NUM_COLS*VSV_DEPTH)+(vsv_j*VSV_DEPTH)+vsv_k]=vsv_iArray[vsv_i][vsv_j][vsv_k];
            }
        }
    }

    printf("\nAfter Converting 3D to 1D array:");
    for(vsv_i=0;vsv_i<VSV_DEPTH*VSV_NUM_COLS*VSV_NUM_ROWS;vsv_i++){
        printf("\n\t[%d]=%d",vsv_i,vsv_iArray1D[vsv_i]);
    }

    return 0;
}
/*
~~Output~~
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
After Converting 3D to 1D array:
        [0]=1
        [1]=2
        [2]=3
        [3]=4
        [4]=5
        [5]=6
        [6]=7
        [7]=8
        [8]=9
        [9]=10
        [10]=11
        [11]=12
        [12]=13
        [13]=14
        [14]=15
        [15]=16
        [16]=17
        [17]=18
        [18]=19
        [19]=20
        [20]=21
        [21]=22
        [22]=23
        [23]=24
        [24]=25
        [25]=26
        [26]=27
        [27]=28
        [28]=29
        [29]=30
*/