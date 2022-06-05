#include<stdio.h>

typedef int VSV_MY_INT;

int main(void){

    VSV_MY_INT vsv_fnAdd(VSV_MY_INT,VSV_MY_INT);

    typedef int VSV_MY_INT;
    typedef float VSV_MY_FLOAT;
    typedef char VSV_MY_CHAR;
    typedef double VSV_MY_DOUBLE;

    typedef unsigned int UINT;
    typedef UINT HANDLE;
    typedef HANDLE HWND;
    typedef HANDLE HINSTANCE;

    VSV_MY_INT vsv_iA=10,vsv_i;
    VSV_MY_INT vsv_iArray[]={1,2,3,4,5,6,7,8,9,10};

    VSV_MY_FLOAT vsv_f=12.2f;
    const VSV_MY_FLOAT vsv_fc_PI=3.14f;
    
    VSV_MY_CHAR vsv_ch='*';
    VSV_MY_CHAR vsv_chArray1[]="vardhaman";
    VSV_MY_CHAR vsv_chArray2[][10]={"VSViroje","ASViroje","SSV"};

    VSV_MY_DOUBLE vsv_d=5.234214;

    UINT uint=3124;
    HANDLE handle=9876;
    HWND hwnd=4234;
    HINSTANCE hInstance=1232;

    printf("\nType VSV_MY_INT variable vsv_iA=%d\n\n",vsv_iA);

    for(vsv_i=0;vsv_i<(sizeof(vsv_iArray)/sizeof(int));vsv_i++){
        printf("\nType VSV_MY_INT so vsv_iArray[%d]=%d",vsv_i,vsv_iArray[vsv_i]);
    }

    printf("\n\nType VSV_MY_FLOAT vsv_f=%f",vsv_f);
    printf("\nType VSV_MY_FLOAT const vsv_fc_PI=%f\n\n",vsv_fc_PI);

    printf("\nType VSV_MY_DOUBLE vsv_d=%lf\n\n",vsv_d);
    
    printf("\nType VSV_MY_CHAR vsv_ch=%c",vsv_ch);
    printf("\nType VSV_MY_CHAR vsv_chArray1=%s\n\n",vsv_chArray1);

    for(vsv_i=0;vsv_i<(sizeof(vsv_chArray2)/sizeof(vsv_chArray2[0]));vsv_i++){
        printf("%s\t",vsv_chArray2[vsv_i]);
    }

    printf("\n\nType  UINT uint=%u",uint);
    printf("\nType  HANDLE handle=%u",handle);
    printf("\nType  HWND hwnd=%u",hwnd);
    printf("\nType  HINSTANCE hInstance=%u\n\n",hInstance);

    VSV_MY_INT vsv_x=90;
    VSV_MY_INT vsv_y=20;
    VSV_MY_INT vsv_ret;

    vsv_ret=vsv_fnAdd(vsv_x,vsv_y);
    printf("\nVSV_ret=%d",vsv_ret);

    return 0;
}

VSV_MY_INT vsv_fnAdd(VSV_MY_INT vsv_a,VSV_MY_INT vsv_b){
    VSV_MY_INT vsv_c;
    vsv_c=vsv_a+vsv_b;
    return (vsv_c);
}
/*
~~Output~~

Type VSV_MY_INT variable vsv_iA=10


Type VSV_MY_INT so vsv_iArray[0]=1
Type VSV_MY_INT so vsv_iArray[1]=2
Type VSV_MY_INT so vsv_iArray[2]=3
Type VSV_MY_INT so vsv_iArray[3]=4
Type VSV_MY_INT so vsv_iArray[4]=5
Type VSV_MY_INT so vsv_iArray[5]=6
Type VSV_MY_INT so vsv_iArray[6]=7
Type VSV_MY_INT so vsv_iArray[7]=8
Type VSV_MY_INT so vsv_iArray[8]=9
Type VSV_MY_INT so vsv_iArray[9]=10

Type VSV_MY_FLOAT vsv_f=12.200000
Type VSV_MY_FLOAT const vsv_fc_PI=3.140000


Type VSV_MY_DOUBLE vsv_d=5.234214


Type VSV_MY_CHAR vsv_ch=*
Type VSV_MY_CHAR vsv_chArray1=vardhaman

VSViroje        ASViroje        SSV

Type  UINT uint=3124
Type  HANDLE handle=9876
Type  HWND hwnd=4234
Type  HINSTANCE hInstance=1232


VSV_ret=110
*/