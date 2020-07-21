#include<stdio.h>
#include<conio.h>
int main()
{
int n,a=0,b=1,next,count;
printf("Enter a number to obtain fibonacci series:");
scanf("%d",&n);
printf("the series is.....\n");
printf("%d\n%d\n",a,b);
count=2;
while(count<n)
{
next=a+b;
a=b;
b=next;
printf("%d\n",next);
count++;
}

return 0;
}
