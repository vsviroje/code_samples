#include<stdio.h>
int main(void){

    int vsv_iArray[]={1,2,3,4,5,6,7,8,9,10};
    int vsv_iSize,vsv_iArraySize,vsv_iArrayNumElements;
    float vsv_fArray[]={1.2f,2.3f,3.4f,4.5f,5.6f,6.7f,7.8f,8.9f,9.1f,1.9f};
    int vsv_fSize,vsv_fArraySize,vsv_fArrayNumElements;
    char vsv_cArray[]={'V','.','S','.','V','I','R','O','J','E'};
    int vsv_cSize,vsv_cArraySize,vsv_cArrayNumElements;

    printf("\nInteger Array:");
    printf("\niArray[0] = [%d]",vsv_iArray[0]);
    printf("\niArray[1] = [%d]",vsv_iArray[1]);
    printf("\niArray[2] = [%d]",vsv_iArray[2]);
    printf("\niArray[3] = [%d]",vsv_iArray[3]);
    printf("\niArray[4] = [%d]",vsv_iArray[4]);
    printf("\niArray[5] = [%d]",vsv_iArray[5]);
    printf("\niArray[6] = [%d]",vsv_iArray[6]);
    printf("\niArray[7] = [%d]",vsv_iArray[7]);
    printf("\niArray[8] = [%d]",vsv_iArray[8]);
    printf("\niArray[9] = [%d]\n",vsv_iArray[9]);

    vsv_iSize=sizeof(int);
    vsv_iArraySize=sizeof(vsv_iArray);
    vsv_iArrayNumElements=vsv_iArraySize/vsv_iSize;

    printf("\nInteger Array total size:[%d],Array Element Count:[%d],Integer size:[%d]\n",vsv_iArraySize,vsv_iArrayNumElements,vsv_iSize);
    
    
    printf("\nFloat Array:");
    printf("\nfArray[0] = [%f]",vsv_fArray[0]);
    printf("\nfArray[1] = [%f]",vsv_fArray[1]);
    printf("\nfArray[2] = [%f]",vsv_fArray[2]);
    printf("\nfArray[3] = [%f]",vsv_fArray[3]);
    printf("\nfArray[4] = [%f]",vsv_fArray[4]);
    printf("\nfArray[5] = [%f]",vsv_fArray[5]);
    printf("\nfArray[6] = [%f]",vsv_fArray[6]);
    printf("\nfArray[7] = [%f]",vsv_fArray[7]);
    printf("\nfArray[8] = [%f]",vsv_fArray[8]);
    printf("\nfArray[9] = [%f]\n",vsv_fArray[9]);
    
    vsv_fSize=sizeof(float);
    vsv_fArraySize=sizeof(vsv_fArray);
    vsv_fArrayNumElements=vsv_fArraySize/vsv_fSize;

    printf("\nFloat Array total size:[%d],Array Element Count:[%d],Float size:[%d]\n",vsv_fArraySize,vsv_fArrayNumElements,vsv_fSize);

    printf("\nChar Array:");
    printf("\ncArray[0] = [%c]",vsv_cArray[0]);
    printf("\ncArray[1] = [%c]",vsv_cArray[1]);
    printf("\ncArray[2] = [%c]",vsv_cArray[2]);
    printf("\ncArray[3] = [%c]",vsv_cArray[3]);
    printf("\ncArray[4] = [%c]",vsv_cArray[4]);
    printf("\ncArray[5] = [%c]",vsv_cArray[5]);
    printf("\ncArray[6] = [%c]",vsv_cArray[6]);
    printf("\ncArray[7] = [%c]",vsv_cArray[7]);
    printf("\ncArray[8] = [%c]",vsv_cArray[8]);
    printf("\ncArray[9] = [%c]\n",vsv_cArray[9]);

    vsv_cSize=sizeof(char);
    vsv_cArraySize=sizeof(vsv_cArray);
    vsv_cArrayNumElements=vsv_cArraySize/vsv_cSize;

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