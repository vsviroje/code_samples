
#include<stdio.h>
int main(void){

    int vsv_i,vsv_j,vsv_k;
    vsv_i=1;
    do{
        vsv_j=1;
        do{
            vsv_k=1;
            do{
                printf("\ti:[%d]\tj:[%d]\tk:[%d]\n",vsv_i,vsv_j,vsv_k);
                vsv_k++;
            }while(vsv_k<=3);
            vsv_j++;
        }while(vsv_j<=5);   
        vsv_i++;
    } while(vsv_i<=10);
    return (0);
}

/*
        i:[1]   j:[1]   k:[1]
        i:[1]   j:[1]   k:[2]
        i:[1]   j:[1]   k:[3]
        i:[1]   j:[2]   k:[1]
        i:[1]   j:[2]   k:[2]
        i:[1]   j:[2]   k:[3]
        i:[1]   j:[3]   k:[1]
        i:[1]   j:[3]   k:[2]
        i:[1]   j:[3]   k:[3]
        i:[1]   j:[4]   k:[1]
        i:[1]   j:[4]   k:[2]
        i:[1]   j:[4]   k:[3]
        i:[1]   j:[5]   k:[1]
        i:[1]   j:[5]   k:[2]
        i:[1]   j:[5]   k:[3]
        i:[2]   j:[1]   k:[1]
        i:[2]   j:[1]   k:[2]
        i:[2]   j:[1]   k:[3]
        i:[2]   j:[2]   k:[1]
        i:[2]   j:[2]   k:[2]
        i:[2]   j:[2]   k:[3]
        i:[2]   j:[3]   k:[1]
        i:[2]   j:[3]   k:[2]
        i:[2]   j:[3]   k:[3]
        i:[2]   j:[4]   k:[1]
        i:[2]   j:[4]   k:[2]
        i:[2]   j:[4]   k:[3]
        i:[2]   j:[5]   k:[1]
        i:[2]   j:[5]   k:[2]
        i:[2]   j:[5]   k:[3]
        i:[3]   j:[1]   k:[1]
        i:[3]   j:[1]   k:[2]
        i:[3]   j:[1]   k:[3]
        i:[3]   j:[2]   k:[1]
        i:[3]   j:[2]   k:[2]
        i:[3]   j:[2]   k:[3]
        i:[3]   j:[3]   k:[1]
        i:[3]   j:[3]   k:[2]
        i:[3]   j:[3]   k:[3]
        i:[3]   j:[4]   k:[1]
        i:[3]   j:[4]   k:[2]
        i:[3]   j:[4]   k:[3]
        i:[3]   j:[5]   k:[1]
        i:[3]   j:[5]   k:[2]
        i:[3]   j:[5]   k:[3]
        i:[4]   j:[1]   k:[1]
        i:[4]   j:[1]   k:[2]
        i:[4]   j:[1]   k:[3]
        i:[4]   j:[2]   k:[1]
        i:[4]   j:[2]   k:[2]
        i:[4]   j:[2]   k:[3]
        i:[4]   j:[3]   k:[1]
        i:[4]   j:[3]   k:[2]
        i:[4]   j:[3]   k:[3]
        i:[4]   j:[4]   k:[1]
        i:[4]   j:[4]   k:[2]
        i:[4]   j:[4]   k:[3]
        i:[4]   j:[5]   k:[1]
        i:[4]   j:[5]   k:[2]
        i:[4]   j:[5]   k:[3]
        i:[5]   j:[1]   k:[1]
        i:[5]   j:[1]   k:[2]
        i:[5]   j:[1]   k:[3]
        i:[5]   j:[2]   k:[1]
        i:[5]   j:[2]   k:[2]
        i:[5]   j:[2]   k:[3]
        i:[5]   j:[3]   k:[1]
        i:[5]   j:[3]   k:[2]
        i:[5]   j:[3]   k:[3]
        i:[5]   j:[4]   k:[1]
        i:[5]   j:[4]   k:[2]
        i:[5]   j:[4]   k:[3]
        i:[5]   j:[5]   k:[1]
        i:[5]   j:[5]   k:[2]
        i:[5]   j:[5]   k:[3]
        i:[6]   j:[1]   k:[1]
        i:[6]   j:[1]   k:[2]
        i:[6]   j:[1]   k:[3]
        i:[6]   j:[2]   k:[1]
        i:[6]   j:[2]   k:[2]
        i:[6]   j:[2]   k:[3]
        i:[6]   j:[3]   k:[1]
        i:[6]   j:[3]   k:[2]
        i:[6]   j:[3]   k:[3]
        i:[6]   j:[4]   k:[1]
        i:[6]   j:[4]   k:[2]
        i:[6]   j:[4]   k:[3]
        i:[6]   j:[5]   k:[1]
        i:[6]   j:[5]   k:[2]
        i:[6]   j:[5]   k:[3]
        i:[7]   j:[1]   k:[1]
        i:[7]   j:[1]   k:[2]
        i:[7]   j:[1]   k:[3]
        i:[7]   j:[2]   k:[1]
        i:[7]   j:[2]   k:[2]
        i:[7]   j:[2]   k:[3]
        i:[7]   j:[3]   k:[1]
        i:[7]   j:[3]   k:[2]
        i:[7]   j:[3]   k:[3]
        i:[7]   j:[4]   k:[1]
        i:[7]   j:[4]   k:[2]
        i:[7]   j:[4]   k:[3]
        i:[7]   j:[5]   k:[1]
        i:[7]   j:[5]   k:[2]
        i:[7]   j:[5]   k:[3]
        i:[8]   j:[1]   k:[1]
        i:[8]   j:[1]   k:[2]
        i:[8]   j:[1]   k:[3]
        i:[8]   j:[2]   k:[1]
        i:[8]   j:[2]   k:[2]
        i:[8]   j:[2]   k:[3]
        i:[8]   j:[3]   k:[1]
        i:[8]   j:[3]   k:[2]
        i:[8]   j:[3]   k:[3]
        i:[8]   j:[4]   k:[1]
        i:[8]   j:[4]   k:[2]
        i:[8]   j:[4]   k:[3]
        i:[8]   j:[5]   k:[1]
        i:[8]   j:[5]   k:[2]
        i:[8]   j:[5]   k:[3]
        i:[9]   j:[1]   k:[1]
        i:[9]   j:[1]   k:[2]
        i:[9]   j:[1]   k:[3]
        i:[9]   j:[2]   k:[1]
        i:[9]   j:[2]   k:[2]
        i:[9]   j:[2]   k:[3]
        i:[9]   j:[3]   k:[1]
        i:[9]   j:[3]   k:[2]
        i:[9]   j:[3]   k:[3]
        i:[9]   j:[4]   k:[1]
        i:[9]   j:[4]   k:[2]
        i:[9]   j:[4]   k:[3]
        i:[9]   j:[5]   k:[1]
        i:[9]   j:[5]   k:[2]
        i:[9]   j:[5]   k:[3]
        i:[10]  j:[1]   k:[1]
        i:[10]  j:[1]   k:[2]
        i:[10]  j:[1]   k:[3]
        i:[10]  j:[2]   k:[1]
        i:[10]  j:[2]   k:[2]
        i:[10]  j:[2]   k:[3]
        i:[10]  j:[3]   k:[1]
        i:[10]  j:[3]   k:[2]
        i:[10]  j:[3]   k:[3]
        i:[10]  j:[4]   k:[1]
        i:[10]  j:[4]   k:[2]
        i:[10]  j:[4]   k:[3]
        i:[10]  j:[5]   k:[1]
        i:[10]  j:[5]   k:[2]
        i:[10]  j:[5]   k:[3]

*/