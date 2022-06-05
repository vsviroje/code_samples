#include<stdio.h>

struct vsv_Employee{
    char vsv_name[100];
    int vsv_age;
    float vsv_salary;
    char sex;
    char marital_status;
};

int main(void){

    printf("\nSizeOf Data type and pointer of same Data type:-");
    printf("\nsizeof(int):[%zd]\tsizeof(int*):[%zd]",sizeof(int),sizeof(int*));
    printf("\nsizeof(float):[%zd]\tsizeof(float*):[%zd]",sizeof(float),sizeof(float*));
    printf("\nsizeof(double):[%zd]\tsizeof(double*):[%zd]",sizeof(double),sizeof(double*));
    printf("\nsizeof(char):[%zd]\tsizeof(char*):[%zd]",sizeof(char),sizeof(char*));
    printf("\nsizeof(struct vsv_Employee):[%zd]\tsizeof(struct vsv_Employee*):[%zd]",sizeof(struct vsv_Employee),sizeof(struct vsv_Employee*));
    return (0);
}
/*
sizeof(int):[4] sizeof(int*):[8]
sizeof(float):[4]       sizeof(float*):[8]
sizeof(double):[8]      sizeof(double*):[8]
sizeof(char):[1]        sizeof(char*):[8]
sizeof(struct vsv_Employee):[112]       sizeof(struct vsv_Employee*):[8]
*/
