#include<stdio.h>

int main(void){

    int vsv_iArray[]={1,2,3,4,5,6,7,8,9};
    float vsv_fArray[]={1.2f,2.3f,4.5f,5.6f};
    double vsv_dArray[]={2.333434,3.334536,6.435345};
    char vsv_cArray[]={'A','B','C','D','R','E','o','p','q','z','c','b'};

    printf("\n\nInteger Array Element value and address:-");
    printf("\nvsv_iArray[0]=%d\tAddress=%p",*(vsv_iArray+0),(vsv_iArray+0));
    printf("\nvsv_iArray[1]=%d\tAddress=%p",*(vsv_iArray+1),(vsv_iArray+1));
    printf("\nvsv_iArray[2]=%d\tAddress=%p",*(vsv_iArray+2),(vsv_iArray+2));
    printf("\nvsv_iArray[3]=%d\tAddress=%p",*(vsv_iArray+3),(vsv_iArray+3));
    printf("\nvsv_iArray[4]=%d\tAddress=%p",*(vsv_iArray+4),(vsv_iArray+4));
    printf("\nvsv_iArray[5]=%d\tAddress=%p",*(vsv_iArray+5),(vsv_iArray+5));
    printf("\nvsv_iArray[6]=%d\tAddress=%p",*(vsv_iArray+6),(vsv_iArray+6));
    printf("\nvsv_iArray[7]=%d\tAddress=%p",*(vsv_iArray+7),(vsv_iArray+7));
    printf("\nvsv_iArray[8]=%d\tAddress=%p",*(vsv_iArray+8),(vsv_iArray+8));

    printf("\n\nFloat Array Element value and address:-");
    printf("\nvsv_fArray[0]=%f\tAddress=%p",*(vsv_fArray+0),(vsv_fArray+0));
    printf("\nvsv_fArray[1]=%f\tAddress=%p",*(vsv_fArray+1),(vsv_fArray+1));
    printf("\nvsv_fArray[2]=%f\tAddress=%p",*(vsv_fArray+2),(vsv_fArray+2));
    printf("\nvsv_fArray[3]=%f\tAddress=%p",*(vsv_fArray+3),(vsv_fArray+3));

    printf("\n\nDouble Array Element value and address:-");
    printf("\nvsv_dArray[0]=%lf\tAddress=%p",*(vsv_dArray+0),(vsv_dArray+0));
    printf("\nvsv_dArray[1]=%lf\tAddress=%p",*(vsv_dArray+1),(vsv_dArray+1));
    printf("\nvsv_dArray[2]=%lf\tAddress=%p",*(vsv_dArray+2),(vsv_dArray+2));

    printf("\n\nChar Array Element value and address:-");
    printf("\nvsv_cArray[0]=%c\tAddress=%p",*(vsv_cArray+0),(vsv_cArray+0));
    printf("\nvsv_cArray[1]=%c\tAddress=%p",*(vsv_cArray+1),(vsv_cArray+1));
    printf("\nvsv_cArray[2]=%c\tAddress=%p",*(vsv_cArray+2),(vsv_cArray+2));
    printf("\nvsv_cArray[3]=%c\tAddress=%p",*(vsv_cArray+3),(vsv_cArray+3));
    printf("\nvsv_cArray[4]=%c\tAddress=%p",*(vsv_cArray+4),(vsv_cArray+4));
    printf("\nvsv_cArray[5]=%c\tAddress=%p",*(vsv_cArray+5),(vsv_cArray+5));
    printf("\nvsv_cArray[6]=%c\tAddress=%p",*(vsv_cArray+6),(vsv_cArray+6));
    printf("\nvsv_cArray[7]=%c\tAddress=%p",*(vsv_cArray+7),(vsv_cArray+7));
    printf("\nvsv_cArray[8]=%c\tAddress=%p",*(vsv_cArray+8),(vsv_cArray+8));
    printf("\nvsv_cArray[9]=%c\tAddress=%p",*(vsv_cArray+9),(vsv_cArray+9));
    printf("\nvsv_cArray[10]=%c\tAddress=%p",*(vsv_cArray+10),(vsv_cArray+10));
    printf("\nvsv_cArray[11]=%c\tAddress=%p",*(vsv_cArray+11),(vsv_cArray+11));

    return 0;
}

/*


Integer Array Element value and address:-
vsv_iArray[0]=1 Address=000000F7556FF870
vsv_iArray[1]=2 Address=000000F7556FF874
vsv_iArray[2]=3 Address=000000F7556FF878
vsv_iArray[3]=4 Address=000000F7556FF87C
vsv_iArray[4]=5 Address=000000F7556FF880
vsv_iArray[5]=6 Address=000000F7556FF884
vsv_iArray[6]=7 Address=000000F7556FF888
vsv_iArray[7]=8 Address=000000F7556FF88C
vsv_iArray[8]=9 Address=000000F7556FF890

Float Array Element value and address:-
vsv_fArray[0]=1.200000  Address=000000F7556FF860
vsv_fArray[1]=2.300000  Address=000000F7556FF864
vsv_fArray[2]=4.500000  Address=000000F7556FF868
vsv_fArray[3]=5.600000  Address=000000F7556FF86C

Double Array Element value and address:-
vsv_dArray[0]=2.333434  Address=000000F7556FF898
vsv_dArray[1]=3.334536  Address=000000F7556FF8A0
vsv_dArray[2]=6.435345  Address=000000F7556FF8A8

Char Array Element value and address:-
vsv_cArray[0]=A Address=000000F7556FF8B0
vsv_cArray[1]=B Address=000000F7556FF8B1
vsv_cArray[2]=C Address=000000F7556FF8B2
vsv_cArray[3]=D Address=000000F7556FF8B3
vsv_cArray[4]=R Address=000000F7556FF8B4
vsv_cArray[5]=E Address=000000F7556FF8B5
vsv_cArray[6]=o Address=000000F7556FF8B6
vsv_cArray[7]=p Address=000000F7556FF8B7
vsv_cArray[8]=q Address=000000F7556FF8B8
vsv_cArray[9]=z Address=000000F7556FF8B9
vsv_cArray[10]=c        Address=000000F7556FF8BA
vsv_cArray[11]=b        Address=000000F7556FF8BB
*/