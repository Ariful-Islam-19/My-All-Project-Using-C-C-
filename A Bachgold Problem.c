#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n%2==0)
    {
         printf("%d\n",n/2);
    {
        for(i=1; i<=n/2; i++)
        {
            printf("2 ");
        }
    }
    }

    else
    {
        printf("%d\n",n/2);
        for(i=1; i<=n/2; i++)
        {
            if(i==n/2)
                printf("3");
            else
                printf("2 ");
        }
    }

    return 0;
}
