#include<stdio.h>
#include<stdlib.h>
int main()
{
float a,b,sum,sub,multi,divi;
int ch;
while(1)
{
printf("Enter two numbers :");
scanf("%f\n%f",&a,&b);
printf("Please follow these instruction for multiplication,sum,division and subtraction.....\nPress following keys.....\n 1 For Sum\n2 For Subtraction\n3 For Multiplication\n4 For Division\n0 For exit\n");
printf("Enter your choice....");
scanf("%d",&ch);
switch (ch)
{
        case 0:
               exit(0);
        case 1:
               sum=a+b;
               printf("Sum=%.2f\n",sum);
        break;
        case 2:
               sub=a-b;
               printf("Subtraction=%.2f\n",sub);
        break;
        case 3:
               multi=a*b;
               printf("Multiplication=%.2f\n",multi);
        break;
        case 4:
               divi=a/b;
               printf("Division=%.2f\n",divi);
        break;
        default:
               printf("Invalid choice");
}
}
        return 0;
        }
