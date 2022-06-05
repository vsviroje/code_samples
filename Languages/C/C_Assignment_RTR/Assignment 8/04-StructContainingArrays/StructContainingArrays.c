#include<stdio.h>

#define VSV_INT_ARRAY_SIZE 10
#define VSV_FLOAT_ARRAY_SIZE 5
#define VSV_CHAR_ARRAY_SIZE 26

#define VSV_NUM_STRINGS 10
#define VSV_MAX_CHARACTERS_PER_STRING 20

#define VSV_ALPHABET_BEGINNING 65 

struct vsv_MyData1{
    int vsv_iArray[VSV_INT_ARRAY_SIZE];
    float vsv_fArray[VSV_FLOAT_ARRAY_SIZE];
};
struct vsv_MyData2{
    char vsv_cArray[VSV_CHAR_ARRAY_SIZE];
    char vsv_strArray[VSV_NUM_STRINGS][VSV_MAX_CHARACTERS_PER_STRING];
};
int main(void){
    struct vsv_MyData1 vsvData1;
    struct vsv_MyData2 vsvData2;
    int vsv_i;

    vsvData1.vsv_fArray[0]=0.1f;
    vsvData1.vsv_fArray[1]=1.2f;
    vsvData1.vsv_fArray[2]=2.3f;
    vsvData1.vsv_fArray[3]=3.4f;
    vsvData1.vsv_fArray[4]=4.5f;

    printf("\nEnter %d Integers:",VSV_INT_ARRAY_SIZE);
    for(vsv_i=0;vsv_i<VSV_INT_ARRAY_SIZE;vsv_i++)
        scanf("%d",&vsvData1.vsv_iArray[vsv_i]);

    for(vsv_i=0;vsv_i<VSV_CHAR_ARRAY_SIZE;vsv_i++)
        vsvData2.vsv_cArray[vsv_i]=(char)(vsv_i+VSV_ALPHABET_BEGINNING);

    strcpy(vsvData2.vsv_strArray[0],"hello1");
    strcpy(vsvData2.vsv_strArray[1],"hello2");
    strcpy(vsvData2.vsv_strArray[2],"hello3");
    strcpy(vsvData2.vsv_strArray[3],"hello4");
    strcpy(vsvData2.vsv_strArray[4],"hello5");
    strcpy(vsvData2.vsv_strArray[5],"hello6");
    strcpy(vsvData2.vsv_strArray[6],"hello7");
    strcpy(vsvData2.vsv_strArray[7],"hello8");
    strcpy(vsvData2.vsv_strArray[8],"hello9");
    strcpy(vsvData2.vsv_strArray[9],"hello10");

    printf("\nvsvData1 Element are:");
    
    printf("\nvsvData1.vsv_iArray[]:");
    for(vsv_i=0;vsv_i<VSV_INT_ARRAY_SIZE;vsv_i++)
        printf("\n\t%d",vsvData1.vsv_iArray[vsv_i]);

    printf("\nvsvData1.vsv_fArray[]:");
    for(vsv_i=0;vsv_i<VSV_FLOAT_ARRAY_SIZE;vsv_i++)
        printf("\n\t%f",vsvData1.vsv_fArray[vsv_i]);



    printf("\n\nvsvData2 Element are:");
    
    printf("\nvsvData2.vsv_cArray[]:");
    for(vsv_i=0;vsv_i<VSV_CHAR_ARRAY_SIZE;vsv_i++)
        printf("\n\t%c",vsvData2.vsv_cArray[vsv_i]);

    printf("\nvsvData2.vsv_strArray[]:");
    for(vsv_i=0;vsv_i<VSV_NUM_STRINGS;vsv_i++)
        printf("\n\t%s",vsvData2.vsv_strArray[vsv_i]);


    return 0;
}
/*

Enter 10 Integers:2
3
41
65
76
3
8
9
54
1

vsvData1 Element are:
vsvData1.vsv_iArray[]:
        2
        3
        41
        65
        76
        3
        8
        9
        54
        1
vsvData1.vsv_fArray[]:
        0.100000
        1.200000
        2.300000
        3.400000
        4.500000

vsvData2 Element are:
vsvData2.vsv_cArray[]:
        A
        B
        C
        D
        E
        F
        G
        H
        I
        J
        K
        L
        M
        N
        O
        P
        Q
        R
        S
        T
        U
        V
        W
        X
        Y
        Z
vsvData2.vsv_strArray[]:
        hello1
        hello2
        hello3
        hello4
        hello5
        hello6
        hello7
        hello8
        hello9
        hello10
*/