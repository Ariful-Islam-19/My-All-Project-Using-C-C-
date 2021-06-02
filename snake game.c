#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int width=40,height=40;
int x,y,fruitx,fruity,gameover=0,score,flag;
int count;
int tailx[100],taily[100];


long long password()
{
    long long n;
    printf("Please enter password:");
    scanf("%lld",&n);
    return n;
}
void setup()
{
    score=0;
    count=0;

    x=height/2;
    y=width/2;
lebal1:
    fruitx=rand()%40;
    if(fruitx==1)
        goto lebal1;
lebal2:
    fruity=rand()%40;
    if(fruity==1)
        goto lebal2;

}
void draw()
{

    system("cls");
    int i,j,k;
    for(i=1; i<=width; i++)
    {
        for(j=1; j<=height; j++)
        {
            if(i==1||i==40)
                printf("#");
            else if(j==1||j==40)
                printf("*");

            else if(i==x&&j==y)
                printf("O");
            else if(i==fruitx && j==fruity)
                printf("F");

            else
            {
                int ch=0;

                for(k=0; k<=count; k++)
                {
                    if(i==tailx[k] && j==taily[k])
                    {
                        printf("o");
                        ch=1;
                    }

                }

                if(ch==0)
                    printf(" ");
            }

        }
        printf("\n");
    }
}
void input()
{
    if(kbhit())
    {

        switch(getch())
        {
        case 'a':
            flag=1;
            break;
        case 's':
            flag=2;
            break;
        case 'd':
            flag=2;
            break;
        case 'w':
            flag=3;
            break;
        case 'z':
            flag=4;
            break;
        case 'x':
            gameover=1;
            break;

        }
    }
    if(x==width || y==height|| x==1|| y==1)
    {

        gameover=1;
    }


}
void makelogic()
{
    if(x==fruitx && y==fruity)
    {
lebal3:
        fruitx=rand()%40;
        if(fruitx==1)
            goto lebal3;
lebal4:
        fruity=rand()%40;
        if(fruity==1)
            goto lebal4;

        {
            score=score+5;
            count=count+1;
        }
    }
    printf("total score is =%d\t",score);

    switch(flag)
    {
    case 1:
        y--;
        break;
    case 2:
        y++;
        break;
    case 3:
        x--;
        break;
    case 4:
        x++;
        break;
    default:
        break;
    }
    {
        int prevx,prevy,prev2x,prev2y,i;
        tailx[0]=x;
        taily[0]=y;
        prevx=tailx[0];
        prevy=taily[0];
        for(i=1; i<=count; i++)
        {
            prev2x=tailx[i];
            prev2y=taily[i];
            tailx[i]=prevx;
            taily[i]=prevy;
            prevx=prev2x;
            prevy=prev2y;
        }

    }
    int i;
    for(i=2;i<count;i++)
    {
        if(x==tailx[i] && y==taily[i])
            gameover=1;
    }
}
int main()
{

    long long k=1,t=1214278967,i,j=0,p=1;
    while(k!=t)
    {
        k=password();
        if(k!=t)
        {
            j++;
            if(j<=2){
            printf("\n\n\t\t\tInvalid password...!  Try Again:");
            for(i=1;i<=199999999;i++)
            {
            }
            }
            if(j==3)
            {
                printf("\n\n\t\t\tTime out....!");
                return 0;
            }
        }
        if(k==t)
        {
            for(i=1;i<=100;i++)
            {
               printf("\t\t\tOk...Game Loading");
               for(p=1;p<=3;p++)
               {
                printf(". ");
               }
               system("cls");
            }
        }
        system("cls");
    }
    setup();

    while(!gameover)
    {
        draw();
        input();
        makelogic();
    }
    getch();
}





