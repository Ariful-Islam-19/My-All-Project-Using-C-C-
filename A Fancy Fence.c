#include<stdio.h>
int main()
{
    int n,a[10000],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       if(360%(180-a[i])==0)
        printf("YES\n");
       else
        printf("NO\n");
    }
    return 0;

}
