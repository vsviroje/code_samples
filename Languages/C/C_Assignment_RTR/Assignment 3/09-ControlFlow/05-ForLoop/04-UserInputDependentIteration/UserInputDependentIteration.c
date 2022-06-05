#include<stdio.h>
int main(void){

    int vsv_inum,vsv_num,vsv_i;

    printf("\nEnter loop initialization value:");
    scanf("%d",&vsv_inum);

    printf("\nHow Many Digits Do You Want To Print From %d Onwards ? : ", vsv_inum); 
    scanf("%d",&vsv_num);

    printf("\nFor Loop\n");
    for (vsv_i=vsv_inum;vsv_i<=(vsv_inum+vsv_num);vsv_i++){

        printf("\t%d\n",vsv_i);
    }

    return(0);
}
/*

For Loop
        5
        6
        7
        8
        9
        10
        11
        12
        13
        14
        15

*/