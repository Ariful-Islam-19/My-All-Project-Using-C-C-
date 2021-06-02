#include<stdio.h>
int main()
{
    int n,i,a[100000],count[100000],p=0,j=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=p; i<n-1; i++)
    {
        if(a[i+1]>=a[i])
            count[j]++;
            else
            {
                j++;
                count[j]=0;
            }
    }
    int max=count[0];
    for(i=1;i<=j;i++)
    {
        if(count[i]>max)
            max=count[i];
    }
    printf("%d",max+1);

    return 0;
}

