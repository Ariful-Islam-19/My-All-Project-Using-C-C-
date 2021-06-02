#include<stdio.h>
#include<string.h>
int main()
{
    char a[200];
    int l,i,count=0,sum=0,mul=0;
    scanf("%s",a);
    l=strlen(a);
    for(i=0; i<l; i++)
    {
        if((a[i]=='0')&& (a[i+1]=='0')&& (a[i+2]=='0')&& (a[i+3]=='0')&& (a[i+4]=='0')&& (a[i+5]=='0')&& (a[i+6]=='0'))
            count++;
        else if((a[i]=='1')&& (a[i+1]=='1')&& (a[i+2]=='1')&& (a[i+3]=='1')&& (a[i+4]=='1')&& (a[i+5]=='1')&& (a[i+6]=='1'))
            sum++;
        else
            mul++;
    }
    if(count>0)
        printf("YES");
    else if(sum>0)
        printf("YES");
    else
        printf("NO");

    return 0;
}
