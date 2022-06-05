#include<stdio.h>
int main(void){

    char vsv_option,vsv_ch='\0';

  
    do{

        printf("\nInfinite loop is begins Enter 'Q' oy 'q' To exit");

        do{
            printf("\nIn loop..");
            vsv_ch=getch();
            if (vsv_ch=='Q' || vsv_ch=='q')
                break;
        }while(1);
        
        printf("\nEnter 'Y' oy 'y' To Initiate User Controlled Infinite without if Do-While Loop : ");
        vsv_option=getch();

    }while(vsv_option=='Y' || vsv_option =='y');

    printf("\nEXITTING USER CONTROLLED INFINITE LOOP...");
    return (0);
}

/*

Infinite loop is begins Enter 'Q' oy 'q' To exit
In loop..
In loop..
In loop..
In loop..
Enter 'Y' oy 'y' To Initiate User Controlled Infinite without if Do-While Loop :
Infinite loop is begins Enter 'Q' oy 'q' To exit
In loop..
Enter 'Y' oy 'y' To Initiate User Controlled Infinite without if Do-While Loop :
EXITTING USER CONTROLLED INFINITE LOOP...
*/