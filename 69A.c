#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int n,i,j,sum=0,count=0,mul=0;
    scanf("%d",&n);
    int m[100],l[100],p[100];
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&m[i],&l[i],&p[i]);
    }
        for(j=0;j<n;j++)
        {
            sum=sum+m[j];
            count=count+l[j];
            mul=mul+p[j];
        }
    if((sum==0) && (count==0) && (mul==0))
        printf("YES");
    else
        printf("NO");
    return 0;
}
