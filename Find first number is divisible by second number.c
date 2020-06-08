#include<stdio.h>
int main()
{
int a,b;
printf("Enter two numbers:");
scanf("%d\n%d",&a,&b);
if(a%b==0)
{
printf("First number is divisible by second number....");
}
else
{
printf("First number is not divisible by second number....");
}
return 0;
}
