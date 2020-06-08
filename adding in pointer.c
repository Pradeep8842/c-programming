#include<stdio.h>
int main()
{
int a=50;
int*p;
p=&a;
printf("The address of p variable is=%u\n",p);
p=p+3;
printf("The address of p variable is after increment=%u",p);
return 0;}
