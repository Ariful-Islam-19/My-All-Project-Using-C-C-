#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[1000],b[1000];
    int i,j=0,n=0,k,p,l,c[150],r[100],t[100],count=0,sum=0;
    scanf("%s",&a);
    l=strlen(a);
    for(i=0; i<l; i++)
    {
        if(a[i]=='A')
        {
            c[j]=i;
            j++;
        }
        if(a[i]=='Q')
            n++;
    }
    p=j;
    for(i=0; i<p; i++)
    {
        for(j=0; j<=c[i]; j++)
        {
            if(a[j]=='Q')
            {
                count++;
            }
        }
            r[i]=count;
            count=0;
    }

for(i=0; i<p; i++)
{
    sum=sum+(r[i]*(n-r[i]));
}
printf("%d",sum);

return 0;
}
