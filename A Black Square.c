#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
int main()
{
    int a1,a2,a3,a4;
    long long count=0,count2=0,count3=0,count4=0,i;
    char s[100500];
    scanf("%d %d %d %d",&a1,&a2,&a3,&a4);
    scanf("%s",&s);
    if(a1==0 && a2==0 && a3==0 && a4==0)
        printf("0");
    else
    {
        for(i=0; i<strlen(s); i++)
        {
            if(s[i]=='1')
                count=count+a1;
            else if(s[i]=='2')
                count=count+a2;
            else if(s[i]=='3')
                count=count+a3;
            else
                count=count+a4;
        }
        printf("%lld",count);
    }

    return 0;

}
