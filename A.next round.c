#include<stdio.h>
int main()
{
    int a[100],i,n,k,count=0,sum=0,mul=0,l,s;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    s=a[k-1];
    for(i=0;i<n;i++)
    {
        if(a[i]>s)
            count++;
            else if(a[i]==0 && s==0)
                sum++;
            else if(a[i]==s)
                mul++;
            else
                l++;
    }
    printf("%d",count+mul);
    return 0;
}
