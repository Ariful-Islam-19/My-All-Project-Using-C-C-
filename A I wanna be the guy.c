#include<stdio.h>
int main()
{
    int i,j,n,p,q,a[1000],b[1000],c[1000],count=0,sum=0;
    scanf("%d %d",&n,&p);
    for(i=0; i<p; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&q);
    for(i=p; i<p+q; i++)
    {
        scanf("%d",&a[i]);
    }
    if((p+q)<n)
    {
        printf("Oh, my keyboard!");
    }
    else
    {
        for(i=0; i<n; i++)
        {
            b[i]=i+1;
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<p+q; j++)
            {
                if(b[i]!= a[j])
                    sum++;
            }
            if(sum==p+q)
            {
                printf("Oh, my keyboard!");
                break;
            }
            sum=0;
        }
        if(sum==0)
            printf("I become the guy.");
    }
    return 0;

}
