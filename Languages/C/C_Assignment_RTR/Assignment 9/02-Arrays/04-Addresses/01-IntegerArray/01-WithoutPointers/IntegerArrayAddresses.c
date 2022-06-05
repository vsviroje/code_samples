#include<stdio.h>
int main(void){
    int vsv_iArray[10];
    int vsv_i;
    
    for(vsv_i=0;vsv_i<10;vsv_i++)
        vsv_iArray[vsv_i]=(vsv_i+1)*3;

    printf("\nElements in Integer Array:");    
    for(vsv_i=0;vsv_i<10;vsv_i++)
        printf("\n\tvsv_iArray[%d]=%d",vsv_i,vsv_iArray[vsv_i]);
        
    printf("\nElements in Integer Array:");    
    for(vsv_i=0;vsv_i<10;vsv_i++)
        printf("\n\tvsv_iArray[%d]=%d\tAddress=%p",vsv_i,vsv_iArray[vsv_i],&vsv_iArray[vsv_i]);

    return 0;
}
/*

Elements in Integer Array:
        vsv_iArray[0]=3
        vsv_iArray[1]=6
        vsv_iArray[2]=9
        vsv_iArray[3]=12
        vsv_iArray[4]=15
        vsv_iArray[5]=18
        vsv_iArray[6]=21
        vsv_iArray[7]=24
        vsv_iArray[8]=27
        vsv_iArray[9]=30
Elements in Integer Array:
        vsv_iArray[0]=3 Address=0000001BED4FFE58
        vsv_iArray[1]=6 Address=0000001BED4FFE5C
        vsv_iArray[2]=9 Address=0000001BED4FFE60
        vsv_iArray[3]=12        Address=0000001BED4FFE64
        vsv_iArray[4]=15        Address=0000001BED4FFE68
        vsv_iArray[5]=18        Address=0000001BED4FFE6C
        vsv_iArray[6]=21        Address=0000001BED4FFE70
        vsv_iArray[7]=24        Address=0000001BED4FFE74
        vsv_iArray[8]=27        Address=0000001BED4FFE78
        vsv_iArray[9]=30        Address=0000001BED4FFE7C
*/