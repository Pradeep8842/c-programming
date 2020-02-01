#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],b[5],c[5],i;
	printf("Enter element of array a :\n");
	for(i=0;i<5;i++)
	{
		scanf("\n %d",&a[i]);
	}
	printf("Enter element of array b :\n");
	for(i=0;i<5;i++)
	{
		scanf("\n %d",&b[i]);
	}
	printf("Sum of given array a and b :\n");
	for(i=0;i<5;i++)
	{
		c[i]=a[i]+b[i];
		printf("%d\t",c[i]);
	}
	getch();
}
