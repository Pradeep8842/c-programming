#include<stdio.h>
#include<conio.h>
int main()
{
	float salary,bonus,totalsalary;
	char gender;
	printf("Enter gender =");
	scanf("%c",&gender);
	printf("Enter salary of employee =");
	scanf("%f",&salary);
	if(gender=='M'|| gender=='m')
	{
		if  (salary>10000)
		bonus=(salary*.05);
		else
		bonus=(salary*.07);
	}
	if(gender=='F' || gender=='f')
	{
		if (salary>10000)
		bonus=(salary*.1);
		else
		bonus=(salary*.12);
		}
		totalsalary=salary+bonus;
		printf("Total salary=%.2f \nBonus=%.2f\n",totalsalary,bonus);
		getch();
	}
		
				
		
		
