#include<stdio.h>

int main(void){

    int vsv_length,vsv_bredth,vsv_area;
    struct vsv_Rectangle{
        struct vsv_MyPoint{
            int x;
            int y;
        }point1,point2;

    }rect;

    printf("\nEnter Leftmost X-Coordinate Of Rectangle : ");
    scanf("%d", &rect.point1.x);
    
    printf("\nEnter Bottommost Y-Coordinate Of Rectangle : ");
    scanf("%d", &rect.point1.y);
    

    printf("\nEnter Rightmost X-Coordinate Of Rectangle : ");
    scanf("%d", &rect.point2.x);


    printf("\nEnter Topmost Y-Coordinate Of Rectangle : ");
    scanf("%d", &rect.point2.y);

    vsv_length=rect.point2.y-rect.point1.y;
    if (vsv_length<0)
        vsv_length=vsv_length*-1;

    vsv_bredth=rect.point2.x-rect.point1.x;
    if(vsv_bredth<0)
        vsv_bredth=vsv_bredth*-1;

    vsv_area=vsv_length*vsv_bredth;

    printf("\n Length=[%d]",vsv_length);
    printf("\n Breadth=[%d]",vsv_bredth);
    printf("\n Area=[%d]",vsv_area);

    return 0;
}
/*

Enter Leftmost X-Coordinate Of Rectangle : 8

Enter Bottommost Y-Coordinate Of Rectangle : 3

Enter Rightmost X-Coordinate Of Rectangle : 5

Enter Topmost Y-Coordinate Of Rectangle : 2

 Length=[1]
 Breadth=[3]
 Area=[3]
*/