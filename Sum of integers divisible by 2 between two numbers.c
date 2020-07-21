#include<stdio.h>
#include<conio.h>
int main()
{
int i,a,b,sum=0;
printf("Enter first number:");
scanf("%d",&a);
printf("Enter second number:");
scanf("%d",&b);
for(i=a;i<=b;i++)
{
    if(i%2==0)
    {
        sum+=i;
    }
}
printf("Sum of all integers between given two numbers.\nSum=%d",sum);
return 0;
}
