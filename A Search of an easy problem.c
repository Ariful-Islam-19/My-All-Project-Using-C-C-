#include<stdio.h>
int main()
{
    int n,m[1000],i,count=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m[i]);
        if(m[i]==1)
            count++;
    }
    if(count>=1)
        printf("HARD");
    else
        printf("EASY");
    return 0;
}
