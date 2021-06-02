#include<stdio.h>
int main()
{
    int n,i,j,m,l,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=1;j++)
        {
            k=i;
            m=k*i;
            l=m*i;
            printf("%d\t%d\t%d",k,m,l);
        }
        printf("\n");
    }
    getch();
}
