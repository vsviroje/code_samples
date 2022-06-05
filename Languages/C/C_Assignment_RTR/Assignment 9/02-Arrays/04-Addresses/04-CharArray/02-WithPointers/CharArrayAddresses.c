#include<stdio.h>
int main(void){
    char vsv_cArray[10];
    char *vsv_Ptr_cArray=NULL;
    int vsv_i;
    
    for(vsv_i=0;vsv_i<10;vsv_i++)
        vsv_cArray[vsv_i]=(char)(vsv_i+65);
        
    vsv_Ptr_cArray=vsv_cArray;

    printf("\nElements in Char Array:");    
    for(vsv_i=0;vsv_i<10;vsv_i++)
        printf("\n\tvsv_cArray[%d]=%c",vsv_i,*(vsv_Ptr_cArray+vsv_i));
        
    printf("\nElements in Char Array:");    
    for(vsv_i=0;vsv_i<10;vsv_i++)
        printf("\n\tvsv_cArray[%d]=%c\tAddress=%p",vsv_i,*(vsv_Ptr_cArray+vsv_i),(vsv_Ptr_cArray+vsv_i));

    return 0;
}
/*

Elements in Char Array:
        vsv_cArray[0]=A
        vsv_cArray[1]=B
        vsv_cArray[2]=C
        vsv_cArray[3]=D
        vsv_cArray[4]=E
        vsv_cArray[5]=F
        vsv_cArray[6]=G
        vsv_cArray[7]=H
        vsv_cArray[8]=I
        vsv_cArray[9]=J
Elements in Char Array:
        vsv_cArray[0]=A Address=000000495E6FF8A0
        vsv_cArray[1]=B Address=000000495E6FF8A1
        vsv_cArray[2]=C Address=000000495E6FF8A2
        vsv_cArray[3]=D Address=000000495E6FF8A3
        vsv_cArray[4]=E Address=000000495E6FF8A4
        vsv_cArray[5]=F Address=000000495E6FF8A5
        vsv_cArray[6]=G Address=000000495E6FF8A6
        vsv_cArray[7]=H Address=000000495E6FF8A7
        vsv_cArray[8]=I Address=000000495E6FF8A8
        vsv_cArray[9]=J Address=000000495E6FF8A9
*/