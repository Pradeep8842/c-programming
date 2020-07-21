#include<stdio.h>
#include<conio.h>
int main()
{
    int n,temp,x,sum=0;
    printf("Check given number is armstrong number or not.............");
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n>0);
    {
        x=n%10;
        sum=sum+(x*x*x);
        n=n/10;
    }
    if(sum==temp)
    {
        printf("Given number is armstrong number.............");
    }
    else
    {
        printf("Given number is not a armstrong number...........");
    }
    return 0;
}
