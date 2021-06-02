#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[1000000];
    int  i,l,count=0,sum=0;
    scanf("%s",&a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]=='A')
            count++;
        else
            sum++;
    }
    if(count>sum)
        printf("Anton");
    else if(count<sum)
        printf("Danik");
    else
        printf("Friendship");
    return 0;
}
