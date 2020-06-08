#include<stdio.h>
int main()
{
float hor,result;
printf("Enter hour:");
scanf("%f",&hor);
result=3600*hor;
printf("Converted hours into seconds which you are given:%.2f\n",result);
printf("As we know that:\n1 Hour=60 minute:\n1 minute= 60 second:");
return 0;
}
