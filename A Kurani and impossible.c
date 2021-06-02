#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,a[150000],i,j,count=1;
    scanf("%d %d",&n,&m);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0; j<n-1; j++)
    {
        for(i=j+1; i<n; i++)
        {
            count=count*abs(a[j]-a[i]);
            printf("%d ",count);
        }
    }
    printf("%d",count%m);
    return 0;

}
