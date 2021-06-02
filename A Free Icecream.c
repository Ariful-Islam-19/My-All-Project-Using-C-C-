#include<stdio.h>
#include<ctype.h>
int main()
{
    long long n,x,d[2000],i,j,count,k=0;
    char a[2000][10];
    scanf("%lld %lld",&n,&x);
    count=x;
    for(i=0;i<n;i++)
    {
        scanf("%s %lld",&a[i],&d[i]);
    }
     for(i=0;i<n;i++)
    {
              if(a[i][0]=='+')
            count=count+d[i];
        else if(a[i][0]=='-' && d[i]=<count)
            count=count-d[i];
            else
                k++;
    }

    printf("%lld %lld",count,k);
return 0;
}
