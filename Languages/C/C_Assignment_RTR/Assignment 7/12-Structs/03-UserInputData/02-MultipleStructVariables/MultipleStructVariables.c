#include<stdio.h>
struct vsv_MyPoint{
    int vsv_x;
    int vsv_y;
};
int main(void){
    struct vsv_MyPoint point_A, point_B, point_C, point_D, point_E;

    printf("\nEnter x-coor for point_A:");
    scanf("%d",&point_A.vsv_x);
    printf("\nEnter y-coor for point_A:");
    scanf("%d",&point_A.vsv_y);

    printf("\n\nEnter x-coor for point_B:");
    scanf("%d",&point_B.vsv_x);
    printf("\nEnter y-coor for point_B:");
    scanf("%d",&point_B.vsv_y);

    printf("\n\nEnter x-coor for point_C:");
    scanf("%d",&point_C.vsv_x);
    printf("\nEnter y-coor for point_C:");
    scanf("%d",&point_C.vsv_y);

    printf("\n\nEnter x-coor for point_D:");
    scanf("%d",&point_D.vsv_x);
    printf("\nEnter y-coor for point_D:");
    scanf("%d",&point_D.vsv_y);

    printf("\n\nEnter x-coor for point_E:");
    scanf("%d",&point_E.vsv_x);
    printf("\nEnter y-coor for point_E:");
    scanf("%d",&point_E.vsv_y);

    printf("\nCoor. (x,y) of point_A:( %d , %d )",point_A.vsv_x,point_A.vsv_y);
    printf("\nCoor. (x,y) of point_B:( %d , %d )",point_B.vsv_x,point_B.vsv_y);
    printf("\nCoor. (x,y) of point_C:( %d , %d )",point_C.vsv_x,point_C.vsv_y);
    printf("\nCoor. (x,y) of point_D:( %d , %d )",point_D.vsv_x,point_D.vsv_y);
    printf("\nCoor. (x,y) of point_E:( %d , %d )",point_E.vsv_x,point_E.vsv_y);

    return 0;
}

/*
~~Output~~

Enter x-coor for point_A:1

Enter y-coor for point_A:2


Enter x-coor for point_B:3

Enter y-coor for point_B:4


Enter x-coor for point_C:5

Enter y-coor for point_C:6


Enter x-coor for point_D:7

Enter y-coor for point_D:8


Enter x-coor for point_E:9

Enter y-coor for point_E:0

Coor. (x,y) of point_A:( 1 , 2 )
Coor. (x,y) of point_B:( 3 , 4 )
Coor. (x,y) of point_C:( 5 , 6 )
Coor. (x,y) of point_D:( 7 , 8 )
Coor. (x,y) of point_E:( 9 , 0 )
*/