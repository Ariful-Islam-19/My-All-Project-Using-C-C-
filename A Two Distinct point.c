#include<stdio.h>
int main()
{
    int n,l1[1000],l2[1000],r1[1000],r2[1000],i,rs[1000],rb[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d %d",&l1[i],&r1[i],&l2[i],&r2[i]);
        rs[i]=r1[i];
        if(r1[i] != r2[i])
            rb[i]=r2[i];
        else
            rb[i]=r2[i]-1;
    }
    for(i=0;i<n;i++)
    {
        printf("%d %d\n",rs[i],rb[i]);
    }
return 0;
}
