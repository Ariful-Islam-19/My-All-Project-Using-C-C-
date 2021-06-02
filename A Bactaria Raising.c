#include<stdio.h>
int main()
{
    int n,i,j,k,count=1,sum;
    scanf("%d",&n);
    k=n;
    lebal:
        {
            for(i=1;i<=k;i=2*i)
            {
                sum=i;
            }
        }
        if(k-sum != 0)
        {
            k=k-sum;
            count++;
            goto lebal;
        }
        else
            printf("%d",count);

        return 0;
}

