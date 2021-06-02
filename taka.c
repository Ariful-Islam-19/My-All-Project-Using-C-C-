#include<stdio.h>
int main()
{
    long long tc,n[150],t[200],a[150000],i,j;
    scanf("%lld",&tc);
    for(i=0;i<tc;i++)
    {
        scanf("%lld %lld",&n[i],&t[i]);
        for(j=0;j<n[i];j++)
        {
            scanf("%lld",&a[j]);
        }
    }
     for(i=0;i<tc;i++)
    {
        count[i]=0;
        for(j=0;j<n[i];j++)
        {
         count[i]=a[j]++
        }
    }
}
