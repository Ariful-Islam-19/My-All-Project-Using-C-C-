#include<stdio.h>
int main()
{
    int n,m,i,j,k,count=0,sum=1;
    scanf("%d %d",&n,&m);
    k=0;
    for(j=1,i=m;j<=n+count,i<=n+count;j++,i=j*m)
    {
        count++;
    }
    printf("%d",n+count);
    return 0;
}
