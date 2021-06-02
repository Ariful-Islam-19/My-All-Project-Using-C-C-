#include<stdio.h>
#include<conio.h>
int main()
{
    int x,i=0;
    scanf("%d",&x);
    if(1<=x && x<=1000000)
    {
    while(x != 0)
    {
        if(x>=5)
            x=x-5;
        else if(x==4)
            x=x-4;
        else if(x==3)
            x=x-3;
        else if(x==2)
            x=x-2;
        else
            x=x-1;
            i++;
    }
    printf("%d",i);
    }
    getch();
}
