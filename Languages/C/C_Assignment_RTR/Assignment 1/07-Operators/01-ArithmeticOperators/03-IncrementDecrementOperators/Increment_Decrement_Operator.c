#include<stdio.h>
int main(){

    int ia_vsv=5;
    int ib_vsv=10;
	
    printf("\n\n");
	printf("A = %d\n", ia_vsv);
	printf("A = %d\n", ia_vsv++);
	printf("A = %d\n", ia_vsv);
	printf("A = %d\n\n", ++ia_vsv);

	printf("B = %d\n", ib_vsv);
	printf("B = %d\n", ib_vsv--);
	printf("B = %d\n", ib_vsv);
	printf("B = %d\n\n", --ib_vsv);


    return(0);
}
/*output


A = 5
A = 5
A = 6
A = 7

B = 10
B = 10
B = 9
B = 8


*/