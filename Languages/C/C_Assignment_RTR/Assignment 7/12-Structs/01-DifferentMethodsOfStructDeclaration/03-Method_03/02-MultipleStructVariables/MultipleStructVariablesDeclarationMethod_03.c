#include <stdio.h>

int main(void)
{
    struct VSV_MyPoint{
    int vsv_x;
    int vsv_y;
    }point_A,point_B,point_C,point_D,point_E;

    point_A.vsv_x=2;
    point_A.vsv_y=3;

    point_B.vsv_x=14;
    point_B.vsv_y=33;

    point_C.vsv_x=21;
    point_C.vsv_y=5;

    point_D.vsv_x=6;
    point_D.vsv_y=27;

    point_E.vsv_x=9;
    point_E.vsv_y=3;

    printf("\nPoint A's (x,y) co-ordinates=(%d , %d)",point_A.vsv_x,point_A.vsv_y);
    printf("\nPoint B's (x,y) co-ordinates=(%d , %d)",point_B.vsv_x,point_B.vsv_y);
    printf("\nPoint C's (x,y) co-ordinates=(%d , %d)",point_C.vsv_x,point_C.vsv_y);
    printf("\nPoint D's (x,y) co-ordinates=(%d , %d)",point_D.vsv_x,point_D.vsv_y);
    printf("\nPoint E's (x,y) co-ordinates=(%d , %d)",point_E.vsv_x,point_E.vsv_y);

    return 0;
}
/*
~~output~~
Point A's (x,y) co-ordinates=(2 , 3)
Point B's (x,y) co-ordinates=(14 , 33)
Point C's (x,y) co-ordinates=(21 , 5)
Point D's (x,y) co-ordinates=(6 , 27)
Point E's (x,y) co-ordinates=(9 , 3)
*/