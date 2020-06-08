#include<stdio.h>
int main()
{
float a,b,c,ave;
printf("Enter three numbers :");
scanf("%f\n%f\n%f",&a,&b,&c);
ave=(a+b+c)/3;
printf("Average=%.2f",ave);
return 0;
}
