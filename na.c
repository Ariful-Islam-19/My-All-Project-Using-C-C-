#include<stdio.h>
#include<conio.h>
int main()
{
    long long n,i=1,m=1,sweet;
    scanf("%lld",&n);
    sweet=n;
    lebal:
        {

        m=m+0;
        sweet=sweet-m;
        m=m*2;
         }
         if(sweet>=m)
            goto lebal;
         else
            printf("%lld",sweet);

    return 0;
}
