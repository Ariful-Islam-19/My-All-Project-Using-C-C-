#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[10][10];
    int i,j,count=0,coun=0;
    for(i=0; i<8; i++)
    {
        scanf("%s",&a[i]);
    }
    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
        {
            if(a[i][j]=='Q')
                count=count+9;
            else if(a[i][j]=='R')
                count=count+5;
            else if(a[i][j]=='B')
                count=count+3;
            else if(a[i][j]=='N')
                count=count+3;
            else if(a[i][j]=='P')
                count=count+1;
            else if(a[i][j]=='K')
                count=count+0;
        }
    }
    for(i=0; i<8; i++)
    {
        for(j=0; j<8; j++)
        {
            if(a[i][j]=='q')
                coun=coun+9;
            else if(a[i][j]=='r')
                coun=coun+5;
            else if(a[i][j]=='b')
                coun=coun+3;
            else if(a[i][j]=='n')
                coun=coun+3;
            else if(a[i][j]=='p')
                coun=coun+1;
            else if(a[i][j]=='k')
                coun=coun+0;
        }
    }
    if(count>coun)
        printf("White");
    else if(count<coun)
        printf("Black");
    else
        printf("Draw");
    return 0;
}
