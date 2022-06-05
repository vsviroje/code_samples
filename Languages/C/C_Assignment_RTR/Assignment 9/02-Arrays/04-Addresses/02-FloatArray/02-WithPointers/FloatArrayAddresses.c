#include<stdio.h>
int main(void){
    float vsv_fArray[10];
    float *vsv_Ptr_fArray=NULL;
    int vsv_i;
    
    for(vsv_i=0;vsv_i<10;vsv_i++)
        vsv_fArray[vsv_i]=(float)(vsv_i+1)*1.5f;

    vsv_Ptr_fArray=vsv_fArray;

    printf("\nElements in Float Array:");    
    for(vsv_i=0;vsv_i<10;vsv_i++)
        printf("\n\tvsv_fArray[%d]=%f",vsv_i,*(vsv_Ptr_fArray+vsv_i));
        
    printf("\nElements in Float Array:");    
    for(vsv_i=0;vsv_i<10;vsv_i++)
        printf("\n\tvsv_fArray[%d]=%f\tAddress=%p",vsv_i,*(vsv_Ptr_fArray+vsv_i),(vsv_Ptr_fArray+vsv_i));

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
        vsv_fArray[0]=1.500000  Address=000000E8B66FFD20
        vsv_fArray[1]=3.000000  Address=000000E8B66FFD24
        vsv_fArray[2]=4.500000  Address=000000E8B66FFD28
        vsv_fArray[3]=6.000000  Address=000000E8B66FFD2C
        vsv_fArray[4]=7.500000  Address=000000E8B66FFD30
        vsv_fArray[5]=9.000000  Address=000000E8B66FFD34
        vsv_fArray[6]=10.500000 Address=000000E8B66FFD38
        vsv_fArray[7]=12.000000 Address=000000E8B66FFD3C
        vsv_fArray[8]=13.500000 Address=000000E8B66FFD40
        vsv_fArray[9]=15.000000 Address=000000E8B66FFD44
*/