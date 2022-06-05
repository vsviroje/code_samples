#include<stdio.h>
#include<conio.h>
int main(void){

    int vsv_i;
    char vsv_ch;

    printf("Printing Numbers From 1 to 100 For Every User Input. Exitting the Loop When User Enters Character 'Q' or 'q' : \n\n");

    for (vsv_i=1;vsv_i<=100;vsv_i++){
        printf("\t%d\n",vsv_i);
        vsv_ch=getch();

        if(vsv_ch=='Q' || vsv_ch=='q'){
            break;
        }
    }

    return (0);
}
/*
Printing Numbers From 1 to 100 For Every User Input. Exitting the Loop When User Enters Character 'Q' or 'q' :

        1
        2
        3
        4
        5
        6
        7
        8
        9
        10

*/