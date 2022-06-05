#include<stdio.h>
int main(void){
    
    int vsv_a=5;

    void vsv_change_count(void);

    printf("\nA=[%d]",vsv_a);

    vsv_change_count();
    vsv_change_count();
    vsv_change_count();

    return(0);
}
    
void vsv_change_count(void){
    int vsv_localCount=0;
    vsv_localCount++;
    printf("\nLocal Count=[%d]",vsv_localCount);
}
/*

A=[5]
Local Count=[1]
Local Count=[1]
Local Count=[1]
*/