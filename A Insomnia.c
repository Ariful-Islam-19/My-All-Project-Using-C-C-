#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int k,l,m,n,d;
    int i,j,a[100000],o,p,q,r,temp,count=0;
    scanf("%d %d %d %d %d",&k,&l,&m,&n,&d);
    if(k==1)
    {
        printf("%d",d);
    }
    else
    {

        o=d/k;
        p=d/l;
        q=d/m;
        r=d/n;
        for(i=0,j=1; i<o,j<=o; i++,j++)
        {
            a[i]=k*j;
        }
        for(i=o,j=1; i<o+p,j<=p; i++,j++)
        {
            a[i]=l*j;
        }
        for(i=o+p,j=1; i<o+p+q,j<=q; i++,j++)
        {
            a[i]=m*j;
        }
        for(i=o+p+q,j=1; i<o+p+q+r,j<=r; i++,j++)
        {
            a[i]=n*j;
        }
        for(i=0; i<o+p+q+r; i++)
        {
            for(j=0; j<o+p+q+r-1; j++)
            {
                if(a[j+1]>a[j])
                {
                    temp=a[j+1];
                    a[j+1]=a[j];
                    a[j]=temp;
                }
            }
        }
        for(i=0; i<o+p+q+r-1; i++)
        {
            if(a[i]==a[i+1])
                count++;
        }
        printf("%d",o+p+q+r-count);
    }

    return 0;
}
