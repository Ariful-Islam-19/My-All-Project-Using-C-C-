#include<stdio.h>
int main()
{
    int n,m,i,j,temp;
    scanf("%d %d",&n,&m);
    int a[100000],b[10000];
    for(i=0; i<m; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<m-1; j++)
        {
            if(a[j+1]<a[j])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0; i<=m-n; i++)
    {
       b[i]=a[n-1+i]-a[i];
    }
    int max=b[0];
    for(i=1;i<=m-n;i++)
    {
       if(b[i]<max)
            max=b[i];
    }
    printf("%d",max);
    return 0;
}
