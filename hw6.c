#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter a value of x:");
    scanf("%d",&n);
    if(n>3)
        m=3*n-1;
    else if(n>=-2 && n<=3)
        m=n*n-2;
    else
       m= 2*n+3;
       printf("\nvalue=%d",m);
    getch();
}

