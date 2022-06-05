#include<stdio.h>
int main(void){
    double vsv_dArray[10];
    int vsv_i;
    
    for(vsv_i=0;vsv_i<10;vsv_i++)
        vsv_dArray[vsv_i]=(float)(vsv_i+1)*1.333333f;

    printf("\nElements in Double Array:");    
    for(vsv_i=0;vsv_i<10;vsv_i++)
        printf("\n\nvsv_dArray[%d]=%lf",vsv_i,vsv_dArray[vsv_i]);
        
    printf("\nElements in Double Array:");    
    for(vsv_i=0;vsv_i<10;vsv_i++)
        printf("\n\nvsv_dArray[%d]=%lf\tAddress=%p",vsv_i,vsv_dArray[vsv_i],&vsv_dArray[vsv_i]);

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

vsv_dArray[0]=1.333333  Address=000000756CBDF7C0

vsv_dArray[1]=2.666666  Address=000000756CBDF7C8

vsv_dArray[2]=3.999999  Address=000000756CBDF7D0

vsv_dArray[3]=5.333332  Address=000000756CBDF7D8

vsv_dArray[4]=6.666665  Address=000000756CBDF7E0

vsv_dArray[5]=7.999998  Address=000000756CBDF7E8

vsv_dArray[6]=9.333331  Address=000000756CBDF7F0

vsv_dArray[7]=10.666664 Address=000000756CBDF7F8

vsv_dArray[8]=11.999997 Address=000000756CBDF800

vsv_dArray[9]=13.333330 Address=000000756CBDF808
*/