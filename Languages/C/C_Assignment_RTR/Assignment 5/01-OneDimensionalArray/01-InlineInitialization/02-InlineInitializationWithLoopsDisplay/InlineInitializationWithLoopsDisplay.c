#include<stdio.h>
int main(void){

    int vsv_iArray[]={1,2,3,4,5,6,7,8,9,10};
    int vsv_iSize,vsv_iArraySize,vsv_iArrayNumElements;
    float vsv_fArray[]={1.2f,2.3f,3.4f,4.5f,5.6f,6.7f,7.8f,8.9f,9.1f,1.9f};
    int vsv_fSize,vsv_fArraySize,vsv_fArrayNumElements;
    char vsv_cArray[]={'V','.','S','.','V','I','R','O','J','E'};
    int vsv_cSize,vsv_cArraySize,vsv_cArrayNumElements;

    int vsv_i;

 
    vsv_iSize=sizeof(int);
    vsv_iArraySize=sizeof(vsv_iArray);
    vsv_iArrayNumElements=vsv_iArraySize/vsv_iSize;

    printf("\nInteger Array:");
    for(vsv_i=0;vsv_i<vsv_iArrayNumElements;vsv_i++){
        printf("\niArray[%d] = [%d]",vsv_i,vsv_iArray[vsv_i]);
    }  
    printf("\nInteger Array total size:[%d],Array Element Count:[%d],Integer size:[%d]\n",vsv_iArraySize,vsv_iArrayNumElements,vsv_iSize);


    vsv_fSize=sizeof(float);
    vsv_fArraySize=sizeof(vsv_fArray);
    vsv_fArrayNumElements=vsv_fArraySize/vsv_fSize;

    printf("\nFloat Array:");
    vsv_i=0;
    while(vsv_i<vsv_fArrayNumElements){
        printf("\nfArray[%d] = [%f]",vsv_i,vsv_fArray[vsv_i]);
        vsv_i++;
    }
    printf("\nFloat Array total size:[%d],Array Element Count:[%d],Float size:[%d]\n",vsv_fArraySize,vsv_fArrayNumElements,vsv_fSize);


    vsv_cSize=sizeof(char);
    vsv_cArraySize=sizeof(vsv_cArray);
    vsv_cArrayNumElements=vsv_cArraySize/vsv_cSize;
    printf("\nChar Array:");
    vsv_i=0;
    do{
        printf("\ncArray[%d] = [%c]",vsv_i,vsv_cArray[vsv_i]);
        vsv_i++;
    }while(vsv_i<vsv_cArrayNumElements);
    printf("\nChar Array total size:[%d],Array Element Count:[%d],Char size:[%d]\n",vsv_cArraySize,vsv_cArrayNumElements,vsv_cSize);
    

    return(0);
}
/*

Integer Array:
iArray[0] = [1]
iArray[1] = [2]
iArray[2] = [3]
iArray[3] = [4]
iArray[4] = [5]
iArray[5] = [6]
iArray[6] = [7]
iArray[7] = [8]
iArray[8] = [9]
iArray[9] = [10]
Integer Array total size:[40],Array Element Count:[10],Integer size:[4]

Float Array:
fArray[0] = [1.200000]
fArray[1] = [2.300000]
fArray[2] = [3.400000]
fArray[3] = [4.500000]
fArray[4] = [5.600000]
fArray[5] = [6.700000]
fArray[6] = [7.800000]
fArray[7] = [8.900000]
fArray[8] = [9.100000]
fArray[9] = [1.900000]
Float Array total size:[40],Array Element Count:[10],Float size:[4]

Char Array:
cArray[0] = [V]
cArray[1] = [.]
cArray[2] = [S]
cArray[3] = [.]
cArray[4] = [V]
cArray[5] = [I]
cArray[6] = [R]
cArray[7] = [O]
cArray[8] = [J]
cArray[9] = [E]
Char Array total size:[10],Array Element Count:[10],Char size:[1]

*/