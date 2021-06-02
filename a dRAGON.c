#include<stdio.h>
int main()
{
    int s,n,i,j=0,x[100000],y[100000],z[100000],p[100000],count=0,t,k;
    scanf("%d %d",&s,&n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&x[i],&y[i]);
    }
    k=s;
    t=n;
lebal:
    {
        for(i=0; i<t; i++)
        {
            if(k>x[i])
            {
                k=s+y[i];
                count++;
                s=k;
            }
            else
            {
                z[j]=x[i];
                p[j]=y[i];
                j++;
            }
        }
    }
    if(count>0 && j>1)
    {
        for(i=0; i<j; i++)
        {
            x[i]=z[i];
            y[i]=p[i];
        }
        t=j;
        j=0;
        count=0;
        goto lebal;
    }

    else if(j==1 && (s<=z[0]))
        printf("NO");
    else if(count==0)
        printf("NO");
    else
        printf("YES");

    return 0;
}


