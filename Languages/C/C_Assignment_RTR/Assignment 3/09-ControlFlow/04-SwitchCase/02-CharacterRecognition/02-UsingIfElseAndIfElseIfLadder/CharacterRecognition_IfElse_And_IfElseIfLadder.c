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

        if (vsv_ch=='A' || vsv_ch=='a' || vsv_ch=='E' || vsv_ch=='e' || vsv_ch=='I' || vsv_ch=='i' || vsv_ch=='O' || vsv_ch=='o' || vsv_ch=='u' || vsv_ch=='U'){
                printf("\nCharacter is VOWEL :[%c]",vsv_ch);
        }else{
            vsv_ich=(int)vsv_ch;

            if ((vsv_ich>=vsv_UC_Beginning && vsv_ich<=vsv_UC_Ending)||(vsv_ich>=vsv_LC_Beginning && vsv_ich<=vsv_LC_Ending)) 
                printf("\nCharacter is constant from English Alphabet :[%c]",vsv_ch);

            else if (vsv_ich>=vsv_digit_Beginning && vsv_ich<=vsv_digit_Ending)
                printf("\nCharacter is digit from 0-9 :[%c]",vsv_ch);
                
            else
                printf("\nCharacter is special character :[%c]",vsv_ch);
        }

    return (0);
}
/*

Enter Character:
Character is VOWEL :[e]
*/
