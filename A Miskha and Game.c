#include<stdio.h>
int main()
{
    int n,a[200],b[200];
    int i,j=0,count=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
        if(a[i]>b[i])
            count++;
        else if(a[i]<b[i])
            sum++;
            else
                j++;
    }
    if(count>sum)
        printf("Mishka");
    else if(count<sum)
        printf("Chris");
    else
        printf("Friendship is magic!^^");
    return 0;
}
