#include<stdio.h>
int main ()
{
	int d,m,y, age, day ;
	int D, M, Y ;
	printf("CALCULATE DATE OF BIRTH AND AGE ...\n\n");
	printf("Enter you date of birth\n");
	//enter your age without using "/" , you should write like "19<space>19<space>1999"
	scanf("%d%d%d",&d,&m,&y);
	
	printf("Enter today's date:\n");
	//enter your age without using "/" , you should write like "19<space>19<space>1999"
	scanf("%d%d%d",&D,&M,&Y);
	
	//calculation part
	
	age=Y-y;
	printf("Your age is:%d\n",age);
	day=age*365;
	printf("You are in this world :%d days",day);
	
	
return 0;	
}
