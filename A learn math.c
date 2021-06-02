#include<stdio.h>
#include<conio.h>
int main()
{
    int n,x,y,i,j,count=0,sum=0;
    scanf("%d",&n);
    x=3;
    y=n-3;
lebal:
    {
        x++;
        y--;
    }
        if((x%2==0 || x%3==0) && (y%2 ==0 || y%3==0))
        {
            printf("%d %d",x,y);
        }
    else
        goto lebal;

    return 0;
}

