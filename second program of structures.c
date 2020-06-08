#include<stdio.h>
struct emp
{
int eno;
char ename[20];
float esalary;
};
int main()
{
struct emp e={123,"pradeep",50000};;
printf("Enter employee details:\n");
printf("Employee number:%d\n",e.eno);
printf("Employee name:%s\n",e.ename);
printf("Employee salary:%.2f",e.esalary);
return 0;
}
