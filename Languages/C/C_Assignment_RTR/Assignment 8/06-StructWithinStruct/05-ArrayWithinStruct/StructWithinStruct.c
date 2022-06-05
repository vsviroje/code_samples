#include<stdio.h>
struct vsv_MyNumber{
    int vsv_Num;
    int vsv_NumTable[10];
};
struct vsv_NumTables{
    struct vsv_MyNumber a;
    struct vsv_MyNumber b;
    struct vsv_MyNumber c;
};

int main(void){
    struct vsv_NumTables vsv_tables;
    int vsv_i;

    vsv_tables.a.vsv_Num=2;

    printf("\nTable of %d",vsv_tables.a.vsv_Num);
    for(vsv_i=0;vsv_i<10;vsv_i++){
        vsv_tables.a.vsv_NumTable[vsv_i]=vsv_tables.a.vsv_Num * (vsv_i+1);
    }
    for(vsv_i=0;vsv_i<10;vsv_i++){
        printf("\n\t%d*%d=%d",vsv_tables.a.vsv_Num,(vsv_i+1),vsv_tables.a.vsv_NumTable[vsv_i]);
    }

    vsv_tables.b.vsv_Num=3;

    printf("\nTable of %d",vsv_tables.b.vsv_Num);
    for(vsv_i=0;vsv_i<10;vsv_i++){
        vsv_tables.b.vsv_NumTable[vsv_i]=vsv_tables.b.vsv_Num * (vsv_i+1);
    }
    for(vsv_i=0;vsv_i<10;vsv_i++){
        printf("\n\t%d*%d=%d",vsv_tables.b.vsv_Num,(vsv_i+1),vsv_tables.b.vsv_NumTable[vsv_i]);
    }

    vsv_tables.c.vsv_Num=4;

    printf("\nTable of %d",vsv_tables.c.vsv_Num);
    for(vsv_i=0;vsv_i<10;vsv_i++){
        vsv_tables.c.vsv_NumTable[vsv_i]=vsv_tables.c.vsv_Num * (vsv_i+1);
    }
    for(vsv_i=0;vsv_i<10;vsv_i++){
        printf("\n\t%d*%d=%d",vsv_tables.c.vsv_Num,(vsv_i+1),vsv_tables.c.vsv_NumTable[vsv_i]);
    }
    return 0;
}
/*

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
*/