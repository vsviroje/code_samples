#include <stdio.h>
struct VSV_MyPoint{
    int vsv_x;
    int vsv_y;
};
struct VSV_MyPoint point;

struct VSV_MyPointProperties{
    int vsv_quadrant;
    char vsv_AxisLocation[10];
};
struct VSV_MyPointProperties point_properties;

int main(void){

    printf("\nEnter X-coor. :");
    scanf("%d",&point.vsv_x);
    printf("\nEnter Y-coor. :");
    scanf("%d",&point.vsv_y);

    printf("\n\n(x,y) coor. entered by you=(%d , %d)\n\n",point.vsv_x,point.vsv_y);

    if(point.vsv_x==0 && point.vsv_y==0){
        printf("\nBoth X & Y coor. are Zero");    
    }else{
        if(point.vsv_x==0){
            if(point.vsv_y<0){
                strcpy(point_properties.vsv_AxisLocation,"Negative Y");
            }
            if(point.vsv_y>0){
                strcpy(point_properties.vsv_AxisLocation,"Positive Y");
            }
            point_properties.vsv_quadrant=0;
            printf("\nThe Point Lies On The %s Axis !!!",point_properties.vsv_AxisLocation);

        }else if(point.vsv_y==0){
           
            if(point.vsv_x<0){
                strcpy(point_properties.vsv_AxisLocation,"Negative X");
            }
            if(point.vsv_x>0){
                strcpy(point_properties.vsv_AxisLocation,"Positive X");
            }
            point_properties.vsv_quadrant=0;
            printf("\nThe Point Lies On The %s Axis !!!",point_properties.vsv_AxisLocation);


        }else{
            point_properties.vsv_AxisLocation[0]='\0';
            if(point.vsv_x > 0 && point.vsv_y > 0){
                
                point_properties.vsv_quadrant=1;

            }else if(point.vsv_x < 0 && point.vsv_y > 0){
                
                point_properties.vsv_quadrant=2;
            
            }else if(point.vsv_x < 0 && point.vsv_y<0){
                
                point_properties.vsv_quadrant=3;
            
            }else{
                
                point_properties.vsv_quadrant=4;
            
            }

            printf("\nThe Point Lies In Quadrant Number %d !!!",point_properties.vsv_quadrant);
        }

    }


    return 0;
}

/*
~~Output~~
Enter X-coor. :1

Enter Y-coor. :0


(x,y) coor. entered by you=(1 , 0)


The Point Lies On The Positive X Axis !!!
*/