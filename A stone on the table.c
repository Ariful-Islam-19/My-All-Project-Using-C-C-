#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    char a[1000];
    for(i=0; i<n; i++)
    {
        scanf("%s",&a[i]);
    }

    for(i=0; i<n-1; i++)
    {
        if(a[i]==a[i+1])
            count++;
    }
    printf("%d",count);
    return 0;

}
