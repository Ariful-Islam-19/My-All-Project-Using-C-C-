#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int you,computer,gameover=0, ch;
int menu()
{
    printf("IT IS ROCK,SCISSOR,PAPER GAME\n\n");
    printf("1.If you choice `ROCK' you press :1");
    printf("\n2.If you choice `SCISSORS' you press :2");
    printf("\n3.If you choice `PAPER' you press :3");
    printf("\n4.If you choice `EXIT' you press :4");
    printf("\n\nEnter your choice:");
    scanf("%d",&ch);
    return(ch);
}
int setup()
{
    menu();
    you=ch;
label1:
    computer=rand()%4;
    if(computer==0)
        goto label1;
}
void makelogic()
{
    switch(you)
    {
    case 1:
        if(computer==1)
        {
            printf("\n\t\t\tGAME DROW !");
            printf("\n\t\t\tYOU : ROCK");
            printf("\n\t\t\tCOMPUTER : ROCK");
        }
        else if(computer==2)
        {
            printf("\n\t\t\tYOU WON !");
            printf("\n\t\t\tYOU : ROCK");
            printf("\n\t\t\tCOMPUTER : SCISSORS");
        }
        else
        {
            printf("\n\t\t\tCOMPUTER WON !");
            printf("\n\t\t\tYOU : ROCK");
            printf("\n\t\t\tCOMPUTER : PAPER");
        }
        break;


    case 2:
        if(computer==1)
        {
            printf("\n\t\t\tCOMPUTER WON !");
            printf("\n\t\t\tYOU : SCISSOR");
            printf("\n\t\t\tCOMPUTER : ROCK");
        }
        else if(computer==2)
        {
            printf("\n\t\t\tGAME DROW !");
            printf("\n\t\t\tYOU : SCISSOR");
            printf("\n\t\t\tCOMPUTER : SCISSOR");
        }
        else
        {
            printf("\n\t\t\tYOU WON !");
            printf("\n\t\t\tYOU :SCISSOR");
            printf("\n\t\t\tCOMPUTER : PAPER");
        }
        break;
    case 3:
        if(computer==1)
        {
            printf("\n\t\t\tYOU WON !");
            printf("\n\t\t\tYOU : PAPER");
            printf("\n\t\t\tCOMPUTER : ROCK");
        }
        else if(computer==2)
        {
            printf("\n\t\t\tCOMPUTER WON !");
            printf("\n\t\t\tYOU :  PAPER");
            printf("\n\t\t\tCOMPUTER : SCISSOR");
        }
        else
        {
            printf("\n\t\t\tGAME DROW !");
            printf("\n\t\t\tYOU : PAPER");
            printf("\n\t\t\tCOMPUTER : PAPER");
        }
        break;
    case 4:
        printf("\n\t\t\tGAME OVER .... !");
        gameover=1;
        break;
    default:
        printf("\n\nInvalid youser choice.");
    }
}
main()
{
    while( !gameover )
    {
        system("cls");
        setup();
        makelogic();
        getch();
    }
}
