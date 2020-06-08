#include<stdio.h>
#include<math.h>
int main()
{
float sin_value,cos_value,degree;
printf("Enter angle :");
scanf("%f",&degree);
sin_value=sin(degree);
cos_value=cos(degree);
printf("Sin value of angle %f is :%.2f\nCos value of angle %f is :%.2f",degree,sin_value,degree,cos_value);
return 0;
}
