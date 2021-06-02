#include<stdio.h>
int main()
{
    int n,k,i=1,sum=0,r=0;
    scanf("%d",&n);
    int m[n];
    k=n;
    while(m[i]!=1){
    m[i]=k%10;
    r=r+m[i];
    k=k/10;
    sum=sum+1;
    i++;

    }
    for(i=1;i<sum;i++)
    {
        printf("%d",m[i]);
    }
    printf("\n");
    printf("%d",r);
    return 0;
}
