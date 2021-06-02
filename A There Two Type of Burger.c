#include<stdio.h>
int main()
{
    int b[200],p[200],f[200],h[200],c[200],i,j,t1,t2,t,k,max[200];
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d %d %d %d %d",&b[i],&p[i],&f[i],&h[i],&c[i]);
    }
    for(i=0; i<t; i++)
    {
        t1=0;t2=0;
        k=b[i]/2;
        if(h[i]>=c[i])
        {
            if(k>p[i])
            {
                k=k-p[i];
                t1=p[i]*h[i];
                if(k>=f[i])
                    t2=f[i]*c[i];
                else
                    t2=k*c[i];
            }
            else
                t1=k*h[i];
        }
        else
        {
            if(k>f[i])
            {
                k=k-f[i];
                t1=f[i]*c[i];
                if(k>=p[i])
                    t2=p[i]*h[i];
                else
                    t2=k*h[i];
            }
            else
                t1=k*c[i];
        }
        max[i]=t1+t2;

    }
    for(i=0;i<t;i++)
    {
        printf("%d\n",max[i]);
    }
return 0;
}


