#include<stdio.h>
int main()
{
    int n,i,j;
    float sum=0;
    for(i=1;i<=50;i++)
    {
        sum=sum+(float)1/i;
    }
    printf("%.2f",sum);
    return 0;
}
