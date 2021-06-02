#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[150000];
    int n,i,j=0,count=0;
    scanf("%s",&a);
    int l=strlen(a);
    if(l%2==0)
        printf("YES");
    else
    {
        for(i=0,j=l-1; i<(l/2),j>1+l/2; i++,j--)
        {
            if(a[i]==a[j])
            count++;
        }
        if(count==(l/2)-1)
            printf("NO");
        else
            printf("YES");
    }



    return 0;

}
