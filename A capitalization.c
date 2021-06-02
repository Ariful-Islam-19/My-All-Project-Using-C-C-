#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[1000];
    int i,l;
    scanf("%s",&a);
     l=strlen(a);
    a[0]=toupper(a[0]);
    for(i=0;i<l;i++)
    {
        printf("%c",a[i]);
    }
    return 0;

}
