#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter three numbers:");
scanf("%d\n%d\n%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("First number is bigger....");
}
else if(b>c&&b>a)
{
printf("Second number is bigger....");
}
else
{
printf("Third number is bigger....");
}
return 0;
}
