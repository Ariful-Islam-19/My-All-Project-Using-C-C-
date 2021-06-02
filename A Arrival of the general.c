#include<stdio.h>
int main()
{
    int n,i,a[1000],count=0,sum=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==max)
        {
           count=i+1;
           break;
        }

    }
    for(j=n-1;j>=0;j--)
    {
        if(a[j]==min)
        {
          sum=j+1;
          break;
        }
    }
    int index1=count-1;
    int index2=n-sum;
    if(count==1 && sum==n)
        printf("0");
    else if(count>sum)
        printf("%d",(index1+index2)-1);
    else
         printf("%d",(index1+index2));
    return 0;
}

