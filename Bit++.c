#include<stdio.h>
int main()
{
        int n,count=0,i;
        char x;
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
            scanf("%c",&x);

             if(x==x>>)
                 count=count+1;
             else if(x==<<x)
                 count=count-1;

        }
        printf("%d",count);
    return 0;

}

