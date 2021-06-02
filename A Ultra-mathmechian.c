#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[1000],b[1000];
    int i,j,l;
    scanf("%s %s",&a,&b);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]==b[i])
            printf("0");

        else
            printf("1");
    }
    return 0;
}

