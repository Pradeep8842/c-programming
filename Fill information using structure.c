#include<stdio.h>
struct emp
{
int eno;
char ename[20];
float esalary;
};
int main()
{
struct emp e;
printf("Enter employee details:\n");
printf("Employee number:");
scanf("%d",&e.eno);
printf("Employee name:");
scanf("%s",&e.ename);
printf("Employee salary:");
scanf("%f",&e.esalary);
return 0;
}
