#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[300000];
    int n,count=0,sum=0,i;
    scanf("%d",&n);
    scanf("%s",&a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='1')
            count++;
        else
            sum++;
    }
    if(sum<=count)
        printf("%d",n-sum*2);
    else
        printf("%d",n-count*2);

    return 0;
}
