#include<stdio.h>
int fun(int n)
{
    if(n==0)
        return 1;
    else
        return n* fun(n-1);
}
main()
{
    int n;
    printf("a number :");
    scanf("%d",&n);
    int result=fun( n);
    printf("result :%d",result);
    getch();
}

