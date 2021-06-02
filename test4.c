#include<stdio.h>
int main()
{
    int a,b,tem;
    scanf("%d %d",&a,&b);
    tem=a;
    a=b;
    b=tem;
    printf("%d %d",a,b);
    getch();
}

