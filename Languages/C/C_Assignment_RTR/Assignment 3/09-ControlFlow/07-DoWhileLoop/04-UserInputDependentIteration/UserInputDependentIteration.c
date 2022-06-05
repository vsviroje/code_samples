#include<stdio.h>
int main(void){

    int vsv_inum,vsv_num,vsv_i;

    printf("\nEnter loop initialization value:");
    scanf("%d",&vsv_inum);

    printf("\nHow Many Digits Do You Want To Print From %d Onwards ? : ", vsv_inum); 
    scanf("%d",&vsv_num);

    printf("\nDo-While Loop\n");
    vsv_i=vsv_inum;
    do{
        printf("\t%d\n",vsv_i);
        vsv_i++;
    }while(vsv_i<=(vsv_inum+vsv_num));


    return(0);
}
/*

Do-While Loop
        2
        3
        4
        5
        6
        7
        8

*/