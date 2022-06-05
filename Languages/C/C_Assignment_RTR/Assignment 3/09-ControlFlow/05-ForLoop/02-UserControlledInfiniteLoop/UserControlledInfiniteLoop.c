#include<stdio.h>
int main(void){

    char vsv_option,vsv_ch='\0';

    printf("\nEnter 'Y' oy 'y' To Initiate User Controlled Infinite For Loop : ");

    vsv_option=getch();

    if (vsv_option=='Y' || vsv_option =='y'){

        for(;;){
            printf("\nIn loop..");
            vsv_ch=getch();
            if (vsv_ch=='Q' || vsv_ch=='q')
                break;
        }

    }

    printf("\nEXITTING USER CONTROLLED INFINITE LOOP...");
    return (0);
}
/*

Enter 'Y' oy 'y' To Initiate User Controlled Infinite For Loop :
In loop..
In loop..
In loop..
In loop..
In loop..
EXITTING USER CONTROLLED INFINITE LOOP...
*/