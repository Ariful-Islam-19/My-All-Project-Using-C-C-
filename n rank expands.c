#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,j=1,n;
    double k,m=1;
    double f=1;
    printf("enter a number:");
    scanf("%d",&n);
    double r[n+1];
    int g[n+1];
    for(i=1; i<=n; i++)
    {
        f=f*i;
    }
    for(i=0; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            m=m*j;
        }
        r[i]=m;
        m=1;
    }
    for(i=0,j=n; i<=n,j>=0; i++,j--)
    {
        g[i]=f/(r[i]*r[j]);
    }

    for(i=0; i<=n; i++)
    {
        printf(" %d,",g[i]);
    }
    getch();
}
