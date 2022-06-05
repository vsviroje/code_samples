#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main(int vsv_argc,char *vsv_argv[],char *vsv_envp[]){
    int vsv_i,vsv_num;
    int vsv_sum=0;

    if (vsv_argc==1){
        printf("Next Time give multiple number for addition in cmd arrgument\n");
        exit(0);
    }

    for(vsv_i=0;vsv_i<vsv_argc;vsv_i++){
        
        vsv_num=atoi(vsv_argv[vsv_i]);
        vsv_sum+=vsv_num;
    }
    printf("\nSum:[%d]",vsv_sum);


   return (0); 
}
/*
E:\RTR2020\Codes\Assignment_Code\Assignment 4\RTR2020_C_Snippets_Upload_04_01.06.2020\10-Functions\01-EntryPointFunction\06-CommandLineArgumentsApplication\Application-01>CommandLineArgumentsApplication.exe 1 2

Sum:[3]
*/
