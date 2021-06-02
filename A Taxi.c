#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int m[1000000];
    int b=0,c=0,d=0,e=0,f,g,h,k,l;
    for(i=0; i<n; i++)
    {
        scanf("%d",&m[i]);
    }
    for(i=0; i<n; i++)
    {
        if(m[i]==4)
            b++;
        else if(m[i]==3)
            c++;
        else if(m[i]==2)
            d=d+2;
        else
            e++;
    }
    if(c==0 && d==0 && e==0)
        printf("%d",b);
    else if(c==0 && d==0 && e>0)
    {
        if(e%4==0)
            printf("%d",e/4+b);
        else
            printf("%d",1+e/4+b);
        }
    else if(c==0 && d>0 && e==0)
    {
        if(d%4==0)
            printf("%d",b+d/4);
        else
            printf("%d",1+b+d/4);
    }
    else if(c==0 && d>0 && e>0)
    {
        f=d+e;
        if(f%4==0)
            printf("%d",b+f/4);
        else
            printf("%d",1+b+f/4);
    }
    else if(c>0 && d==0 && e==0)
    {
        printf("%d",b+c);
    }
    else if(c>0 && d==0 && e>0)
    {
        if(c>=e)
            printf("%d",b+c);
        else
        {
            g=e-c;
            if(g%4==0)
                printf("%d",b+c+g/4);
            else
                printf("%d",1+b+c+g/4);
        }

    }
    else if(c>0 && d>0 && e==0)
    {
        if(d%4==0)
            printf("%d",b+c+d/4);
        else
            printf("%d",1+b+c+d/4);
    }
    else if(c>0 && d>0 && e>0)
    {
        if(c>=e && (d%4==0))
            printf("%d",b+c+d/4);
        else if(c>=e && (d%4 !=0))
            printf("%d",1+b+c+d/4);
        else
        {
            h=e-c;
            k=h+d;
            if(k%4==0)
                printf("%d",b+c+k/4);
            else
                printf("%d",1+b+c+k/4);
        }
    }
    else
        printf("%d",b);

    return 0;
}

