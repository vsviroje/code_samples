#include<stdio.h>
int main(void){

    int vsv_age;
    printf("\nEnter age:");
    scanf("%d",&vsv_age);

    if (vsv_age>=18){
        printf("\nAge>=18");
    }else{
        printf("\nAge<18");
    }
    return(0);
}
/*

Enter age:54

Age>=18
*/