#include<stdio.h>
#include<conio.h>
int main()
{
    int n,k,i,j,s;
    scanf("%d %d",&n,&k);
    s=n;
    for(j=1; j<=k; j++)
    {
        if(s%10==0)
        {
            s=s/10;
        }
        else
        {
            s=s-1;
        }


    }

    printf("%d",s);
    return 0;
}

