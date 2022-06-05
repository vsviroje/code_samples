#include<stdio.h>
int main(void){

    char vsv_cArray01[]={'A','B','C','D','E','F','G','H','\0'};
    char vsv_cArray02[9]={'L','K','M','N','O','P','Q','S','\0'};
    char vsv_cArray03[]={'U','V','W','\0'};
    char vsv_cArray04[]="ITXYMZ";
    char vsv_cArray05[]="Alphabet testing";

    char vsv_cArray_WithoutNullTerminator[]={'H','e','l','l','o'};

    printf("\nSizeOf vsv_cArray01:[%zu]",sizeof(vsv_cArray01));
    printf("\nSizeOf vsv_cArray02:[%zu]",sizeof(vsv_cArray02));
    printf("\nSizeOf vsv_cArray03:[%zu]",sizeof(vsv_cArray03));
    printf("\nSizeOf vsv_cArray04:[%zu]",sizeof(vsv_cArray04));
    printf("\nSizeOf vsv_cArray05:[%zu]",sizeof(vsv_cArray05));
    printf("\nSizeOf vsv_cArray_WithoutNullTerminator:[%zu]",sizeof(vsv_cArray_WithoutNullTerminator));
//-------------------

    printf("\nString in vsv_cArray01:[%s]",vsv_cArray01);
    printf("\nString in vsv_cArray02:[%s]",vsv_cArray02);
    printf("\nString in vsv_cArray03:[%s]",vsv_cArray03);
    printf("\nString in vsv_cArray04:[%s]",vsv_cArray04);
    printf("\nString in vsv_cArray05:[%s]",vsv_cArray05);
    printf("\nString in vsv_cArray_WithoutNullTerminator:[%s]",vsv_cArray_WithoutNullTerminator);


    return(0);
}
/*

SizeOf vsv_cArray01:[9]
SizeOf vsv_cArray02:[9]
SizeOf vsv_cArray03:[4]
SizeOf vsv_cArray04:[7]
SizeOf vsv_cArray05:[17]
SizeOf vsv_cArray_WithoutNullTerminator:[5]
String in vsv_cArray01:[ABCDEFGH]
String in vsv_cArray02:[LKMNOPQS]
String in vsv_cArray03:[UVW]
String in vsv_cArray04:[ITXYMZ]
String in vsv_cArray05:[Alphabet testing]
String in vsv_cArray_WithoutNullTerminator:[Hello]
*/