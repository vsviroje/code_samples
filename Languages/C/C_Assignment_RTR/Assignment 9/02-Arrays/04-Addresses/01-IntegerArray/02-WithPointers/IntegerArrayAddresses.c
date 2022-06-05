#include<stdio.h>
int main(void){
    int vsv_iArray[10];
    int *vsv_Ptr_iArray=NULL;
    int vsv_i;
    
    for(vsv_i=0;vsv_i<10;vsv_i++)
        vsv_iArray[vsv_i]=(vsv_i+1)*3;

    vsv_Ptr_iArray=vsv_iArray;
    printf("\nElements in Integer Array:");    
    for(vsv_i=0;vsv_i<10;vsv_i++)
        printf("\n\tvsv_iArray[%d]=%d",vsv_i,*(vsv_Ptr_iArray+vsv_i));
        
    printf("\nElements in Integer Array:");    
    for(vsv_i=0;vsv_i<10;vsv_i++)
        printf("\n\tvsv_iArray[%d]=%d\tAddress=%p",vsv_i,*(vsv_Ptr_iArray+vsv_i),(vsv_Ptr_iArray+vsv_i));

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
        vsv_iArray[0]=3 Address=00000049884FFC80
        vsv_iArray[1]=6 Address=00000049884FFC84
        vsv_iArray[2]=9 Address=00000049884FFC88
        vsv_iArray[3]=12        Address=00000049884FFC8C
        vsv_iArray[4]=15        Address=00000049884FFC90
        vsv_iArray[5]=18        Address=00000049884FFC94
        vsv_iArray[6]=21        Address=00000049884FFC98
        vsv_iArray[7]=24        Address=00000049884FFC9C
        vsv_iArray[8]=27        Address=00000049884FFCA0
        vsv_iArray[9]=30        Address=00000049884FFCA4
*/