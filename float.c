#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a,b,i=2,j,m,x,f;
    printf("enter first number:");
    scanf("%d",&n);
    printf("enter second number:");
    scanf("%d",&x);
    int r[n],t[x],mul=0,sum=0;
    m=n;
    f=x;
    for(i=2; i<=n; i++)
    {
lebal:
        if(m%i==0)
        {
            r[sum]=i;
            sum++;
            m=m/i;
            printf("x%d",i);
            goto lebal;
        }

    }
    /*printf("\n");
    for(i=0;i<sum;i++)
    {
        printf(" %d",r[i]);
    }*/
    printf("\n\n");
     for(i=2; i<=x; i++)
    {
lebal1:
        if(f%i==0)
        {
            t[mul]=i;
            mul++;
            f=f/i;
            printf("x%d",i);
            goto lebal1;
        }

    }
    getch();




}
