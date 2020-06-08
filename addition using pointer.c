#include<stdio.h>
int addition();
int main()
{
int result;
int (*ptr)();
ptr=&addition;
result=(*ptr)();
printf("The sum is:%d",result);
return 0;
}
int addition()
{
int a,b;
printf("Enter two numbers:");
scanf("%d\n%d",&a,&b);
return a+b;
}
