#include<stdio.h>
int main(void){
    int vsv_i;
    for(vsv_i=0;vsv_i<=100;vsv_i++){

        if(vsv_i%2 !=0){
            continue;
        }else{
            printf("\t%d\n",vsv_i);
        }
    }
    return(0);
}
/*
        0
        2
        4
        6
        8
        10
        12
        14
        16
        18
        20
        22
        24
        26
        28
        30
        32
        34
        36
        38
        40
        42
        44
        46
        48
        50
        52
        54
        56
        58
        60
        62
        64
        66
        68
        70
        72
        74
        76
        78
        80
        82
        84
        86
        88
        90
        92
        94
        96
        98
        100

*/