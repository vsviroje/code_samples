#include<stdio.h>


int main(void){

    int vsv_length,vsv_bredth,vsv_area;
    struct vsv_Rectangle{
        struct vsv_MyPoint{
            int x;
            int y;
        }point1,point2;

    }rect={{12,3},{5,16}};
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

 Length=[13]
 Breadth=[7]
 Area=[91]
*/