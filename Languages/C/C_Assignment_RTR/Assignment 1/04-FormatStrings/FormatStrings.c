
#include<stdio.h>
int main(void){

    int i_vsv=15;

    printf("Decimal value of i_vsv :[%d]\n",i_vsv);
    printf("Octal value of i_vsv :[%d]\n",i_vsv);
    printf("Integer hexadecimal i_vsv in lower case :[%x]\n",i_vsv);
    printf("Integer hexadecimal i_vsv in upper case:[%X]\n",i_vsv);

    char c_vsv='V';
    printf("Character c_vsv =[%c]\n",c_vsv);
    
    char s_vsv[]="69_RTR_Batch_2020";
    printf("String s_vsv:[%s]\n",s_vsv);

    long l_vsv=20041997L;
    printf("Long l_vsv :[%ld]\n",l_vsv);

    unsigned int ui_vsv=-7;
    printf("Unsigned integer ui_vsv :[%u]\n",ui_vsv);

    float f_vsv=1234234.123f;
    printf("Float f_vsv with %%f :[%f]\n",f_vsv);
    printf("Float f_vsv with %%f4.2 :[%4.2f]\n",f_vsv);
    printf("Float f_vsv with %%f6.5 :[%6.5f]\n",f_vsv);

    double d_vsv=3.14159265358979323846;
    printf("Double Precision Floating Point Number Without Exponential = %g\n", d_vsv);
	printf("Double Precision Floating Point Number With Exponential (Lower Case) = %e\n", d_vsv);
	printf("Double Precision Floating Point Number With Exponential (Upper Case) = %E\n\n", d_vsv);
	printf("Double Hexadecimal Value Of 'd_vsv' (Hexadecimal Letters In Lower Case) = %a\n", d_vsv);
	printf("Double Hexadecimal Value Of 'd_vsv' (Hexadecimal Letters In Upper Case) = %A\n\n", d_vsv);
 

    return(0);
}
/*Output
Decimal value of i_vsv :[15]
Octal value of i_vsv :[15]
Integer hexadecimal i_vsv in lower case :[f]
Integer hexadecimal i_vsv in upper case:[F]
Character c_vsv =[V]
String s_vsv:[69_RTR_Batch_2020]
Long l_vsv :[20041997]
Unsigned integer ui_vsv :[4294967289]
Float f_vsv with %f :[1234234.125000]
Float f_vsv with %f4.2 :[1234234.13]
Float f_vsv with %f6.5 :[1234234.12500]
Double Precision Floating Point Number Without Exponential = 3.14159
Double Precision Floating Point Number With Exponential (Lower Case) = 3.141593e+00
Double Precision Floating Point Number With Exponential (Upper Case) = 3.141593E+00

Double Hexadecimal Value Of 'd_vsv' (Hexadecimal Letters In Lower Case) = 0x1.921fb54442d18p+1
Double Hexadecimal Value Of 'd_vsv' (Hexadecimal Letters In Upper Case) = 0X1.921FB54442D18P+1


*/