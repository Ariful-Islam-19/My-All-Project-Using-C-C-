#include<stdio.h>
int main()
{
    int a,b,k,l;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
       k=b;
       l=a-k;
       printf("%d %d",k,l/2);
    }
    else
    {
        k=a;
        l=b-k;
        printf("%d %d",k,l/2);
    }
      return 0;
}
