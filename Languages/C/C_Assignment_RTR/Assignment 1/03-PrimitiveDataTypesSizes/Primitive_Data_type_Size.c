
#include<stdio.h>
int main(void){

    printf("\n");

    printf("\nsizeof(int) =[%zd] bytes\n",sizeof(int));
    printf("sizeof(unsigned int) =[%zd] bytes\n",sizeof(unsigned int));
    printf("sizeof(long) =[%zd] bytes\n",sizeof(long));
    printf("sizeof(long long) =[%zd] bytes\n",sizeof(long long));
    printf("sizeof(float) =[%zd] bytes\n",sizeof(float));
    printf("sizeof(double) =[%zd] bytes\n",sizeof(double));
    printf("sizeof(long double) =[%zd] bytes\n",sizeof(long double));
    printf("\n");

    return(0);
}
/*Output


sizeof(int) =[4] bytes
sizeof(unsigned int) =[4] bytes
sizeof(long) =[4] bytes
sizeof(long long) =[8] bytes
sizeof(float) =[4] bytes
sizeof(double) =[8] bytes
sizeof(long double) =[8] bytes


*/