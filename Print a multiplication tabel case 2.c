#include<stdio.h.>
#include<conio.h>
int main()
{
int n,x,i;
printf("Enter a number for which you want print a table:");
scanf("%d",&n);
printf("Enter a number where till you want print a table:");
scanf("%d",&x);
for(i=1;i<=x;i++)
{
printf("%d*%d=%d\n",i,n,n*i);
}
return 0;
}
