#include<stdio.h>
int main(void){

    int vsv_age;
    printf("\nEnter age:");
    scanf("%d",&vsv_age);

    if (vsv_age>=18){
        printf("\nAge>=18");
    }
    printf("\nAge<18");
    return(0);
}
/*

Enter age:56

Age>=18
Age<18
*/