#include <stdio.h>
struct VSV_MyPoint{
    int vsv_x;
    int vsv_y;
};

int main(void)
{
    struct VSV_MyPoint point_A,point_B,point_C,point_D,point_E;

    point_A.vsv_x=53;
    point_A.vsv_y=31;

    point_B.vsv_x=1;
    point_B.vsv_y=63;

    point_C.vsv_x=20;
    point_C.vsv_y=51;

    point_D.vsv_x=8;
    point_D.vsv_y=7;

    point_E.vsv_x=32;
    point_E.vsv_y=13;

    printf("\nPoint A's (x,y) co-ordinates=(%d , %d)",point_A.vsv_x,point_A.vsv_y);
    printf("\nPoint B's (x,y) co-ordinates=(%d , %d)",point_B.vsv_x,point_B.vsv_y);
    printf("\nPoint C's (x,y) co-ordinates=(%d , %d)",point_C.vsv_x,point_C.vsv_y);
    printf("\nPoint D's (x,y) co-ordinates=(%d , %d)",point_D.vsv_x,point_D.vsv_y);
    printf("\nPoint E's (x,y) co-ordinates=(%d , %d)",point_E.vsv_x,point_E.vsv_y);

    return 0;
}
/*
~~output~~
Point A's (x,y) co-ordinates=(53 , 31)
Point B's (x,y) co-ordinates=(1 , 63)
Point C's (x,y) co-ordinates=(20 , 51)
Point D's (x,y) co-ordinates=(8 , 7)
Point E's (x,y) co-ordinates=(32 , 13)
*/