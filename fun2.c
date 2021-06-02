#include<stdio.h>
#include<conio.h>
void pattern(int n,int s);
main()
{
    int a,b;
    printf("enter two number which are equal :");
    scanf("%d %d",&a,&b);
    pattern(a,b);
    getch();
}
void pattern(int n,int s)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=s;j++)
        {
            if(((n+1)/2==j && i==n ) || ((n)/2==j&& i==n-2 )|| ((n+1)/2==j+1 && i==n-2 )||((n+1)/2==j-2 && i==n-4 )||((n+1)/2==j+2 && i==n-4 )||((n+1)/2==j && i==n-5 ))
            printf("*");
           else
            printf(" ");
        }
        printf("\n");
    }
}

