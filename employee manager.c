#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int n,i=0;
    char a,b;
    char*ptr;
    while(i<3)
    {
        printf("\nEnter your employee id length:");
        scanf("%d",&n);
        printf("Enter a char a:");
        getchar();
        scanf("%c",&a);
         printf("Enter a char b:");
         getchar();
        scanf("%c",&b);

        ptr=(char*)malloc((n+1)*sizeof(char));
        printf("Enter employee id :");
        scanf("%s",ptr);
        printf("Employee id is:%s",ptr);
        free(ptr);
        i=i+1;
    }



    return 0;
}
