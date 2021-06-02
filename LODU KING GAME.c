#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int i,j,k;
void drow()
{
    int row=15,colum=15;
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=colum; j++)
        {
            if(((i>=1 && i<=6) && (j<=6 && j>=1)) || ((i>=1 && i<=6) && (j>=10 && j<=15)))
                printf("   ");
            else if(((j>=1 && j<=6) && (i>=10 && j<=15)) || ((i>=10 && i<=15) && (j>=10 && j<=15)))
                printf("   ");
            else if(((j>=7 && j<=9) && (i>=7 && i<=9)))
                printf("   ");
            else
                printf("|_|");
        }
        printf("\n");
    }

}

int main()
{
    drow();
    getch();

}
