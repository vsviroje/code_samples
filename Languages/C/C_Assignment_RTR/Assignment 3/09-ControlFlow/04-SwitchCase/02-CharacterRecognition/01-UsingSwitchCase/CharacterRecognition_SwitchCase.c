#include<stdio.h>
#include<conio.h>

//A-Z
#define vsv_UC_Beginning 65
#define vsv_UC_Ending 90

//a-z
#define vsv_LC_Beginning 97
#define vsv_LC_Ending 122

//0-9
#define vsv_digit_Beginning 48
#define vsv_digit_Ending 57

int main(void){

    char vsv_ch;
    int vsv_ich;

    printf("\nEnter Character:");
    vsv_ch=getch();

    switch(vsv_ch){

        case 'A':
        case 'a':

        case 'E':
        case 'e':

        case 'I':
        case 'i':

        case 'O':
        case 'o':

        case 'U':
        case 'u':
            printf("\nCharacter is VOWEL :[%c]",vsv_ch);
            break;
        default:
            vsv_ich=(int)vsv_ch;

            if ((vsv_ich>=vsv_UC_Beginning && vsv_ich<=vsv_UC_Ending)||(vsv_ich>=vsv_LC_Beginning && vsv_ich<=vsv_LC_Ending)) 
                printf("\nCharacter is constant from English Alphabet :[%c]",vsv_ch);

            else if (vsv_ich>=vsv_digit_Beginning && vsv_ich<=vsv_digit_Ending)
                printf("\nCharacter is digit from 0-9 :[%c]",vsv_ch);
            
            else
                printf("\nCharacter is special character :[%c]",vsv_ch);

            break;
    }

    return (0);
}
/*

Enter Character:
Character is constant from English Alphabet :[t]
*/

