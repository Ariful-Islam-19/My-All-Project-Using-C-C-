#include<stdio.h>
int main()
{
    long long n,a[100000],b[100000],c[100000],k[100000],i;
    scanf("%lld",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lld %lld %lld",&a[i],&b[i],&c[i]);
        k[i]=(a[i]+b[i]+c[i])/2;
    }
    for(i=0; i<n; i++)
    {
        printf("%lld\n",k[i]);
    }
    return 0;
}
