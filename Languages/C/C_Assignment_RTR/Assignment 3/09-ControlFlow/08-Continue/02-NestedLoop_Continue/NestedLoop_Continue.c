#include<stdio.h>
int main(void){

     int vsv_i,vsv_j;
    for(vsv_i=0;vsv_i<=10;vsv_i++){

        if(vsv_i%2 !=0){
            printf("%d\n",vsv_i);

            for(vsv_j=0;vsv_j<=10;vsv_j++){

                if(vsv_j%2 ==0){
                    printf("\t%d\n",vsv_j);
                }else{
                    continue;
                }
            }

        }else{
            continue;
        }
    }

    return (0);
}
/*
1
        0
        2
        4
        6
        8
        10
3
        0
        2
        4
        6
        8
        10
5
        0
        2
        4
        6
        8
        10
7
        0
        2
        4
        6
        8
        10
9
        0
        2
        4
        6
        8
        10

*/