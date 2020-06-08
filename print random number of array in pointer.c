#include<stdio.h>
int main()
{
int arr[5]={1,2,3,4,5};
int i;
int*p;
p=&arr;
printf("Elements of array are:\n");
p=p+2;
    printf("%d\n",*p);
return 0;
}
