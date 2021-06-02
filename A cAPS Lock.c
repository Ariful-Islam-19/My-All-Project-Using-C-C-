#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[1000],c[1000],e[1000],d[1000];
    int i,j,l,k=0,count=0,sum=0;
    scanf("%s",&a);
    l=strlen(a);
    b[0]=tolower(a[0]);
    c[0]=toupper(a[0]);
    e[0]=b[0];
    d[0]=c[0];
    for(i=1; i<l; i++)
    {
        e[i]=tolower(a[i]);
        d[i]=tolower(a[i]);
    }
    for(i=1; i<l; i++)
    {
        b[i]=toupper(a[i]);
        c[i]=toupper(a[i]);
    }
    for(i=0; i<l; i++)
    {
        if(a[i]==b[i])
            count++;
    }
    for(i=0; i<l; i++)
    {
       if(a[i]==c[i])
            sum++;
    }

    for(i=0; i<l; i++)
    {
        if(count==l)
            printf("%c",d[i]);
        else if(sum==l)
            printf("%c",e[i]);
        else
            printf("%c",a[i]);
    }
    return 0;

}
