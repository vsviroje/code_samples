#include<stdio.h>
int main(int vsv_argc,char *vsv_argv[]){
    int vsv_i;
    printf("\nHello and Argument Count is :[%d]",vsv_argc);

    for(vsv_i=0;vsv_i<vsv_argc;vsv_i++){
        printf("\nHello and Argument count :[%d] ,Argument :[%s]",vsv_i+1,vsv_argv[vsv_i]);
    }

   return (0); 
}
/*

Hello and Argument Count is :[1]
Hello and Argument count :[1] ,Argument :[EntryPointFunction04.exe]
*/