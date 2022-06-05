#include<stdio.h>
#include<stdlib.h>

#define INT_SIZE sizeof(int)
#define FLOAT_SIZE sizeof(float)
#define DOUBLE_SIZE sizeof(double)
#define CHAR_SIZE sizeof(char)

int main(void){

    
    int *vsv_ipArray=NULL;
    unsigned int vsv_iArrayLen=0;

    float *vsv_fpArray=NULL;
    unsigned int vsv_fArrayLen=0;

    double *vsv_dpArray=NULL;
    unsigned int vsv_dArrayLen=0;

    char *vsv_cpArray=NULL;
    unsigned int vsv_cArrayLen=0;

    int vsv_i;
//------------------------------------------
//Pointer Array allocation/intialization 
//-------------------------------------------
    printf("\n\n\nEnter Number of Element for Integer Array:\n");
    scanf("%d",&vsv_iArrayLen);

    vsv_ipArray=(int *)malloc(INT_SIZE *vsv_iArrayLen);

    if(vsv_ipArray==NULL){
        printf("\nMemory Allocation failed for int array");
        exit(0);
    }

    printf("\nEnter %d elements for int array:\n",vsv_iArrayLen);

    for(vsv_i=0;vsv_i<vsv_iArrayLen;vsv_i++){
        scanf("%d",(vsv_ipArray+vsv_i));
    }

//---------------
    printf("\n\n\nEnter Number of Element for Float Array:\n");
    scanf("%d",&vsv_fArrayLen);

    vsv_fpArray=(float *)malloc(FLOAT_SIZE *vsv_fArrayLen);

    if(vsv_fpArray==NULL){
        printf("\nMemory Allocation failed for float array");
        exit(0);
    }

    printf("\nEnter %d elements for float array:\n",vsv_fArrayLen);

    for(vsv_i=0;vsv_i<vsv_fArrayLen;vsv_i++){
        scanf("%f",(vsv_fpArray+vsv_i));
    }

//------------------------------
    printf("\n\n\nEnter Number of Element for Double Array:\n");
    scanf("%d",&vsv_dArrayLen);

    vsv_dpArray=(double *)malloc(DOUBLE_SIZE *vsv_dArrayLen);

    if(vsv_dpArray==NULL){
        printf("\nMemory Allocation failed for double array");
        exit(0);
    }

    printf("\nEnter %d elements for double array:\n",vsv_dArrayLen);

    for(vsv_i=0;vsv_i<vsv_dArrayLen;vsv_i++){
        scanf("%lf",(vsv_dpArray+vsv_i));
    }
//------------------------------

    printf("\n\n\nEnter Number of Element for Char Array:\n");
    scanf("%d",&vsv_cArrayLen);

    vsv_cpArray=(char *)malloc(CHAR_SIZE *vsv_cArrayLen);

    if(vsv_cpArray==NULL){
        printf("\nMemory Allocation failed for char array");
        exit(0);
    }

    printf("\nEnter %d elements for char array:\n",vsv_cArrayLen);

    for(vsv_i=0;vsv_i<vsv_cArrayLen;vsv_i++){
        *(vsv_cpArray+vsv_i)=getch();
        printf("%c\n",*(vsv_cpArray+vsv_i));
    }
//--------------------------------------
//Pointer Array displaying value
//--------------------------------------
    printf("\n\nInteger Array of %d number of element Entered by you",vsv_iArrayLen);
    for(vsv_i=0;vsv_i<vsv_iArrayLen;vsv_i++){
        printf("\n[%d] = %d  at address %p",vsv_i,*(vsv_ipArray+vsv_i),(vsv_ipArray+vsv_i));
    }
//--------------------------------------
    printf("\n\nFloat Array of %d number of element Entered by you",vsv_fArrayLen);
    for(vsv_i=0;vsv_i<vsv_fArrayLen;vsv_i++){
        printf("\n[%d] = %f  at address %p",vsv_i,*(vsv_fpArray+vsv_i),(vsv_fpArray+vsv_i));
    }
//--------------------------------------
    printf("\n\nDouble Array of %d number of element Entered by you",vsv_dArrayLen);
    for(vsv_i=0;vsv_i<vsv_dArrayLen;vsv_i++){
        printf("\n[%d] = %lf  at address %p",vsv_i,*(vsv_dpArray+vsv_i),(vsv_dpArray+vsv_i));
    }
//--------------------------------------
    printf("\n\nChar Array of %d number of element Entered by you",vsv_cArrayLen);
    for(vsv_i=0;vsv_i<vsv_cArrayLen;vsv_i++){
        printf("\n[%d] = %c  at address %p",vsv_i,*(vsv_cpArray+vsv_i),(vsv_cpArray+vsv_i));
    }
//---------------------------------
//Pointer Array Deallocation
//---------------------------------
    if (vsv_cpArray){
        free(vsv_cpArray);
        vsv_cpArray=NULL;
        printf("\nChar array is deallocated");
    }
    if (vsv_dpArray){
        free(vsv_dpArray);
        vsv_dpArray=NULL;
        printf("\nDouble array is deallocated");
    }
    if (vsv_fpArray){
        free(vsv_fpArray);
        vsv_fpArray=NULL;
        printf("\nFloat array is deallocated");
    }    
    if (vsv_ipArray){
        free(vsv_ipArray);
        vsv_ipArray=NULL;
        printf("\nInteger array is deallocated");
    }
    return (0);
}


/*



Enter Number of Element for Integer Array:
3

Enter 3 elements for int array:
1
2
3



Enter Number of Element for Float Array:
3

Enter 3 elements for float array:
1.2
2.3
4.5



Enter Number of Element for Double Array:
3

Enter 3 elements for double array:
1.23425356
2.344353356
3.345345345



Enter Number of Element for Char Array:
3

Enter 3 elements for char array:
a
b
c


Integer Array of 3 number of element Entered by you
[0] = 1  at address 00000257EEE06060
[1] = 2  at address 00000257EEE06064
[2] = 3  at address 00000257EEE06068

Float Array of 3 number of element Entered by you
[0] = 1.200000  at address 00000257EEE05DE0
[1] = 2.300000  at address 00000257EEE05DE4
[2] = 4.500000  at address 00000257EEE05DE8

Double Array of 3 number of element Entered by you
[0] = 1.234254  at address 00000257EEE06080
[1] = 2.344353  at address 00000257EEE06088
[2] = 3.345345  at address 00000257EEE06090

Char Array of 3 number of element Entered by you
[0] = a  at address 00000257EEE041D0
[1] = b  at address 00000257EEE041D1
[2] = c  at address 00000257EEE041D2
Char array is deallocated
Double array is deallocated
Float array is deallocated
Integer array is deallocated
*/