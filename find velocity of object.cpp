#include<stdio.h>
#include<conio.h>
int main()
{
	float s,t,d;
	printf("Enter distance of object in kilometer =");
	scanf("%f",&d);
	printf("Enter travelling time of object in hour =");
	scanf("%f",&t);
	s=d/t;
	printf("Speed =%.2f km/h\n",s);
	getch();
}
