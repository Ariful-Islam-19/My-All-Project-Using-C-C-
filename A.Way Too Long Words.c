#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,l;
    char a[1000];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",&a);
        l=strlen(a);
        if(l>10)
        {
          printf("%c%d%c",a[0],l-2,a[l-1]);
          printf("\n");
        }
        else
            printf("%s",a);
            printf("\n");
    }
    return 0;
}
