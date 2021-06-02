#include<stdio.h>
#include<conio.h>
int main()
{
    int m[5][5];
    int i,j,t,l,s,k;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(m[i][j]==1)
            {
                k=i;
                s=j;
            }

        }
    }
    if(k==0 || k==4)
        l=2;
    else if(k==1 || k==3)
        l=1;
    else
        l=0;
    if(s==0 || s==4)
        t=2;
    else if(s==1 || s==3)
        t=1;
    else
        t=0;
    printf("%d",t+l);

}
