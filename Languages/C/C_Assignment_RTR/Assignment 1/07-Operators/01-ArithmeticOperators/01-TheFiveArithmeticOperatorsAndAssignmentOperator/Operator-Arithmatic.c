#include <stdio.h>
int main(void){

    int ia_vsv;
    int ib_vsv;
    int ires_vsv;

	printf("Enter A Number : ");
	scanf("%d", &ia_vsv);

	printf("\n\n");
	printf("Enter Another B Number : ");
	scanf("%d", &ib_vsv);

    ires_vsv = ia_vsv + ib_vsv;
	printf("ia_vsv + ib_vsv Gives %d.\n",ires_vsv);

    ires_vsv = ia_vsv - ib_vsv;
	printf("ia_vsv - ib_vsv Gives %d.\n",ires_vsv);

    ires_vsv = ia_vsv * ib_vsv;
	printf("ia_vsv * ib_vsv Gives %d.\n",ires_vsv);

    ires_vsv = ia_vsv / ib_vsv;
	printf("ia_vsv / ib_vsv Gives %d.\n",ires_vsv);

    ires_vsv = ia_vsv % ib_vsv;
	printf("ia_vsv %% ib_vsv Gives %d.\n",ires_vsv);


    return(0);
}
/*output
Enter A Number : 1


Enter Another B Number : 2
ia_vsv + ib_vsv Gives 3.
ia_vsv - ib_vsv Gives -1.
ia_vsv * ib_vsv Gives 2.
ia_vsv / ib_vsv Gives 0.
ia_vsv % ib_vsv Gives 1.

*/