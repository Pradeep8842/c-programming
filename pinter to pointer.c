#include<stdio.h>
int main()
{
int a=20;
int*p;
int**b;
p=&a;
b=&p;
printf("Address of \na=%d\n p=%d",&a,b);
return 0;}
