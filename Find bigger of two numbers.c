#include<stdio.h>
int main()
{
int a,b;
printf("Enter two numbers:");
scanf("%d\n%d",&a,&b);
if(a>b)
{
printf("First number is bigger....");
}
else  if(a==b)
{
    printf("Numbers are equal....");
}
else
{
printf("Second number is bigger....");
}
return 0;
}
