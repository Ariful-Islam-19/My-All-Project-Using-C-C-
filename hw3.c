#include<stdio.h>
int main()
{
    int n,m,i,j,k,l,sum=0,count=0;
    printf("enter first choice number:");
    scanf("%d",&m);
    printf("\nenter second choice number:");
    scanf("%d",&n);
    for(i=m+1;i<n;i++)
    {
        if(i%3==0)
            sum=sum+i;
    }
    for(i=m+1;i<n;i++)
    {
        if(i%7==0)
            count=count+i;
    }
    printf("\n sum=%d",sum+count);
    getch();
}
