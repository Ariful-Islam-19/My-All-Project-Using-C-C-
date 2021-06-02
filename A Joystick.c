#include<stdio.h>
int main()
{
    int a,b,a1,b1,c1,c2,t,max,count=0;
    scanf("%d %d",&a,&b);
    if(a==1 && b==1)
        printf("0");
    else
    {
        if(a>=b)
        {
            a1=a;
            b1=b;
        }
        else
        {
            a1=b;
            b1=a;
        }

lebal:
        {
            a1=a1-2;
            c1=a1;
            if(a1>0)
            {
                b1++;
                c2=b1;
                count=count+1;
            }
        }
        if(a1<=0)
            printf("%d",count+1);
        else if(c1>=c2)
        {
            a1=c1;
            b1=c2;
            goto lebal;
        }
        else
        {
            a1=c2;
            b1=c1;
            goto lebal;
        }
    }
    return 0;

}
