#include<stdio.h>
#include<conio.h>
int main()
{
	float basicpay,dearnessallowance,houserentallowance,grosssalary,providentfund;
	printf("basic pay =");
	scanf("%f",&basicpay);
	
	houserentallowance=0.3*basicpay;
	dearnessallowance=0.6*basicpay;
	providentfund=.8*basicpay;
	grosssalary=houserentallowance+basicpay+dearnessallowance+providentfund;
	printf("HOUSE RENT ALLOWANCE=%.2f \n",houserentallowance);
	printf("DEARNESS ALLOWANCE=%.2f \n",dearnessallowance);
	printf("PROVIDENTFUND=%.2f \n",providentfund);
	printf("GROSS SALARY=%.2f \n",grosssalary);
	getch();
}
