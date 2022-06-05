#include<stdio.h>
#define DEFINE_PI_VSV 3.1415926535897932
#define DEFIEN_STRING_VSV "69 VSV RTR 2020--"

enum{
    SUN,
    MON,
    TUE,
    WED,
    THR,
    FRI,
    SAT,
};

enum{
    JAN=1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

enum Number_vsv{
    ONE,
    TWO,
    THREE,
    FOUR,
	FIVE = 5,
	SIX,
	SEVEN,
	EIGHT,
	NINE,
	TEN
};

enum Bool_vsv
{
	TRUE = 1,
	FALSE = 0
};

int main(void){

    const double epsilon_vsv=0.000001;

    printf("\n\n");
	printf("Local Constant epsilon_vsv = %lf\n\n", epsilon_vsv);

	printf("Sunday Is Day Number = %d\n", SUN);
	printf("Monday Is Day Number = %d\n", MON);
	printf("Tuesday Is Day Number = %d\n", TUE);
	printf("Wednesday Is Day Number = %d\n", WED);
	printf("Thursday Is Day Number = %d\n", THR);
	printf("Friday Is Day Number = %d\n", FRI);
	printf("Saturday Is Day Number = %d\n\n", SAT);

	printf("One Is Enum Number = %d\n", ONE);
	printf("Two Is Enum Number = %d\n", TWO);
	printf("Three Is Enum Number = %d\n", THREE);
	printf("Four Is Enum Number = %d\n", FOUR);
	printf("Five Is Enum Number = %d\n", FIVE);
	printf("Six Is Enum Number = %d\n", SIX);
	printf("Seven Is Enum Number = %d\n", SEVEN);
	printf("Eight Is Enum Number = %d\n", EIGHT);
	printf("Nine Is Enum Number = %d\n", NINE);
	printf("Ten Is Enum Number = %d\n\n", TEN);

	printf("January Is Month Number = %d\n", JAN);
	printf("February Is Month Number = %d\n", FEB);
	printf("March Is Month Number = %d\n", MAR);
	printf("April Is Month Number = %d\n", APR);
	printf("May Is Month Number = %d\n", MAY);
	printf("June Is Month Number = %d\n", JUN);
	printf("July Is Month Number = %d\n", JUL);
	printf("August Is Month Number = %d\n", AUG);
	printf("September Is Month Number = %d\n", SEP);
	printf("October Is Month Number = %d\n", OCT);
	printf("November Is Month Number = %d\n", NOV);
	printf("December Is Month Number = %d\n\n", DEC);

	printf("Value Of TRUE Is = %d\n", TRUE);
	printf("Value Of FALSE Is = %d\n\n", FALSE);

	printf("DEFINE_PI_VSV Macro value = %.10lf\n\n", DEFINE_PI_VSV);
	printf("Area Of Circle Of Radius 2 units = %f\n\n", (DEFINE_PI_VSV * 2.0f * 2.0f)); 
    //pi * r * r = area of circle of radius 'r'

    printf("\n\n");
    
    printf(DEFIEN_STRING_VSV);
    printf("\n\n");
    
    printf("DEFIEN_STRING_VSV is : %s\n", DEFIEN_STRING_VSV);
    printf("sizeof(DEFIEN_STRING_VSV) is : %zd\n", sizeof(DEFIEN_STRING_VSV));
    printf("sizeof(enum Bool_vsv) is : %zd\n", sizeof(enum Bool_vsv));

    printf("\n\n");

    return(0);
}

/*output


Local Constant epsilon_vsv = 0.000001

Sunday Is Day Number = 0
Monday Is Day Number = 1
Tuesday Is Day Number = 2
Wednesday Is Day Number = 3
Thursday Is Day Number = 4
Friday Is Day Number = 5
Saturday Is Day Number = 6

One Is Enum Number = 0
Two Is Enum Number = 1
Three Is Enum Number = 2
Four Is Enum Number = 3
Five Is Enum Number = 5
Six Is Enum Number = 6
Seven Is Enum Number = 7
Eight Is Enum Number = 8
Nine Is Enum Number = 9
Ten Is Enum Number = 10

January Is Month Number = 1
February Is Month Number = 2
March Is Month Number = 3
April Is Month Number = 4
May Is Month Number = 5
June Is Month Number = 6
July Is Month Number = 7
August Is Month Number = 8
September Is Month Number = 9
October Is Month Number = 10
November Is Month Number = 11
December Is Month Number = 12

Value Of TRUE Is = 1
Value Of FALSE Is = 0

DEFINE_PI_VSV Macro value = 3.1415926536

Area Of Circle Of Radius 2 units = 12.566371



69 VSV RTR 2020--

DEFIEN_STRING_VSV is : 69 VSV RTR 2020--
sizeof(DEFIEN_STRING_VSV) is : 18
sizeof(enum Bool_vsv) is : 4



*/