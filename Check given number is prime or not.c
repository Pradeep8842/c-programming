#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,count=0;
printf("Enter a number to check it is prime number or not:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
   count++;
}

}
if(count==2)
{
printf("Given number is prime number......");
}
else
{
printf("Given number %d is not prime number because it is divisible by\n",n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
printf("%d\n",i);
}
}
}
return 0;
}
