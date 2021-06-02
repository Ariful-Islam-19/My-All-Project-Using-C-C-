#include<stdio.h>
#include<string.h>
int main()
{
   int t,tc;
   scanf("%d",&t);
   for(tc=1;tc<=t;tc++)
   {
    long long n,m,k;
       scanf("%lld",&n);
    k=((n*(n+1))/2);
        printf(":case %d: %lld",tc,k);
   }
   return 0;
}
