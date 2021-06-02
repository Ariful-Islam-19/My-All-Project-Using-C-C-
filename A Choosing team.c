#include<stdio.h>
int main()
{
    int n,k,a[10000],b[10000],i,count=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       b[i]=5-a[i];
    }
    for(i=0;i<n;i++)
    {
       if(b[i]>=k)
        count++;
    }
    printf("%d",count/3);
    return 0;
}
