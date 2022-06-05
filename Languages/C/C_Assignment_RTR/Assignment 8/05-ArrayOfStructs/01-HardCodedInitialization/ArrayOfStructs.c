#include<stdio.h>
#define VSV_NAME_LEN 100
#define VSV_MARTAL_STATUS 10

struct vsv_Employee{
    char vsv_cName[VSV_NAME_LEN];
    int vsv_iAge;
    float vsv_fSalary;
    char vsv_cSex;
    char vsv_cMaritalStatus[VSV_MARTAL_STATUS];
};

int main(void){

    struct vsv_Employee vsvEmpRec[5];

    char vsv_cEmpRajiv[]="Rajiv";
    char vsv_cEmpSonu[]="Sonu";
    char vsv_cEmpMonu[]="Monu";
    char vsv_cEmpChotu[]="Chotu";
    char vsv_cEmpViroje[]="Viroje";
    int vsv_i;
    strcpy(vsvEmpRec[0].vsv_cName,vsv_cEmpRajiv);
    vsvEmpRec[0].vsv_iAge=30;
    vsvEmpRec[0].vsv_fSalary=20000.20f;
    vsvEmpRec[0].vsv_cSex='M';
    strcpy(vsvEmpRec[0].vsv_cMaritalStatus,"Unmarried");


    strcpy(vsvEmpRec[1].vsv_cName,vsv_cEmpSonu);
    vsvEmpRec[1].vsv_iAge=20;
    vsvEmpRec[1].vsv_fSalary=40000.20f;
    vsvEmpRec[1].vsv_cSex='f';
    strcpy(vsvEmpRec[1].vsv_cMaritalStatus,"Married");



    strcpy(vsvEmpRec[2].vsv_cName,vsv_cEmpMonu);
    vsvEmpRec[2].vsv_iAge=26;
    vsvEmpRec[2].vsv_fSalary=76000.20f;
    vsvEmpRec[2].vsv_cSex='m';
    strcpy(vsvEmpRec[2].vsv_cMaritalStatus,"Unmarried");



    strcpy(vsvEmpRec[3].vsv_cName,vsv_cEmpChotu);
    vsvEmpRec[3].vsv_iAge=34;
    vsvEmpRec[3].vsv_fSalary=20000.20f;
    vsvEmpRec[3].vsv_cSex='F';
    strcpy(vsvEmpRec[3].vsv_cMaritalStatus,"Married");



    strcpy(vsvEmpRec[4].vsv_cName,vsv_cEmpViroje);
    vsvEmpRec[4].vsv_iAge=23;
    vsvEmpRec[4].vsv_fSalary=10000.20f;
    vsvEmpRec[4].vsv_cSex='M';
    strcpy(vsvEmpRec[4].vsv_cMaritalStatus,"Unmarried");

    printf("\nEmployees Details:");
    for(vsv_i=0;vsv_i<5;vsv_i++){
        printf("\n\n\tEmp No:[%d]",(vsv_i+1));
        printf("\n\t\tEmp Name:[%s]",vsvEmpRec[vsv_i].vsv_cName);
        printf("\n\t\tEmp Age:[%d]",vsvEmpRec[vsv_i].vsv_iAge);
        
        if (vsvEmpRec[vsv_i].vsv_cSex=='M' || vsvEmpRec[vsv_i].vsv_cSex=='m')
            printf("\n\t\tEmp Sex:[Male]");
        else
            printf("\n\t\tEmp Sex:[Female]");

        printf("\n\t\tEmp Sal:[%f]",vsvEmpRec[vsv_i].vsv_fSalary);
        printf("\n\t\tEmp Age:[%s]",vsvEmpRec[vsv_i].vsv_cMaritalStatus);

    }   

    return 0;
}
/*

Employees Details:

        Emp No:[1]
                Emp Name:[Rajiv]
                Emp Age:[30]
                Emp Sex:[Male]
                Emp Sal:[20000.199219]
                Emp Age:[Unmarried]

        Emp No:[2]
                Emp Name:[Sonu]
                Emp Age:[20]
                Emp Sex:[Female]
                Emp Sal:[40000.199219]
                Emp Age:[Married]

        Emp No:[3]
                Emp Name:[Monu]
                Emp Age:[26]
                Emp Sex:[Male]
                Emp Sal:[76000.203125]
                Emp Age:[Unmarried]

        Emp No:[4]
                Emp Name:[Chotu]
                Emp Age:[34]
                Emp Sex:[Female]
                Emp Sal:[20000.199219]
                Emp Age:[Married]

        Emp No:[5]
                Emp Name:[Viroje]
                Emp Age:[23]
                Emp Sex:[Male]
                Emp Sal:[10000.200195]
                Emp Age:[Unmarried]
*/