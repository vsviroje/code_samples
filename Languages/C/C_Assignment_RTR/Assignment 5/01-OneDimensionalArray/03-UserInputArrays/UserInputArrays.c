#include<stdio.h>
#include<conio.h>
#define VSV_INT_ARRAY_LENGTH 5
#define VSV_FLOAT_ARRAY_LENGTH 3
#define VSV_CHAR_ARRAY_LENGTH 15

int main(void){

    int vsv_iArray[VSV_INT_ARRAY_LENGTH];
    float vsv_fArray[VSV_FLOAT_ARRAY_LENGTH];
    char vsv_cArray[VSV_CHAR_ARRAY_LENGTH];
    int vsv_i;

    printf("\nEnter element for Integer:");
    for(vsv_i=0;vsv_i<VSV_INT_ARRAY_LENGTH;vsv_i++){
        scanf("%d",&vsv_iArray[vsv_i]);
    }

    
    printf("\nEnter element for Float:");
    for(vsv_i=0;vsv_i<VSV_FLOAT_ARRAY_LENGTH;vsv_i++){
        scanf("%f",&vsv_fArray[vsv_i]);
    }

    
    printf("\nEnter element for Char:\n");

    for(vsv_i=0;vsv_i<VSV_CHAR_ARRAY_LENGTH;vsv_i++){
        
        vsv_cArray[vsv_i]=getch();
        printf("%c\n",vsv_cArray[vsv_i]);
    }


    //------------------------------

    printf("\nValue for Integer Array:");
    for(vsv_i=0;vsv_i<VSV_INT_ARRAY_LENGTH;vsv_i++){
        printf("\t%d",vsv_iArray[vsv_i]);
    }

    
    printf("\nValue for Float Array:");
    for(vsv_i=0;vsv_i<VSV_FLOAT_ARRAY_LENGTH;vsv_i++){
        printf("\t%f",vsv_fArray[vsv_i]);
    }

  
    printf("\nValue for Char Array:");
    for(vsv_i=0;vsv_i<VSV_CHAR_ARRAY_LENGTH;vsv_i++){
        printf("\t%c",vsv_cArray[vsv_i]);
    }


    return(0);
}
/*

Enter element for Integer:1
2
3
4
5

Enter element for Float:1.2
2.2
3.4

Enter element for Char:
q
w
e
r
t
y
u
i
o
p
a
s
d
f
g

Value for Integer Array:        1       2       3       4       5
Value for Float Array:  1.200000        2.200000        3.400000
Value for Char Array:   q       w       e       r       t       y       u       i       o       p       a       s       d       f       g
*/