#include<stdio.h>
int main()
{
    long long n,i,j,k,count=0;
    scanf("%lld %lld",&n,&k);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i+j)==k)
                count++;
        }
    }
    printf("%lld",count);
}
