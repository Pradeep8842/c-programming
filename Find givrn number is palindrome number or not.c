#include<stdio.h>
#include<conio.h>
int main()
{
int n,dummy,x,rev=0;
printf("Enter a number which that is palindrome number or not:");
scanf("%d",&n);
dummy=n;
while(n>0)
{
x=n%10;
n=n/10;
rev=(rev*10)+x;
}
if(rev==dummy)
{
printf("Given number is palindrome number........");
}
else
{
printf("Given number is not palindrome number.......");
}
return 0;
}
