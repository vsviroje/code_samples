#include <stdio.h>
int main(void){

    int ia_vsv;
    int ib_vsv;
    int ix_vsv;

	printf("Enter A Number : ");
	scanf("%d", &ia_vsv);

	printf("\n\n");
	printf("Enter Another B Number : ");
	scanf("%d", &ib_vsv);
   
    printf("\n\n"); 
    
    ix_vsv = ia_vsv;
	ia_vsv += ib_vsv; 
    printf("ix_vsv= %d And ib_vsv = %d.\n", ix_vsv, ib_vsv);
	printf("ia_vsv += ib_vsv  Gives %d.\n", ia_vsv);

    printf("\n\n");
    
    ix_vsv = ia_vsv;
	ia_vsv -= ib_vsv; 
    printf("ix_vsv= %d And ib_vsv = %d.\n", ix_vsv, ib_vsv);
	printf("ia_vsv -= ib_vsv  Gives %d.\n", ia_vsv);
    
    printf("\n\n");
    
    ix_vsv = ia_vsv;
	ia_vsv *= ib_vsv; 
    printf("ix_vsv= %d And ib_vsv = %d.\n", ix_vsv, ib_vsv);
	printf("ia_vsv *= ib_vsv  Gives %d.\n", ia_vsv);
    
    printf("\n\n");
    
    ix_vsv = ia_vsv;
	ia_vsv /= ib_vsv; 
    printf("ix_vsv= %d And ib_vsv = %d.\n", ix_vsv, ib_vsv);
	printf("ia_vsv /= ib_vsv  Gives %d.\n", ia_vsv);
    
    printf("\n\n");
    
    ix_vsv = ia_vsv;
	ia_vsv %= ib_vsv; 
    printf("ix_vsv= %d And ib_vsv = %d.\n", ix_vsv, ib_vsv);
	printf("ia_vsv %%= ib_vsv  Gives %d.\n", ia_vsv);
    return(0);
}
/*output
Enter A Number : 3


Enter Another B Number : 4


ix_vsv= 3 And ib_vsv = 4.
ia_vsv += ib_vsv  Gives 7.


ix_vsv= 7 And ib_vsv = 4.
ia_vsv -= ib_vsv  Gives 3.


ix_vsv= 3 And ib_vsv = 4.
ia_vsv *= ib_vsv  Gives 12.


ix_vsv= 12 And ib_vsv = 4.
ia_vsv /= ib_vsv  Gives 3.


ix_vsv= 3 And ib_vsv = 4.
ia_vsv %= ib_vsv  Gives 3.

*/