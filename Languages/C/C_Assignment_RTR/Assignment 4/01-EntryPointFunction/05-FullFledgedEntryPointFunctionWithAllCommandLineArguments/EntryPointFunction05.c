#include<stdio.h>
int main(int vsv_argc,char *vsv_argv[],char *vsv_envp[]){
    int vsv_i;
    printf("\nHello and Argument Count is :[%d]",vsv_argc);

    for(vsv_i=0;vsv_i<vsv_argc;vsv_i++){
        printf("\nArgument count :[%d] ,Argument :[%s]",vsv_i+1,vsv_argv[vsv_i]);
    }

    for(vsv_i=0;vsv_i<20;vsv_i++){
        printf("\nEnvironment Variables number :[%d] = [%s]",vsv_i+1,vsv_envp[vsv_i]);
    }


   return (0); 
}
/*

Hello and Argument Count is :[1]
Argument count :[1] ,Argument :[EntryPointFunction05.exe]
Environment Variables number :[1] = [ALLUSERSPROFILE=C:\ProgramData]
Environment Variables number :[2] = [APPDATA=C:\Users\Viroje\AppData\Roaming]
Environment Variables number :[3] = [CommandPromptType=Native]
Environment Variables number :[4] = [CommonProgramFiles=C:\Program Files\Common Files]
Environment Variables number :[5] = [CommonProgramFiles(x86)=C:\Program Files (x86)\Common Files]
Environment Variables number :[6] = [CommonProgramW6432=C:\Program Files\Common Files]
Environment Variables number :[7] = [COMPUTERNAME=VIROJE]
Environment Variables number :[8] = [ComSpec=C:\WINDOWS\system32\cmd.exe]
Environment Variables number :[9] = [DevEnvDir=C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\Common7\IDE\]
Environment Variables number :[10] = [DriverData=C:\Windows\System32\Drivers\DriverData]
Environment Variables number :[11] = [ExtensionSdkDir=C:\Program Files (x86)\Microsoft SDKs\Windows Kits\10\ExtensionSDKs]
Environment Variables number :[12] = [FPS_BROWSER_APP_PROFILE_STRING=Internet Explorer]
Environment Variables number :[13] = [FPS_BROWSER_USER_PROFILE_STRING=Default]
Environment Variables number :[14] = [Framework40Version=v4.0]
Environment Variables number :[15] = [FrameworkDir=C:\WINDOWS\Microsoft.NET\Framework64\]
Environment Variables number :[16] = [FrameworkDIR64=C:\WINDOWS\Microsoft.NET\Framework64]
Environment Variables number :[17] = [FrameworkVersion=v4.0.30319]
Environment Variables number :[18] = [FrameworkVersion64=v4.0.30319]
Environment Variables number :[19] = [FSHARPINSTALLDIR=C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\Common7\IDE\CommonExtensions\Microsoft\FSharp\]
Environment Variables number :[20] = [HOMEDRIVE=C:]
*/