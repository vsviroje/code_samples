#include<stdio.h>
#define VSV_MAX_NAME_LEN 100

struct vsv_Employee{
    char vsv_name[VSV_MAX_NAME_LEN];
    unsigned int vsv_age;
    char vsv_gender;
    double vsv_sal;
};

struct vsv_MyData{
    int vsv_i;
    float vsv_f;
    double vsv_d;
    char vsv_c;
};

int main(void){
    typedef struct vsv_Employee VSV_MY_EMPLOYEE_TYPE;
    typedef struct vsv_MyData VSV_MY_DATA_TYPE;

    struct vsv_Employee vsv_emp={"vsv",42,'s',123.324};
    VSV_MY_EMPLOYEE_TYPE vsv_emp_typedef={"vsvABC",432,'D',4543.324};

    struct vsv_MyData vsv_md={12,423.2342f,987.2342,'L'};
    VSV_MY_DATA_TYPE vsv_md_typedef;

    vsv_md_typedef.vsv_i=9;
    vsv_md_typedef.vsv_f=3.23f;
    vsv_md_typedef.vsv_d=2.32423;
    vsv_md_typedef.vsv_c='u';

    printf("\nStruct vsv_Employee:");
    printf("\nvsv_emp.vsv_name=%s",vsv_emp.vsv_name);
    printf("\nvsv_emp.vsv_age=%u",vsv_emp.vsv_age);
    printf("\nvsv_emp.vsv_gender=%c",vsv_emp.vsv_gender);
    printf("\nvsv_emp.vsv_sal=%lf\n\n",vsv_emp.vsv_sal);

    printf("\nStruct VSV_MY_EMPLOYEE_TYPE:");
    printf("\nvsv_emp_typedef.vsv_name=%s",vsv_emp_typedef.vsv_name);
    printf("\nvsv_emp_typedef.vsv_age=%u",vsv_emp_typedef.vsv_age);
    printf("\nvsv_emp_typedef.vsv_gender=%c",vsv_emp_typedef.vsv_gender);
    printf("\nvsv_emp_typedef.vsv_sal=%lf\n\n",vsv_emp_typedef.vsv_sal);

    printf("\nStruct vsv_MyData:");
    printf("\nvsv_md.vsv_i=%d",vsv_md.vsv_i);
    printf("\nvsv_md.vsv_f=%f",vsv_md.vsv_f);
    printf("\nvsv_md.vsv_d=%lf",vsv_md.vsv_d);
    printf("\nvsv_md.vsv_c=%d\n\n",vsv_md.vsv_c);

    printf("\nStruct VSV_MY_DATA_TYPE:");
    printf("\nvsv_md_typedef.vsv_i=%d",vsv_md_typedef.vsv_i);
    printf("\nvsv_md_typedef.vsv_f=%f",vsv_md_typedef.vsv_f);
    printf("\nvsv_md_typedef.vsv_d=%lf",vsv_md_typedef.vsv_d);
    printf("\nvsv_md_typedef.vsv_c=%d",vsv_md_typedef.vsv_c);

    return (0);
}
/*
~~Output~~
Struct vsv_Employee:
vsv_emp.vsv_name=vsv
vsv_emp.vsv_age=42
vsv_emp.vsv_gender=s
vsv_emp.vsv_sal=123.324000


Struct VSV_MY_EMPLOYEE_TYPE:
vsv_emp_typedef.vsv_name=vsvABC
vsv_emp_typedef.vsv_age=432
vsv_emp_typedef.vsv_gender=D
vsv_emp_typedef.vsv_sal=4543.324000


Struct vsv_MyData:
vsv_md.vsv_i=12
vsv_md.vsv_f=423.234192
vsv_md.vsv_d=987.234200
vsv_md.vsv_c=76


Struct VSV_MY_DATA_TYPE:
vsv_md_typedef.vsv_i=9
vsv_md_typedef.vsv_f=3.230000
vsv_md_typedef.vsv_d=2.324230
vsv_md_typedef.vsv_c=117
*/