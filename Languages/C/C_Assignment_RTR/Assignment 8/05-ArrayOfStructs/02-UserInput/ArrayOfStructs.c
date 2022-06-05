#include<stdio.h>
#include<ctype.h>
#define VSV_NUM_EMP 5
#define VSV_NAME_LEN 100
#define VSV_MARTAL_STATUS 10

struct vsv_Employee{
    char vsv_cName[VSV_NAME_LEN];
    int vsv_iAge;
    float vsv_fSalary;
    char vsv_cSex;
    char vsv_cMaritalStatus;
};

int main(void){
    void vsv_Func_MyGetString(char[],int);

    struct vsv_Employee vsvEmpRec[VSV_NUM_EMP];

    int vsv_i;

    printf("\nEnter Employees Details:");
    for(vsv_i=0;vsv_i<VSV_NUM_EMP;vsv_i++){
        printf("\n\n\tFor Emp No:[%d]",(vsv_i+1));

        printf("\n\t\tEnter Emp Name:");
        vsv_Func_MyGetString(vsvEmpRec[vsv_i].vsv_cName,VSV_NAME_LEN);

        printf("\n\t\tEnter Emp Age:");
        scanf("%d",&vsvEmpRec[vsv_i].vsv_iAge);

        
        printf("\n\t\tEnter Emp Sex For Male 'M' or For Female 'F':");
        vsvEmpRec[vsv_i].vsv_cSex=getch();
        printf("%c", vsvEmpRec[vsv_i].vsv_cSex);
        vsvEmpRec[vsv_i].vsv_cSex=toupper(vsvEmpRec[vsv_i].vsv_cSex);


        printf("\n\t\tEnter Emp Sal:");
        scanf("%f",&vsvEmpRec[vsv_i].vsv_fSalary);
        
        printf("\n\t\tEnter Emp Marital status For Married 'Y' or For Unmarried 'N':");
        vsvEmpRec[vsv_i].vsv_cMaritalStatus=getch();
        printf("%c", vsvEmpRec[vsv_i].vsv_cMaritalStatus);
        vsvEmpRec[vsv_i].vsv_cMaritalStatus=toupper(vsvEmpRec[vsv_i].vsv_cMaritalStatus);


    }  

    printf("\nEmployees Details:");
    for(vsv_i=0;vsv_i<VSV_NUM_EMP;vsv_i++){
        
        printf("\n\n\tEmp No:[%d]",(vsv_i+1));
        printf("\n\t\tEmp Name:[%s]",vsvEmpRec[vsv_i].vsv_cName);
        printf("\n\t\tEmp Age:[%d]",vsvEmpRec[vsv_i].vsv_iAge);
        

        if (vsvEmpRec[vsv_i].vsv_cSex=='M') 
            printf("\n\t\tEmp Sex:[Male]");
        else if(vsvEmpRec[vsv_i].vsv_cSex=='F')
            printf("\n\t\tEmp Sex:[Female]");
        else
            printf("\n\t\tEmp Sex:[Invalid Data]");

        
        printf("\n\t\tEmp Sal:[%f]",vsvEmpRec[vsv_i].vsv_fSalary);


        if (vsvEmpRec[vsv_i].vsv_cMaritalStatus=='Y')
            printf("\n\t\tEmp Marital Status:[Married]");
        else if(vsvEmpRec[vsv_i].vsv_cMaritalStatus=='N')
            printf("\n\t\tEmp Marital Status:[Unarried]");
        else
            printf("\n\t\tEmp Marital Status:[Invalid Data]");

    }   

    return 0;
}
void vsv_Func_MyGetString(char vsv_str[],int vsv_strSize){
    int vsv_i;
    char vsv_ch='\0';

    vsv_i=0;
    do
    {
        vsv_ch=getch();
        vsv_str[vsv_i]=vsv_ch;
        printf("%c",vsv_str[vsv_i]);
        vsv_i++;
    }while( (vsv_ch !='\r')&& (vsv_i<vsv_strSize) );

    if(vsv_i==vsv_strSize)
        vsv_str[vsv_i-1]='\0';
    else
        vsv_str[vsv_i]='\0';

}   

/*

Enter Employees Details:

        For Emp No:[1]
                Enter Emp Name:vsv
                Enter Emp Age:18

                Enter Emp Sex For Male 'M' or For Female 'F':m
                Enter Emp Sal:10000

                Enter Emp Marital status For Married 'Y' or For Unmarried 'N':n

        For Emp No:[2]
                Enter Emp Name:asv
                Enter Emp Age:23

                Enter Emp Sex For Male 'M' or For Female 'F':m
                Enter Emp Sal:
32.2

                Enter Emp Marital status For Married 'Y' or For Unmarried 'N':n

        For Emp No:[3]
                Enter Emp Name:sdv
                Enter Emp Age:55

                Enter Emp Sex For Male 'M' or For Female 'F':m
                Enter Emp Sal:80

                Enter Emp Marital status For Married 'Y' or For Unmarried 'N':y

        For Emp No:[4]
                Enter Emp Name:ssv
                Enter Emp Age:45

                Enter Emp Sex For Male 'M' or For Female 'F':f
                Enter Emp Sal:90

                Enter Emp Marital status For Married 'Y' or For Unmarried 'N':y

        For Emp No:[5]
                Enter Emp Name:sdv
                Enter Emp Age:80

                Enter Emp Sex For Male 'M' or For Female 'F':m
                Enter Emp Sal:10

                Enter Emp Marital status For Married 'Y' or For Unmarried 'N':y
Employees Details:

        Emp No:[1]
]               Emp Name:[vsv
                Emp Age:[18]
                Emp Sex:[Male]
                Emp Sal:[10000.000000]
                Emp Marital Status:[Unarried]

        Emp No:[2]
]               Emp Name:[asv
                Emp Age:[23]
                Emp Sex:[Male]
                Emp Sal:[32.200001]
                Emp Marital Status:[Unarried]

        Emp No:[3]
]               Emp Name:[sdv
                Emp Age:[55]
                Emp Sex:[Male]
                Emp Sal:[80.000000]
                Emp Marital Status:[Married]

        Emp No:[4]
]               Emp Name:[ssv
                Emp Age:[45]
                Emp Sex:[Female]
                Emp Sal:[90.000000]
                Emp Marital Status:[Married]

        Emp No:[5]
]               Emp Name:[sdv
                Emp Age:[80]
                Emp Sex:[Male]
                Emp Sal:[10.000000]
                Emp Marital Status:[Married]
*/