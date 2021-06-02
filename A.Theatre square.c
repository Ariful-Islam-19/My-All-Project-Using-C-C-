#include<stdio.h>
int main()
{
    long long n,m,a;
    long long l,f,k;
    scanf("%lld %lld %lld",&n,&m,&a);
    if(n%a==0)
        l=n/a;
    else
        l=n/a+1;
    if(m%a==0)
        k=m/a;
    else
        k=m/a+1;
    printf("%lld",l*k);
    return 0;
}
