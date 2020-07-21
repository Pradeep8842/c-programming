#include<stdio.h.>
#include<conio.h>
int main()
{
int n,x,i,j=0,k=1;
printf("Enter a number for which you want print a table:");
scanf("%d",&n);
printf("Enter a number where till you want print a table:");
scanf("%d",&x);
while(k<=x)
{
i=n;
j=j+i;
printf("%d*%d=%d\n",k,i,j);
k++;
}
return 0;
}
