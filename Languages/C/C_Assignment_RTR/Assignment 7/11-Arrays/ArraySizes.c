#include<stdio.h>
int main(void){
    int vsv_iArray1D[5];
    int vsv_iArray2D[5][3];
    int vsv_iArray3D[100][100][5];

    int vsv_iNumRow2D;
    int vsv_iNumCol2D;
    
    int vsv_iNumRow3D;
    int vsv_iNumCol3D;
    int vsv_iDepth3D;

    printf("\nSize of vsv_iArray1D=%zu",sizeof(vsv_iArray1D));
    printf("\nNumber of elements in vsv_iArray1D=%zu\n\n",(sizeof(vsv_iArray1D)/sizeof(int)));
    
    printf("\nSize of vsv_iArray2D=%zu",sizeof(vsv_iArray2D));
    vsv_iNumRow2D=(sizeof(vsv_iArray2D)/sizeof(vsv_iArray2D[0]));
    printf("\nNumber of Rows in vsv_iArray2D=%d",vsv_iNumRow2D);
    vsv_iNumCol2D=(sizeof(vsv_iArray2D[0])/sizeof(vsv_iArray2D[0][0]));
    printf("\nNumber of columns each Rows has in vsv_iArray2D=%d",vsv_iNumCol2D);
    printf("\nNumber of total elements in vsv_iArray2D=%d\n\n",(vsv_iNumRow2D*vsv_iNumCol2D));

    printf("\nSize of vsv_iArray3D=%zu",sizeof(vsv_iArray3D));
    vsv_iNumRow3D=(sizeof(vsv_iArray3D)/sizeof(vsv_iArray3D[0]));
    printf("\nNumber of Rows in vsv_iArray3D=%d",vsv_iNumRow3D);
    vsv_iNumCol3D=(sizeof(vsv_iArray3D[0])/sizeof(vsv_iArray3D[0][0]));
    printf("\nNumber of columns each Rows has in vsv_iArray3D=%d",vsv_iNumCol3D);
    vsv_iDepth3D=(sizeof(vsv_iArray3D[0][0])/sizeof(vsv_iArray3D[0][0][0]));
    printf("\nNumber of depth that each column of row has in vsv_iArray3D=%d",vsv_iDepth3D);
    printf("\nNumber of total elements in vsv_iArray3D=%d\n\n",(vsv_iNumRow3D*vsv_iNumCol3D*vsv_iDepth3D));



    return 0;    
}
/*
~~Output~~
Size of vsv_iArray1D=20
Number of elements in vsv_iArray1D=5


Size of vsv_iArray2D=60
Number of Rows in vsv_iArray2D=5
Number of columns each Rows has in vsv_iArray2D=3
Number of total elements in vsv_iArray2D=15


Size of vsv_iArray3D=200000
Number of Rows in vsv_iArray3D=100
Number of columns each Rows has in vsv_iArray3D=100
Number of depth that each column of row has in vsv_iArray3D=5
Number of total elements in vsv_iArray3D=50000
*/