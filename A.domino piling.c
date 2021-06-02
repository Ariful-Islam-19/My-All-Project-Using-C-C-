#include<stdio.h>
int main()
{
        int n,m,j,s,sum=0,count=0;
        scanf("%d %d",&n,&m);
        s=m%2;
        j=m/2;
        if(n>0 && j>0)
        {
            count=n*j;
            if((s==1) && (n/2>=1))
                sum=s*(n/2);
        }
        else
        {
            sum=0;
            count=0;
        }
        printf("%d",sum+count);
    return 0;
}
