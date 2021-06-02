#include<stdio.h>
#include<conio.h>
int main()
{
    int n,k,l,f,i,j,m[100],count=1,sum=0;
    scanf("%d",&n);
    k=n;
    i=0;
    while(k!=0)
    {
        m[i]=k%10;
        l=k/10;
        k=l;
        i++;
    }
    for(j=0;j<i;j++)
    {
        for(f=1;f<=m[j];f++)
        {
            count=count*f;
        }
        sum=sum+count;
        count=1;
    }
    printf("\n");
    if(sum==n)

    printf("%d is strong number",n);
    else
        printf("%d is not strong number",sum);


    getch();
}
