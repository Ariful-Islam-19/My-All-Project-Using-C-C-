#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    system("cls");

    int h=0,m=0,s=0,n=0;
    double k;
    double i;
    scanf("%d %d %d",&h,&m,&s);
start:
    for(k=1; k<=7678324234424; k++)
    {
        for(h; h<24; h++)
        {
            for(m; m<60; m++)
            {
                for(s; s<60; s++)
                {
                    for(n=1; n<=60; n++)
                    {
                        system("cls");
                        printf("\n\n\n\n\n\n\n\n\n\n\t\t\tHOURS : MINIUTE : SECOND ");
                        printf("\n\n\t\t\t%d: %d: %d: %d",h,m,s,n);
                        if(h<12)
                            printf("\tAM");
                        else
                            printf("\tPM");

                        for(i=0; i<=1099; i++)
                        {
                            i++;
                            i--;
                        }
                    }
                    n=0;
                }
                s=0;
            }
            m=0;
        }
        h=0;
    }
    goto start;
    getch();
}
