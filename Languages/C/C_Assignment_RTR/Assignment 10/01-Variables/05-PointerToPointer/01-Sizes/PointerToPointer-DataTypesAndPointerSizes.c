#include<stdio.h>

struct vsv_Employee{
    char vsv_cName[100];
    int vsv_iAge;
    float vsv_fSalary;
    char vsv_cSex;
    char vsv_cMaritalStatus;
};

int main(void){
    
    printf("\nsizeof(int):%zd \t sizeof(int*):%zd \t sizeof(int**):%zd",sizeof(int),sizeof(int*),sizeof(int**));
    printf("\nsizeof(float):%zd \t sizeof(float*):%zd \t sizeof(float**):%zd",sizeof(float),sizeof(float*),sizeof(float**));
    printf("\nsizeof(double):%zd \t sizeof(double*):%zd \t sizeof(double**):%zd",sizeof(double),sizeof(double*),sizeof(double**));
    printf("\nsizeof(char):%zd \t sizeof(char*):%zd \t sizeof(char**):%zd",sizeof(char),sizeof(char*),sizeof(char**));
    printf("\nsizeof(struct vsv_Employee):%zd \t sizeof(struct vsv_Employee*):%zd \t sizeof(struct vsv_Employee**):%zd",sizeof(struct vsv_Employee),sizeof(struct vsv_Employee*),sizeof(struct vsv_Employee**));


    return 0;
}
/*

sizeof(int):4    sizeof(int*):8          sizeof(int**):8
sizeof(float):4          sizeof(float*):8        sizeof(float**):8
sizeof(double):8         sizeof(double*):8       sizeof(double**):8
sizeof(char):1   sizeof(char*):8         sizeof(char**):8
sizeof(struct vsv_Employee):112          sizeof(struct vsv_Employee*):8          sizeof(struct vsv_Employee**):8
*/