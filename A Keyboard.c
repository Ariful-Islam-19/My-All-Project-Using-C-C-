#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[500],c[500],input;
    int i,j,l1,l2;
    char b[40]="qwertyuiopasdfghjkl;zxcvbnm,./";
    scanf("%c %s",&input,&a);
    l1=strlen(a);
    l2=strlen(b);
    if(input=='R')
    {
        for(i=0; i<l1; i++)
        {
            for(j=0; j<l2; j++)
            {
                if(a[i]==b[j])
                {
                    c[i]=b[j-1];
                }
            }
        }
    }
    else
    {
        for(i=0; i<l1; i++)
        {
            for(j=0; j<l2; j++)
            {
                if(a[i]==b[j])
                {
                    c[i]=b[j+1];
                }
            }
        }
    }
    for(i=0;i<l1;i++)
    {
        printf("%c",c[i]);
    }
    return 0;
}
