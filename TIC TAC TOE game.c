#include<stdio.h>
#include<conio.h>
char a[9]= {'1','2','3','4','5','6','7','8','9'};
int i,gameover=0;
int e=0,f=0,g=0,h=0,l=0,m=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,y=0,count=0,sum=0;
char yes;
void show()
{
    printf("\n\n\t\t\tTIC...TAC...TOE GAME");
    printf("\n\n\t\t\t|-------|-------|-------|\n");
    printf("\t\t\t|   %c   |   %c   |   %c   |",a[0],a[1],a[2]);
    printf("\n\t\t\t|-------|-------|-------|\n");
    printf("\t\t\t|   %c   |   %c   |   %c   |",a[3],a[4],a[5]);
    printf("\n\t\t\t|-------|-------|-------|\n");
    printf("\t\t\t|   %c   |   %c   |   %c   |",a[6],a[7],a[8]);
    printf("\n\t\t\t|-------|-------|-------|\n");

}
void symbol()
{
    printf("PLAYER ONE: X \n");
    printf("PLAYER TOW: O \n");
}

void start()
{
    int a;
    //printf("\nWho first start the game: player 1 or player 2 :");
    //scanf("%d",&a);
    fflush(stdin);
}

void play()
{
    char p,ch,d;
    printf("\nEnter your symbol:");
    scanf("%c",&ch);
    d=toupper(ch);
    fflush(stdin);
    printf("\nEnter which position you choice :");
    scanf("%c",&p);
    for(i=0; i<=8; i++)
    {
        if(a[i]==p)
        {
            a[i]=d;
        }
    }
}
void makelogic()
{
    if(a[0]=='X' && a[1]=='X' && a[2]=='X' && e==0)
    {
        printf("\n\t\t\tGREATS PLAYER ONE, YOU WON....!");
        e++;
    }
    else if(a[3]=='X' && a[4]=='X' && a[5]=='X' && f==0)
    {
        printf("\n\t\t\tGREATS PLAYER ONE, YOU WON....!");
        f++;
    }
    else if(a[6]=='X' && a[7]=='X' && a[8]=='X' && g==0)
    {
        printf("\n\t\t\tGREATS PLAYER ONE, YOU WON....!");
        g++;
    }
    else if(a[0]=='X' && a[3]=='X' && a[6]=='X' && h==0)
    {
        printf("\n\t\t\tGREATS PLAYER ONE, YOU WON....!");
        h++;
    }
    else if(a[1]=='X' && a[4]=='X' && a[7]=='X' && l==0)
    {
        printf("\n\t\t\tGREATS PLAYER ONE, YOU WON....!");
        l++;
    }
    else if(a[2]=='X' && a[5]=='X' && a[8]=='X' && m==0)
    {
        printf("\n\t\t\tGREATS PLAYER ONE, YOU WON....!");
        m++;
    }
    else if(a[0]=='X' && a[4]=='X' && a[8]=='X' && o==0)
    {
        printf("\n\t\t\tGREATS PLAYER ONE, YOU WON....!");
        o++;
    }
    else if(a[2]=='X' && a[4]=='X' && a[6]=='X' && p==0)
    {
        printf("\n\t\t\tGREATS PLAYER ONE, YOU WON....!");
        p++;
    }
    else if(a[0]=='O' && a[1]=='O' && a[2]=='O' && q==0)
    {
        printf("\n\t\t\tGREATS PLAYER TWO, YOU WON....!");
        q++;
    }
    else if(a[3]=='O' && a[4]=='O' && a[5]=='O' && r==0)
    {
        printf("\n\t\t\tGREATS PLAYER TWO, YOU WON....!");
        r++;
    }
    else if(a[6]=='O' && a[7]=='O' && a[8]=='O' && s==0)
    {
        printf("\n\t\t\tGREATS PLAYER TWO, YOU WON....!");
        s++;
    }
    else if(a[0]=='O' && a[3]=='O' && a[6]=='O' && t==0)
    {
        printf("\n\t\t\tGREATS PLAYER TWO, YOU WON....!");
        t++;
    }
    else if(a[1]=='O' && a[4]=='O' && a[7]=='O' && u==0)
    {
        printf("\n\t\t\tGREATS PLAYER TWO, YOU WON....!");
        u++;
    }
    else if(a[2]=='O' && a[5]=='O' && a[8]=='O' && v==0)
    {
        printf("\n\t\t\tGREATS PLAYER TWO, YOU WON....!");
        v++;
    }
    else if(a[0]=='O' && a[4]=='O' && a[8]=='O' && w==0)
    {
        printf("\n\t\t\tGREATS PLAYER TWO, YOU WON....!");
        w++;
    }
    else if(a[2]=='O' && a[4]=='O' && a[6]=='O' && y==0)
    {
        printf("\n\t\t\tGREATS PLAYER TWO, YOU WON....!");
        y++;
    }
    else
        sum++;
    count++;

}
void drow()
{
    if(count==10)
        printf("\n\n\t\t\t AND GAME OVER....!");
    else if(sum==9)
        printf("\n\t\t\t GAME DROW.....!");
    else if(count==10)
        gameover=1;



}

main()
{
    while( !gameover )
    {

        system("cls");
        show();
        start();
        symbol();
        play();
        makelogic();
        drow();
        getch();

    }




}
