#include<stdio.h>
int main()
{
    int n,i,j,count=0,sum=0;
    scanf("%d",&n);
    int m[100000];
    for(i=0; i<n; i++)
    {
        scanf("%d",&m[i]);
    }

    for(i=0;i<n-1;i++)
    {
        if(m[i]==m[i+1])
            count++;
        else
            sum++;
    }
        printf("%d",sum+1);

return 0;
}
