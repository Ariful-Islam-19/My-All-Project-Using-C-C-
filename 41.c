#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n;
    scanf(" %d",&n);
    for(i=1;i<=n*3;i++)
    {
        if((i+2)%3==0)
        {
            printf("\n\n");
        }
        printf(" %d",i);
    }
    getch();
}
