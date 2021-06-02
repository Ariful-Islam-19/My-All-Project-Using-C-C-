#include<stdio.h>
int main()
{
    int n,i,j,k,m[100];
    scanf("%d",&n);
    i=0;
    while(k != 0)
    {
        m[i]=n%10;
        k=n/10;
        n=k;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d|",m[j]+3);
    }
    getch();
}
