#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define VSV_MAX_STR_LEN 1024
struct vsv_CharacterCount{
    char vsv_ch;
    int vsv_ch_Count;
}vsv_Character_And_Count[]={{'A',0},
                        {'B',0},
                        {'C',0},
                        {'D',0},
                        {'E',0},
                        {'F',0},
                        {'G',0},
                        {'H',0},
                        {'I',0},
                        {'J',0},
                        {'K',0},
                        {'L',0},
                        {'M',0},
                        {'N',0},
                        {'O',0},
                        {'P',0},
                        {'Q',0},
                        {'R',0},
                        {'S',0},
                        {'T',0},
                        {'U',0},
                        {'V',0},
                        {'W',0},
                        {'X',0},
                        {'Y',0},
                        {'Z',0}};

#define VSV_SIZEOF_ARRAY_STRUCT sizeof(vsv_Character_And_Count)
#define VSV_SIZEOF_ONE_STRUCT_FROM_ARRAY_STRUCT sizeof(vsv_Character_And_Count[0])
#define VSV_NUM_ELEMENTS_IN_ARRAY (VSV_SIZEOF_ARRAY_STRUCT/VSV_SIZEOF_ONE_STRUCT_FROM_ARRAY_STRUCT)

int main(void){
    char vsv_Str[VSV_MAX_STR_LEN];
    int vsv_i,vsv_j,vsv_actualStrLen=0;

    printf("\nEnter a string:\n\n");
    gets_s(vsv_Str,VSV_MAX_STR_LEN);

    vsv_actualStrLen=strlen(vsv_Str);

    printf("\nThe String you have entered is:[%s]",vsv_Str);

    for(vsv_i=0;vsv_i<vsv_actualStrLen;vsv_i++){

        for(vsv_j=0;vsv_j<VSV_NUM_ELEMENTS_IN_ARRAY;vsv_j++){

            vsv_Str[vsv_i]=toupper(vsv_Str[vsv_i]);

            if(vsv_Str[vsv_i]==vsv_Character_And_Count[vsv_j].vsv_ch)
                vsv_Character_And_Count[vsv_j].vsv_ch_Count++;
        
        }
    }
    printf("\n\nNum of Character Occurences:");
    for(vsv_i=0;vsv_i<VSV_NUM_ELEMENTS_IN_ARRAY;vsv_i++){
        printf("\nCharacter %c=%d",vsv_Character_And_Count[vsv_i].vsv_ch,vsv_Character_And_Count[vsv_i].vsv_ch_Count);
    }
    
    return 0;
}
/*

Enter a string:

qeew dasddc awpoklacck qmsxlkov,./z.cm

The String you have entered is:[qeew dasddc awpoklacck qmsxlkov,./z.cm]

Num of Character Occurences:
Character A=3
Character B=0
Character C=4
Character D=3
Character E=2
Character F=0
Character G=0
Character H=0
Character I=0
Character J=0
Character K=3
Character L=2
Character M=2
Character N=0
Character O=2
Character P=1
Character Q=2
Character R=0
Character S=2
Character T=0
Character U=0
Character V=1
Character W=2
Character X=1
Character Y=0
Character Z=1
*/