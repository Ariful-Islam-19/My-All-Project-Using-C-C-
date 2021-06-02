#include<stdio.h>
int main()
{
    int n,a[10000],b[10000],c[10000],d[10000],i,j=0,k=0,l=0,count;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==1)
        {
            b[j]=i+1;
            j++;
        }
        else if(a[i]==2)
        {
            c[k]=i+1;
            k++;
        }
        else
        {
            d[l]=i+1;
            l++;
        }
    }
    if(j<k && j<l)
        count=j;
    else if(k<j && k<l)
        count=k;
    else if(l<k && l<j)
        count=l;
    else if(j==k)
        count=k;
    else if(k==l)
        count=k;
    else
        count=l;
    printf("%d\n",count);
    for(i=0; i<count; i++)
    {
        printf("%d %d %d",b[i],c[i],d[i]);
        printf("\n");
    }

    return 0;

}
