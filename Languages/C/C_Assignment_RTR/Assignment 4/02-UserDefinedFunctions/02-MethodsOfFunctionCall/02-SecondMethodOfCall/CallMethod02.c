#include<stdio.h>
int main(int vsv_argc,char *vsv_argv[],char *vsv_envp[]){

    void vsv_DisInfo(void);
    void vsv_FuncCountry(void);

    vsv_DisInfo();
    vsv_FuncCountry();

    return (0);
}
void vsv_DisInfo(void){

    void vsv_FuncMy(void);
    void vsv_FuncName(void);
    void vsv_FuncIs(void);
    void vsv_FuncFirstName(void);
    void vsv_FuncMiddleName(void);
    void vsv_FuncSurname(void);
    void vsv_FuncOfTesting(void);
    
    vsv_FuncMy();
    vsv_FuncName();
    vsv_FuncIs();
    vsv_FuncFirstName();
    vsv_FuncMiddleName();
    vsv_FuncSurname();
    vsv_FuncOfTesting();

}
void vsv_FuncMy(void){

    printf("\n\n My");
}
void vsv_FuncName(void){

    printf("\n\n Name");
}
void vsv_FuncIs(void){

    printf("\n\n Is");
}
void vsv_FuncFirstName(void){

    printf("\n\n Vardhaman");
}
void vsv_FuncMiddleName(void){

    printf("\n\n Sanjeev");
}
void vsv_FuncSurname(void){

    printf("\n\n Viroje");
}
void vsv_FuncOfTesting(void){

    printf("\n\n Of Testing");
}
void vsv_FuncCountry(void){

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