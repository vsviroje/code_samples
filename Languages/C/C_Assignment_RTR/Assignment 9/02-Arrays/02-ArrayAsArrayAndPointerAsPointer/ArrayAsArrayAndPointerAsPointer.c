#include<stdio.h>
int main(void){

    int vsv_iArray[]= { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 }; 
    int *vsv_Ptr_iArray=NULL;

    printf("\nArray elements value and address:");
    printf("\nvsv_iArray[0]=%d \t &vsv_iArray[0]=%p",vsv_iArray[0],&vsv_iArray[0]);
    printf("\nvsv_iArray[1]=%d \t &vsv_iArray[1]=%p",vsv_iArray[1],&vsv_iArray[1]);
    printf("\nvsv_iArray[2]=%d \t &vsv_iArray[2]=%p",vsv_iArray[2],&vsv_iArray[2]);
    printf("\nvsv_iArray[3]=%d \t &vsv_iArray[3]=%p",vsv_iArray[3],&vsv_iArray[3]);
    printf("\nvsv_iArray[4]=%d \t &vsv_iArray[4]=%p",vsv_iArray[4],&vsv_iArray[4]);
    printf("\nvsv_iArray[5]=%d \t &vsv_iArray[5]=%p",vsv_iArray[5],&vsv_iArray[5]);
    printf("\nvsv_iArray[6]=%d \t &vsv_iArray[6]=%p",vsv_iArray[6],&vsv_iArray[6]);
    printf("\nvsv_iArray[7]=%d \t &vsv_iArray[7]=%p",vsv_iArray[7],&vsv_iArray[7]);
    printf("\nvsv_iArray[8]=%d \t &vsv_iArray[8]=%p",vsv_iArray[8],&vsv_iArray[8]);
    printf("\nvsv_iArray[9]=%d \t &vsv_iArray[9]=%p",vsv_iArray[9],&vsv_iArray[9]);
    
    vsv_Ptr_iArray=vsv_iArray;

    printf("\nPointer elements value and address:");
    printf("\n*(vsv_Ptr_iArray+0)=%d \t Address (vsv_Ptr_iArray+0)=%p",*(vsv_Ptr_iArray+0),(vsv_Ptr_iArray+0));
    printf("\n*(vsv_Ptr_iArray+1)=%d \t Address (vsv_Ptr_iArray+1)=%p",*(vsv_Ptr_iArray+1),(vsv_Ptr_iArray+1));
    printf("\n*(vsv_Ptr_iArray+2)=%d \t Address (vsv_Ptr_iArray+2)=%p",*(vsv_Ptr_iArray+2),(vsv_Ptr_iArray+2));
    printf("\n*(vsv_Ptr_iArray+3)=%d \t Address (vsv_Ptr_iArray+3)=%p",*(vsv_Ptr_iArray+3),(vsv_Ptr_iArray+3));
    printf("\n*(vsv_Ptr_iArray+4)=%d \t Address (vsv_Ptr_iArray+4)=%p",*(vsv_Ptr_iArray+4),(vsv_Ptr_iArray+4));
    printf("\n*(vsv_Ptr_iArray+5)=%d \t Address (vsv_Ptr_iArray+5)=%p",*(vsv_Ptr_iArray+5),(vsv_Ptr_iArray+5));
    printf("\n*(vsv_Ptr_iArray+6)=%d \t Address (vsv_Ptr_iArray+6)=%p",*(vsv_Ptr_iArray+6),(vsv_Ptr_iArray+6));
    printf("\n*(vsv_Ptr_iArray+7)=%d \t Address (vsv_Ptr_iArray+7)=%p",*(vsv_Ptr_iArray+7),(vsv_Ptr_iArray+7));
    printf("\n*(vsv_Ptr_iArray+8)=%d \t Address (vsv_Ptr_iArray+8)=%p",*(vsv_Ptr_iArray+8),(vsv_Ptr_iArray+8));
    printf("\n*(vsv_Ptr_iArray+9)=%d \t Address (vsv_Ptr_iArray+9)=%p",*(vsv_Ptr_iArray+9),(vsv_Ptr_iArray+9));

    return (0);
}
/*

Array elements value and address:
vsv_iArray[0]=10         &vsv_iArray[0]=0000001C3A19F9B8
vsv_iArray[1]=20         &vsv_iArray[1]=0000001C3A19F9BC
vsv_iArray[2]=30         &vsv_iArray[2]=0000001C3A19F9C0
vsv_iArray[3]=40         &vsv_iArray[3]=0000001C3A19F9C4
vsv_iArray[4]=50         &vsv_iArray[4]=0000001C3A19F9C8
vsv_iArray[5]=60         &vsv_iArray[5]=0000001C3A19F9CC
vsv_iArray[6]=70         &vsv_iArray[6]=0000001C3A19F9D0
vsv_iArray[7]=80         &vsv_iArray[7]=0000001C3A19F9D4
vsv_iArray[8]=90         &vsv_iArray[8]=0000001C3A19F9D8
vsv_iArray[9]=100        &vsv_iArray[9]=0000001C3A19F9DC
Pointer elements value and address:
*(vsv_Ptr_iArray+0)=10   Address (vsv_Ptr_iArray+0)=0000001C3A19F9B8
*(vsv_Ptr_iArray+1)=20   Address (vsv_Ptr_iArray+1)=0000001C3A19F9BC
*(vsv_Ptr_iArray+2)=30   Address (vsv_Ptr_iArray+2)=0000001C3A19F9C0
*(vsv_Ptr_iArray+3)=40   Address (vsv_Ptr_iArray+3)=0000001C3A19F9C4
*(vsv_Ptr_iArray+4)=50   Address (vsv_Ptr_iArray+4)=0000001C3A19F9C8
*(vsv_Ptr_iArray+5)=60   Address (vsv_Ptr_iArray+5)=0000001C3A19F9CC
*(vsv_Ptr_iArray+6)=70   Address (vsv_Ptr_iArray+6)=0000001C3A19F9D0
*(vsv_Ptr_iArray+7)=80   Address (vsv_Ptr_iArray+7)=0000001C3A19F9D4
*(vsv_Ptr_iArray+8)=90   Address (vsv_Ptr_iArray+8)=0000001C3A19F9D8
*(vsv_Ptr_iArray+9)=100          Address (vsv_Ptr_iArray+9)=0000001C3A19F9DC
*/