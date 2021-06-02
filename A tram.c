#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n,i,j,k,count=0;
    scanf("%d",&n);
    int a[n],b[n],c[n],d[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    k=b[0];
    for(i=0;i<n-1;i++)
    {
        c[i]=k+b[i+1];
        d[i]=c[i]-a[i+1];
        k=d[i];
    }
    int max=d[0];
    for(i=1;i<n-1;i++)
    {
        if(d[i]>max)
            max=d[i];
    }
    for(i=0;i<n;i++)
    {
    if(max < b[i])
        printf("%d",b[i]);
    else
        count++;
    }
    if(count==n)
    printf("%d",max);
    return 0;

}
