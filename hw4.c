#include<stdio.h>
int main()
{
    int n,m,k;
    printf("enter value of X :");
    scanf("%d",&n);
    m=3*n*n+6*n-13;
    k=9*n*n-18*n+5;
    printf("\n(gof)(x)=%d",m);
    printf("\n(fog)(x)=%d",k);
    getch();

}
