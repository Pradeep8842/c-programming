#include<stdio.h>
int main()
{
int a=50;
int*p;
p=&a;
printf("The address of p variable is=%u\n",p);
p=p-1;
printf("The address of p variable is after decrement=%u",p);
return 0;}
