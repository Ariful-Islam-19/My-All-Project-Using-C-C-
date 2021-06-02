#include<stdio.h>
int main()
{
    int n,i,j,m=-1,k=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        k++;
        m=m+k;
        printf("%d+",m);
    }
    getch();
}
