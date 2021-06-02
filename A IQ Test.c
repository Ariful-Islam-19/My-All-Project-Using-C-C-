#include<stdio.h>
int main()
{
    int n,i,a[1000],count=0,sum=0,p,q;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            count++;
            p=i+1;
        }
        else
        {
            sum++;
            q=i+1;
        }
    }
    if(count==1)
        printf("%d",p);
    else if(sum==1)
        printf("%d",q);
    else
        printf("");
    return 0;
}
