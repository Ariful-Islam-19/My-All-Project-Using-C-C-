#include<stdio.h>
int main()
{
    int n,m,a,b,t;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    float k=(float)b/m;
    if(m>n && n*a>b)
        printf("%d",b);
        else if(k==a || k>a)
             printf("%d",n*a);
    else if(k<=a && a>=b && n%m==0)
    {
        t=(n/m)*b;
        printf("%d",t);
    }
    else if(k<=a && a>=b )
    {
        t=(n/m)*b+ b;
        printf("%d",t);
    }
    else if(k<=a && a<b )
    {
        t=(n/m)*b + (n%m)*a;
         printf("%d",t);
    }
    else
       printf("");
    return 0;

}
