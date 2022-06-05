#include<stdio.h>
int main(int vsv_argc,char *vsv_argv[],char *vsv_envp[]){

    void vsv_FuncCountry(void);
    vsv_FuncCountry();

    return (0);
}

void vsv_FuncMy(void){

    printf("\n\n My");
}
void vsv_FuncName(void){
    void vsv_FuncMy(void);
    vsv_FuncMy();
    printf("\n\n Name");
}
void vsv_FuncIs(void){
    void vsv_FuncName(void);
    vsv_FuncName();
    printf("\n\n Is");
}
void vsv_FuncFirstName(void){
    void vsv_FuncIs(void);
    vsv_FuncIs();
    printf("\n\n Vardhaman");
}
void vsv_FuncMiddleName(void){
    void vsv_FuncFirstName(void);
    vsv_FuncFirstName();
    printf("\n\n Sanjeev");
}
void vsv_FuncSurname(void){
    void vsv_FuncMiddleName(void);
    vsv_FuncMiddleName();
    printf("\n\n Viroje");
}
void vsv_FuncOfTesting(void){
    void vsv_FuncSurname(void);
    vsv_FuncSurname();
    printf("\n\n Of Testing");
}
void vsv_FuncCountry(void){
    void vsv_FuncOfTesting(void);
    vsv_FuncOfTesting();
    printf("\n\n I live in India!");
}
/*


 My

 Name

 Is

 Vardhaman

 Sanjeev

 Viroje

 Of Testing

 I live in India!
*/