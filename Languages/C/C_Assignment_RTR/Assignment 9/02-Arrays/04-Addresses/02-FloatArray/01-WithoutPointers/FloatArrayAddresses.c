#include<stdio.h>
int main(void){
    float vsv_fArray[10];
    int vsv_i;
    
    for(vsv_i=0;vsv_i<10;vsv_i++)
        vsv_fArray[vsv_i]=(float)(vsv_i+1)*1.5f;

    printf("\nElements in Float Array:");    
    for(vsv_i=0;vsv_i<10;vsv_i++)
        printf("\n\tvsv_fArray[%d]=%f",vsv_i,vsv_fArray[vsv_i]);
        
    printf("\nElements in Float Array:");    
    for(vsv_i=0;vsv_i<10;vsv_i++)
        printf("\n\tvsv_fArray[%d]=%f\tAddress=%p",vsv_i,vsv_fArray[vsv_i],&vsv_fArray[vsv_i]);

    return 0;
}
/*

Elements in Float Array:
        vsv_fArray[0]=1.500000
        vsv_fArray[1]=3.000000
        vsv_fArray[2]=4.500000
        vsv_fArray[3]=6.000000
        vsv_fArray[4]=7.500000
        vsv_fArray[5]=9.000000
        vsv_fArray[6]=10.500000
        vsv_fArray[7]=12.000000
        vsv_fArray[8]=13.500000
        vsv_fArray[9]=15.000000
Elements in Float Array:
        vsv_fArray[0]=1.500000  Address=000000C2875AFAB8
        vsv_fArray[1]=3.000000  Address=000000C2875AFABC
        vsv_fArray[2]=4.500000  Address=000000C2875AFAC0
        vsv_fArray[3]=6.000000  Address=000000C2875AFAC4
        vsv_fArray[4]=7.500000  Address=000000C2875AFAC8
        vsv_fArray[5]=9.000000  Address=000000C2875AFACC
        vsv_fArray[6]=10.500000 Address=000000C2875AFAD0
        vsv_fArray[7]=12.000000 Address=000000C2875AFAD4
        vsv_fArray[8]=13.500000 Address=000000C2875AFAD8
        vsv_fArray[9]=15.000000 Address=000000C2875AFADC
*/