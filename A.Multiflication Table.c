#include<stdio.h>
#include<conio.h>
int main()
{
    long long i,j,n,x,count=0,sum=0;
    scanf("%lld %lld",&n,&x);
    for(i=1; i<=n; i++)
    {
        if((x%i==0)&& ((x/i)>=1) && (x/i)<=n)
            count++;
    }
    printf("%lld",count);
    return 0;
}
