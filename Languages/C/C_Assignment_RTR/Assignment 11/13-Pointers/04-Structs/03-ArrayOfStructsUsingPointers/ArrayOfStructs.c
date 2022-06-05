#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define vsv_NAME_LEN 100
#define vsv_MARITAL_STATUS 10

struct vsv_Employee{
    char vsv_cName[vsv_NAME_LEN];
    int iAge;
    char cSex;
    float fSal;
    char cMaritalStatus;
};

int main(void){

    void vsv_fnMyGetStr(char[],int);

    struct vsv_Employee *pEmpRec=NULL;
    int vsv_NumEmp,vsv_i;

    printf("\nEnter number of Employee:\n");
    scanf("%d",&vsv_NumEmp);

    pEmpRec=(struct vsv_Employee *)malloc(sizeof(struct vsv_Employee));

    if(NULL==pEmpRec){
        printf("\nFailed to allocate memory for pEmpRec");
        exit(0);
    }

    for(vsv_i=0;vsv_i<vsv_NumEmp;vsv_i++){
        printf("\nEnter data for employee number %d",vsv_i+1);
        
        printf("\n\nEnter emp name:\n");
        vsv_fnMyGetStr(pEmpRec[vsv_i].vsv_cName,vsv_NAME_LEN);

        printf("\nEnter emp age:\n");
        scanf("%d",&pEmpRec[vsv_i].iAge);

        printf("\nEnter emp sex(M/m for male,F/f for female):\n");
        pEmpRec[vsv_i].cSex=getch();
        printf("%c",pEmpRec[vsv_i].cSex);
        pEmpRec[vsv_i].cSex=toupper(pEmpRec[vsv_i].cSex);

        printf("\nEnter emp salary:\n");
        scanf("%f",&pEmpRec[vsv_i].fSal);

        printf("\nEnter emp married?(Y/y for Yes,N/n for No):\n");
        pEmpRec[vsv_i].cMaritalStatus=getch();
        printf("%c",pEmpRec[vsv_i].cMaritalStatus);
        pEmpRec[vsv_i].cMaritalStatus=toupper(pEmpRec[vsv_i].cMaritalStatus);
    }

    printf("\n\n\nEmployes Records");
    for(vsv_i=0;vsv_i<vsv_NumEmp;vsv_i++){
        printf("\n\tEmployee number %d",vsv_i+1);
        printf("\n\t\tName      :%s",pEmpRec[vsv_i].vsv_cName);
        printf("\n\t\tAge       :%d",pEmpRec[vsv_i].iAge);
        printf("\n\t\tSalary    :%f",pEmpRec[vsv_i].fSal);

        if(pEmpRec[vsv_i].cSex=='M')
            printf("\n\t\tSex     :Male");
        else if(pEmpRec[vsv_i].cSex=='F')
            printf("\n\t\tSex     :Female");
        else
            printf("\n\t\tSex     :Invalid Data Entered");

        if(pEmpRec[vsv_i].cMaritalStatus=='Y')
            printf("\n\t\tMarital Status  :Married");
        else if(pEmpRec[vsv_i].cMaritalStatus=='N')
            printf("\n\t\tMarital Status  :Unmarried");
        else
            printf("\n\t\tMarital Status  :Invalid Data Entered");

    }
    printf("\n");
    if(pEmpRec){
        free(pEmpRec);
        pEmpRec=NULL;
        printf("\nMemory is deallocated for pEmpRec");
    }

    return 0;
}

    void vsv_fnMyGetStr(char vsv_strArray[],int vsv_iStrSize){
        int vsv_i;
        char vsv_ch='\0';

        vsv_i=0;
        do{
            vsv_ch=getch();
            vsv_strArray[vsv_i]=vsv_ch;
            printf("%c",vsv_strArray[vsv_i]);
            vsv_i++;
        }while((vsv_ch!='\r')&&(vsv_i<vsv_iStrSize));

        if(vsv_i==vsv_iStrSize)
            vsv_strArray[vsv_i-1]='\0';
        else
            vsv_strArray[vsv_i]='\0';

    }
/*

Enter number of Employee:
3

Enter data for employee number 1

Enter emp name:
ert
Enter emp age:
56

Enter emp sex(M/m for male,F/f for female):
s
Enter emp salary:
345456

Enter emp married?(Y/y for Yes,N/n for No):
t
Enter data for employee number 2

Enter emp name:
etrt
Enter emp age:
67

Enter emp sex(M/m for male,F/f for female):
y
Enter emp salary:
5456

Enter emp married?(Y/y for Yes,N/n for No):
g
Enter data for employee number 3

Enter emp name:
btbb
Enter emp age:
65

Enter emp sex(M/m for male,F/f for female):
j
Enter emp salary:
657

Enter emp married?(Y/y for Yes,N/n for No):
k


Employes Records
        Employee number 1
                Name      :ert
                Age       :56
                Salary    :345456.000000
                Sex     :Invalid Data Entered
                Marital Status  :Invalid Data Entered
        Employee number 2
                Name      :etrt
                Age       :67
                Salary    :5456.000000
                Sex     :Invalid Data Entered
                Marital Status  :Invalid Data Entered
        Employee number 3
                Name      :btbb
                Age       :65
                Salary    :657.000000
                Sex     :Invalid Data Entered
                Marital Status  :Invalid Data Entered

Memory is deallocated for pEmpRec
*/