#include<stdio.h>
int main(void){
    double vsv_dArray[10];
    double *vsv_Ptr_dArray=NULL;
    int vsv_i;
    
    for(vsv_i=0;vsv_i<10;vsv_i++)
        vsv_dArray[vsv_i]=(float)(vsv_i+1)*1.333333f;
    
    vsv_Ptr_dArray=vsv_dArray;

    printf("\nElements in Double Array:");    
    for(vsv_i=0;vsv_i<10;vsv_i++)
        printf("\n\nvsv_dArray[%d]=%lf",vsv_i,*(vsv_Ptr_dArray+vsv_i));
        
    printf("\nElements in Double Array:");    
    for(vsv_i=0;vsv_i<10;vsv_i++)
        printf("\n\nvsv_dArray[%d]=%lf\tAddress=%p",vsv_i,*(vsv_Ptr_dArray+vsv_i),(vsv_Ptr_dArray+vsv_i));

    return 0;
}
/*

Elements in Double Array:

vsv_dArray[0]=1.333333

vsv_dArray[1]=2.666666

vsv_dArray[2]=3.999999

vsv_dArray[3]=5.333332

vsv_dArray[4]=6.666665

vsv_dArray[5]=7.999998

vsv_dArray[6]=9.333331

vsv_dArray[7]=10.666664

vsv_dArray[8]=11.999997

vsv_dArray[9]=13.333330
Elements in Double Array:

vsv_dArray[0]=1.333333  Address=00000046504FFBB0

vsv_dArray[1]=2.666666  Address=00000046504FFBB8

vsv_dArray[2]=3.999999  Address=00000046504FFBC0

vsv_dArray[3]=5.333332  Address=00000046504FFBC8

vsv_dArray[4]=6.666665  Address=00000046504FFBD0

vsv_dArray[5]=7.999998  Address=00000046504FFBD8

vsv_dArray[6]=9.333331  Address=00000046504FFBE0

vsv_dArray[7]=10.666664 Address=00000046504FFBE8

vsv_dArray[8]=11.999997 Address=00000046504FFBF0

vsv_dArray[9]=13.333330 Address=00000046504FFBF8
*/