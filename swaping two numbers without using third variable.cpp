#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("enetr two numbers =  ");
	scanf("  %d%d",&a,&b);
	printf("value of a is %d and  \n value of b is %d before swaping ",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf(" value of a is %d and \n value of b is %d after swaping ",a,b);
	getch();
}
