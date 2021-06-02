#include<stdio.h>
#include<conio.h>
int main()
{
    int n,k,l,i,j,m[100],count=0,sum=0;
    scanf("%d",&n);
    k=n;
    i=0;
    while(k!=0)
    {
        m[i]=k%10;
        l=k/10;
        k=l;
        sum=sum+m[i]*m[i]*m[i];
        i++;
    }
    printf("\n");
    if(sum==n)

    printf("%d is armstrong number",n);
    else
        printf("%d is not armstrong number",n);


    getch();
}








