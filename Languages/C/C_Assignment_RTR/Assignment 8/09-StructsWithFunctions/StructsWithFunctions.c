#include<stdio.h>
struct vsv_MyData{
    int vsv_i;
    float vsv_f;
    double vsv_d;
    char vsv_ch;
};
int main(void){

    struct vsv_MyData vsv_Func_AddStructMembers(struct vsv_MyData,struct vsv_MyData,struct vsv_MyData);
    struct vsv_MyData data1,data2,data3,answer_data;

    printf("\nEnter data1 member values:");

    printf("\n\tEnter data1.vsv_i :");
    scanf("%d",&data1.vsv_i);
    printf("\n\tEnter data1.vsv_f :");
    scanf("%f",&data1.vsv_f);
    printf("\n\tEnter data1.vsv_d :");
    scanf("%lf",&data1.vsv_d);
    printf("\n\tEnter data1.vsv_ch :");
    data1.vsv_ch=getch();
    printf("\t%c",data1.vsv_ch);
    
    printf("\n\nEnter data2 member values:");

    printf("\n\tEnter data2.vsv_i :");
    scanf("%d",&data2.vsv_i);
    printf("\n\tEnter data2.vsv_f :");
    scanf("%f",&data2.vsv_f);
    printf("\n\tEnter data2.vsv_d :");
    scanf("%lf",&data2.vsv_d);
    printf("\n\tEnter data2.vsv_ch :");
    data2.vsv_ch=getch();
    printf("\t%c",data2.vsv_ch);

    printf("\n\n\tEnter data3 member values:");

    printf("\n\tEnter data3.vsv_i :");
    scanf("%d",&data3.vsv_i);
    printf("\n\tEnter data3.vsv_f :");
    scanf("%f",&data3.vsv_f);
    printf("\n\tEnter data3.vsv_d :");
    scanf("%lf",&data3.vsv_d);
    printf("\n\tEnter data3.vsv_ch :");
    data3.vsv_ch=getch();
    printf("\t%c",data3.vsv_ch);

    answer_data=vsv_Func_AddStructMembers(data1,data2,data3);

    printf("\n\nanswer_data is");

    printf("\n\tanswer_data.vsv_i =%d",answer_data.vsv_i);
    printf("\n\tanswer_data.vsv_f =%f",answer_data.vsv_f);
    printf("\n\tanswer_data.vsv_d =%lf",answer_data.vsv_d);

    answer_data.vsv_ch=data1.vsv_ch;
    printf("\n\tanswer_data.vsv_ch from data1=%c",answer_data.vsv_ch);

    answer_data.vsv_ch=data2.vsv_ch;
    printf("\n\tanswer_data.vsv_ch from data2=%c",answer_data.vsv_ch);
    
    answer_data.vsv_ch=data3.vsv_ch;
    printf("\n\tanswer_data.vsv_ch from data3=%c",answer_data.vsv_ch);

    return 0;   
}

struct vsv_MyData vsv_Func_AddStructMembers(struct vsv_MyData data1,struct vsv_MyData data2,struct vsv_MyData data3){
    struct vsv_MyData answer_data;

    answer_data.vsv_i=data1.vsv_i+data2.vsv_i+data3.vsv_i;
    answer_data.vsv_f=data1.vsv_f+data2.vsv_f+data3.vsv_f;
    answer_data.vsv_d=data1.vsv_d+data2.vsv_d+data3.vsv_d;

    return (answer_data);

}
/*

Enter data1 member values:
        Enter data1.vsv_i :1

        Enter data1.vsv_f :34.23

        Enter data1.vsv_d :422.2342342

        Enter data1.vsv_ch :    r

Enter data2 member values:
        Enter data2.vsv_i :2

        Enter data2.vsv_f :64.435

        Enter data2.vsv_d :98.342432

        Enter data2.vsv_ch :    t

        Enter data3 member values:
        Enter data3.vsv_i :3

        Enter data3.vsv_f :24234.52

        Enter data3.vsv_d :52.554645345

        Enter data3.vsv_ch :    r

answer_data is
        answer_data.vsv_i =6
        answer_data.vsv_f =24333.183594
        answer_data.vsv_d =573.131312
        answer_data.vsv_ch from data1=r
        answer_data.vsv_ch from data2=t
        answer_data.vsv_ch from data3=r
*/