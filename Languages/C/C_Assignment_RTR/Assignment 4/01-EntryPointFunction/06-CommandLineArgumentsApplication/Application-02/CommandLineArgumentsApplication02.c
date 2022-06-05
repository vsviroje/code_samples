#include<stdio.h>
#include<stdlib.h>

int main(int vsv_argc,char *vsv_argv[],char *vsv_envp[]){
    int vsv_i;

    if (vsv_argc!=4){
        printf("Next Time give Full Name in cmd arrgument\n");
        exit(0);
    }
    printf("\nFull Name:");

    for(vsv_i=1;vsv_i<vsv_argc;vsv_i++){
        
        printf("\t[%s]",vsv_argv[vsv_i]);

    }


   return (0); 
}
/*
E:\RTR2020\Codes\Assignment_Code\Assignment 4\RTR2020_C_Snippets_Upload_04_01.06.2020\10-Functions\01-EntryPointFunction\06-CommandLineArgumentsApplication\Application-02>CommandLineArgumentsApplication02.exe
Next Time give Full Name in cmd arrgument

E:\RTR2020\Codes\Assignment_Code\Assignment 4\RTR2020_C_Snippets_Upload_04_01.06.2020\10-Functions\01-EntryPointFunction\06-CommandLineArgumentsApplication\Application-02>CommandLineArgumentsApplication02.exe 23 343
Next Time give Full Name in cmd arrgument

E:\RTR2020\Codes\Assignment_Code\Assignment 4\RTR2020_C_Snippets_Upload_04_01.06.2020\10-Functions\01-EntryPointFunction\06-CommandLineArgumentsApplication\Application-02>CommandLineArgumentsApplication02.exe vsv asv ssv

Full Name:      [vsv]   [asv]   [ssv]
*/