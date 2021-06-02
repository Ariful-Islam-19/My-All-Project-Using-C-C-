#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int you,computer,gameover=0,ch;
int menu()
{
    printf("This game theory......you press a number.If you press number.\nThis number is greater than computer press number..\n you win else computer win ");
    printf("\n you press number must be less than 100");
    printf("\nIf you leave this game you press:1");
    printf("\nyou press a number:");

    scanf("%d",&ch);
    if(ch==1)
        gameover=1;
    return(ch);
}
void setup()
{
    menu();
    you=ch;
    computer=rand()%100;

}

void makelogic()
{
    if(computer<you)
        printf("\nYOU WON...!");
    else
        printf("\n COMPUTER WON...!");
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
