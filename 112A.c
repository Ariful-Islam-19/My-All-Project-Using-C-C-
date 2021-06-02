#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,s,l,count=0,sum=0,mul=0;
    char a[100],b[100];
    scanf("%s",&a);
    scanf("%s",&b);
    l=strlen(a);
    for(i=0; i<l; i++)
    {
        a[i]=tolower(a[i]);
        if(a[i]=='a')
            s=1;
        else if(a[i]=='b')
            s=2;
        else if(a[i]=='c')
            s=3;
        else if(a[i]=='d')
            s=4;
        else if(a[i]=='e')
            s=5;
        else if(a[i]=='f')
            s=6;
        else if(a[i]=='g')
            s=7;
        else if(a[i]=='h')
            s=8;
        else if(a[i]=='i')
            s=9;
        else if(a[i]=='j')
            s=10;
        else if(a[i]=='k')
            s=11;
        else if(a[i]=='l')
            s=12;
        else if(a[i]=='m')
            s=13;
        else if(a[i]=='n')
            s=14;
        else if(a[i]=='o')
            s=15;
        else if(a[i]=='p')
            s=16;
        else if(a[i]=='q')
            s=17;
        else if(a[i]=='r')
            s=18;
        else if(a[i]=='s')
            s=19;
        else if(a[i]=='t')
            s=20;
        else if(a[i]=='u')
            s=21;
        else if(a[i]=='v')
            s=22;
        else if(a[i]=='w')
            s=23;
        else if(a[i]=='x')
            s=24;
        else if(a[i]=='y')
            s=25;
        else
            s=26;

        sum=sum+s;


    }

    for(i=0; i<l; i++)
    {
        b[i]=tolower(b[i]);
        if(b[i]=='a')
            s=1;
        else if(b[i]=='b')
            s=2;
        else if(b[i]=='c')
            s=3;
        else if(b[i]=='d')
            s=4;
        else if(b[i]=='e')
            s=5;
        else if(b[i]=='f')
            s=6;
        else if(b[i]=='g')
            s=7;
        else if(b[i]=='h')
            s=8;
        else if(b[i]=='i')
            s=9;
        else if(b[i]=='j')
            s=10;
        else if(b[i]=='k')
            s=11;
        else if(b[i]=='l')
            s=12;
        else if(b[i]=='m')
            s=13;
        else if(b[i]=='n')
            s=14;
        else if(b[i]=='o')
            s=15;
        else if(a[i]=='p')
            s=16;
        else if(b[i]=='q')
            s=17;
        else if(b[i]=='r')
            s=18;
        else if(b[i]=='s')
            s=19;
        else if(b[i]=='t')
            s=20;
        else if(b[i]=='u')
            s=21;
        else if(b[i]=='v')
            s=22;
        else if(b[i]=='w')
            s=23;
        else if(b[i]=='x')
            s=24;
        else if(b[i]=='y')
            s=25;
        else
            s=26;
        mul=mul+s;
    }

   if(sum==mul)
    printf("0");
else if(sum>mul)
    printf("1");
else
    printf("-1");
return 0;
}

