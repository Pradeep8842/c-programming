#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
int generaterandom(int n)
{
    srand(time(NULL));
    return rand()%n;
}
int main()
{
    char username[15];
    int ch;
    int uscore=0;
    int cscore=0;
      printf("\n\n\n");
    printf("=========================================== LET'S PLAY THIS GAME ==================================\n");
    printf("\n");
    printf("Enter Your name:");
    gets(username);


    for(int i=0; i<3; i++)
    {
        printf("********************** %d CHANCE *********************\n",i+1);
        printf("Now turn of %s\n",username);
        printf("0 for ROCK\n 1 for PAPER\n 2 for SCISSORS\n");
        printf("Enter Your choice :");
        scanf("%d",&ch);
        switch(ch)
        {
        case 0:
            printf("You chooes ROCK\n");
            break;
        case 1:
            printf("You chooes PAPER\n");
            break;
        case 2:
            printf("You chooes SCISSORS\n");
            break;
        }
        printf("Now turn of computer\n");
        switch(generaterandom(3))
        {
        case 0:
            printf("ROCK\n");
            break;
        case 1:
            printf("PAPER\n");
            break;
        case 2:
            printf("SCISSOR\n");
            break;
        }
        if(ch==0)
        {
            if(generaterandom(3)==1)
            {
                printf("Computer is winner........\n");
                cscore+=1;
                printf("Computer score is :%d\n",cscore);

            }
            if(generaterandom(3)==2)
            {

                printf("%s is winner........\n",username);
                  uscore+=1;
                printf("Your score is :%d\n",uscore);

            }


        }

        if(ch==1)
        {
            if(generaterandom(3)==0)
            {
                printf("%s is winner........\n",username);
                 uscore+=1;
                printf("Your score is :%d\n",uscore);

            }
            if(generaterandom(3)==2)
            {

                printf("Computer is winner........\n");
                   cscore+=1;
                printf("Computer score is :%d\n",cscore);

            }


        }
        if(ch==2)
        {
            if(generaterandom(3)==0)
            {
                printf("Computer is winner........\n");
                  cscore+=1;
                printf("Computer score is :%d\n",cscore);

            }
            if(generaterandom(3)==1)
            {

                printf("%s is winner........\n",username);
                 uscore+=1;
                printf("Your score is :%d\n",uscore);

            }


        }
        if(generaterandom(3)==ch)
        {
            printf("Both are chooess same thing......\n");
             printf("Your score is :%d\n",uscore);
              printf("Computer  score is :%d\n",cscore);
        }
      printf("\n");
      printf("----------------------------------------------------------------------------------------------------------------------\n");
      printf("\n\n");
    }
    printf("************************** FINAL RESULT *****************************\n");
    if(cscore>uscore)
    {
        printf("Your score is : %d\n",uscore);
        printf("Computer Score is : %d\n",cscore);
        printf("Computer is Winner..............\n");
        printf("----------------------------------------------------------------------------------------------------------------------\n");
    }
      if(uscore>cscore)
    {
        printf("Your score is : %d\n",uscore);
        printf("Computer Score is : %d\n",cscore);
        printf("%s is Winner..............\n",username);
        printf("----------------------------------------------------------------------------------------------------------------------\n");
    }
      if(cscore==uscore)
    {
        printf("Your score is : %d\n",uscore);
        printf("Computer Score is : %d\n",cscore);
        printf("No one is Winner in both of them..............\n");
        printf("----------------------------------------------------------------------------------------------------------------------\n");
    }
    return 0;
}
