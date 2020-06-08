#include<stdio.h>
int main()
{
int arr[5]={1,2,3,4,5};
int i;
int*p;
p=&arr;
printf("Elements of array are:\n");
for(i=0;i<5;i++)
{
    printf("%d\n",*(p+i));
}
return 0;
}
