#include<stdio.h>
int main()
{
    int i,n,t,k;
    scanf("%d %d",&n,&t);
    if(n==1 && t==10)
        printf("-1");
    else if(t==10)
    {
        k=n;
        for(i=1; i<=k; i++)
        {
            if(i==1)
                printf("1");
            else
                printf("0");
        }

    }

    else
    {

        k=n;
        for(i=1; i<=k; i++)
        {
            printf("%d",t);
        }
    }

    return 0;

}
