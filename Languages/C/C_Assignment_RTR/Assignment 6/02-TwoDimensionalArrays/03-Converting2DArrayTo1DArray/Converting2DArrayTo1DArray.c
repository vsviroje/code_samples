#include<stdio.h>
#define VSV_NUM_ROWS 5
#define VSV_NUM_COLS 3

int main(void){

    int vsv_iArray_2D[VSV_NUM_ROWS][VSV_NUM_COLS];
    int vsv_iArray_1D[VSV_NUM_ROWS * VSV_NUM_COLS];
    int vsv_i,vsv_j,vsv_num;

    printf("\nEnter elements for 2d array:\n");

    for(vsv_i=0;vsv_i<VSV_NUM_ROWS;vsv_i++){

        for(vsv_j=0;vsv_j<VSV_NUM_COLS;vsv_j++){
            scanf("%d",&vsv_num);
            vsv_iArray_2D[vsv_i][vsv_j]=vsv_num;
        }
    }
    
    printf("\nyour entered 2d array :\n");
    
    for(vsv_i=0;vsv_i<VSV_NUM_ROWS;vsv_i++){
        for(vsv_j=0;vsv_j<VSV_NUM_COLS;vsv_j++){
            printf("\t%d",vsv_iArray_2D[vsv_i][vsv_j]);
        }
        printf("\n");
    }

    for(vsv_i=0;vsv_i<VSV_NUM_ROWS;vsv_i++){
        for(vsv_j=0;vsv_j<VSV_NUM_COLS;vsv_j++){
            vsv_iArray_1D[(vsv_i*VSV_NUM_COLS)+vsv_j]=vsv_iArray_2D[vsv_i][vsv_j];
        }
    }
    printf("\nAfter 2d to 1d conversion\n");
    for(vsv_i=0;vsv_i<VSV_NUM_ROWS*VSV_NUM_COLS;vsv_i++){
       printf("%d=%d\n",vsv_i,vsv_iArray_1D[vsv_i]);
    }

    return 0;
}

/*
~~OutPut~~

Enter elements for 2d array:
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15

your entered 2d array :
        1       2       3
        4       5       6
        7       8       9
        10      11      12
        13      14      15

After 2d to 1d conversion
0=1
1=2
2=3
3=4
4=5
5=6
6=7
7=8
8=9
9=10
10=11
11=12
12=13
13=14
14=15
*/