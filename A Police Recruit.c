#include<stdio.h>
#include<math.h>
int main()
{
    long long n,a[100000],i,j=0,count,sum,mul=0,tul,lol=0;
    scanf("%lld",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]>0)
            break;
    }
    count=i;
    for(i=n-1; i>=0; i--)
    {
        if(a[i]<0)
            break;
    }
    sum=i;
    for(i=count; i<=sum; i++)
    {
        if(a[i]>0)
            mul=mul+a[i];
        else
        {
           tul=mul-1;
           mul=tul;
        }
    }
    for(i=0; i<=count; i++)
    {
        if(a[i]<0)
            lol++;

    }
    if(tul<=0)
        printf("%lld",lol+abs(tul));
        else
            printf("%lld",lol);

    return 0;

}
