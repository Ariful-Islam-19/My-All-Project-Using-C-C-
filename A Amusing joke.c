#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,j,x,y,z,count=0;
    char a[1000],b[1000],c[1000],d[1000];
    scanf("%s %s %s",&a,&b,&c);
    x=strlen(a);
    y=strlen(b);
    z=strlen(c);
    if((x+y) != z)
        printf("NO");
    else
    {
        for(i=0; i<x; i++)
        {
            d[i]=a[i];
        }
        for(i=x,j=0; i<x+y,j<y; i++,j++)
        {
            d[i]=b[j];
        }
        for(i=0; i<x+y; i++)
        {
            for(j=0; j<x+y-1; j++)
            {
                if(d[j+1]<d[j])
                {
                    char temp=d[j+1];
                    d[j+1]=d[j];
                    d[j]=temp;
                }
            }
        }
        for(i=0; i<z; i++)
        {
            for(j=0; j<z-1; j++)
            {
                if(c[j+1]<c[j])
                {
                    char temp=c[j+1];
                    c[j+1]=c[j];
                    c[j]=temp;
                }
            }
        }
        for(i=0;i<x+y;i++)
        {
            if(d[i]==c[i])
                count++;
        }
        if(count==z)
            printf("YES");
        else
            printf("NO");


    }
    return 0;
}


