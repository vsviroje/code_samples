#include<stdio.h>
int main(void){
    char vsv_cArray[10];
    int vsv_i;
    
    for(vsv_i=0;vsv_i<10;vsv_i++)
        vsv_cArray[vsv_i]=(char)(vsv_i+65);
        
    printf("\nElements in Char Array:");    
    for(vsv_i=0;vsv_i<10;vsv_i++)
        printf("\n\tvsv_cArray[%d]=%c",vsv_i,vsv_cArray[vsv_i]);
        
    printf("\nElements in Char Array:");    
    for(vsv_i=0;vsv_i<10;vsv_i++)
        printf("\n\tvsv_cArray[%d]=%c\tAddress=%p",vsv_i,vsv_cArray[vsv_i],&vsv_cArray[vsv_i]);

    return 0;
}
/*

Elements in Char Array:
        vsv_cArray[0]=A
        vsv_cArray[1]=B
        vsv_cArray[2]=C
        vsv_cArray[3]=D
        vsv_cArray[4]=E
        vsv_cArray[5]=F
        vsv_cArray[6]=G
        vsv_cArray[7]=H
        vsv_cArray[8]=I
        vsv_cArray[9]=J
Elements in Char Array:
        vsv_cArray[0]=A Address=00000035BDD4F858
        vsv_cArray[1]=B Address=00000035BDD4F859
        vsv_cArray[2]=C Address=00000035BDD4F85A
        vsv_cArray[3]=D Address=00000035BDD4F85B
        vsv_cArray[4]=E Address=00000035BDD4F85C
        vsv_cArray[5]=F Address=00000035BDD4F85D
        vsv_cArray[6]=G Address=00000035BDD4F85E
        vsv_cArray[7]=H Address=00000035BDD4F85F
        vsv_cArray[8]=I Address=00000035BDD4F860
        vsv_cArray[9]=J Address=00000035BDD4F861
*/