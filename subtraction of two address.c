#include<stdio.h>
int main()
{
int a=20;
int*p;
p=&a;
int*temp;
temp=p;
p=p+3;
printf("subtraction of address of variables :%d-%d=%d",p,temp,p-temp);
return 0;}
