#include<stdio.h>
struct vsv_MyNumber{
    int vsv_Num;
    int vsv_NumTable[10];
};
struct vsv_NumTables{
    struct vsv_MyNumber n;
};

int main(void){
    struct vsv_NumTables vsv_tables[10];
    int vsv_i,vsv_j;

    for(vsv_i=0;vsv_i<10;vsv_i++){
        vsv_tables[vsv_i].n.vsv_Num=vsv_i+1;
    }
    for(vsv_i=0;vsv_i<10;vsv_i++){
        printf("\nTable of %d",vsv_tables[vsv_i].n.vsv_Num);
        for(vsv_j=0;vsv_j<10;vsv_j++){
            vsv_tables[vsv_i].n.vsv_NumTable[vsv_j]=vsv_tables[vsv_i].n.vsv_Num * (vsv_j+1);
            printf("\n\t%d*%d=%d",vsv_tables[vsv_i].n.vsv_Num,(vsv_j+1),vsv_tables[vsv_i].n.vsv_NumTable[vsv_j]);
        }
    }   
    return 0;
}
/*

Table of 1
        1*1=1
        1*2=2
        1*3=3
        1*4=4
        1*5=5
        1*6=6
        1*7=7
        1*8=8
        1*9=9
        1*10=10
Table of 2
        2*1=2
        2*2=4
        2*3=6
        2*4=8
        2*5=10
        2*6=12
        2*7=14
        2*8=16
        2*9=18
        2*10=20
Table of 3
        3*1=3
        3*2=6
        3*3=9
        3*4=12
        3*5=15
        3*6=18
        3*7=21
        3*8=24
        3*9=27
        3*10=30
Table of 4
        4*1=4
        4*2=8
        4*3=12
        4*4=16
        4*5=20
        4*6=24
        4*7=28
        4*8=32
        4*9=36
        4*10=40
Table of 5
        5*1=5
        5*2=10
        5*3=15
        5*4=20
        5*5=25
        5*6=30
        5*7=35
        5*8=40
        5*9=45
        5*10=50
Table of 6
        6*1=6
        6*2=12
        6*3=18
        6*4=24
        6*5=30
        6*6=36
        6*7=42
        6*8=48
        6*9=54
        6*10=60
Table of 7
        7*1=7
        7*2=14
        7*3=21
        7*4=28
        7*5=35
        7*6=42
        7*7=49
        7*8=56
        7*9=63
        7*10=70
Table of 8
        8*1=8
        8*2=16
        8*3=24
        8*4=32
        8*5=40
        8*6=48
        8*7=56
        8*8=64
        8*9=72
        8*10=80
Table of 9
        9*1=9
        9*2=18
        9*3=27
        9*4=36
        9*5=45
        9*6=54
        9*7=63
        9*8=72
        9*9=81
        9*10=90
Table of 10
        10*1=10
        10*2=20
        10*3=30
        10*4=40
        10*5=50
        10*6=60
        10*7=70
        10*8=80
        10*9=90
        10*10=100
*/