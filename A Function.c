#include<stdio.h>
#include<math.h>
int main()
{
    long long n,m,k,i,p,l;
    scanf("%lld",&n);
    i=n%2;
    if(i==0)
    {
        m=n-1;
        k=n;
        p=(pow((m+1),2))/4;
        l=(k*(k+2))/4;
        printf("%lld",-p+l);

    }
    else
    {
        m=n;
        k=n-1;
        p=(pow((m+1),2))/4;
        l=(k*(k+2))/4;
        printf("%lld",-p+l);
    }
    return 0;
}

