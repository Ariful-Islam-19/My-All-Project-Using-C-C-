#include<stdio.h>
#include<string.h>
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
        b[i]=tolower(b[i]);
        if(a[i]==b[i])
        {
            count++;
        }
        else if(a[i]>b[i])
        {
            if(a[i]=='a')
            s=97;
            else if(a[i]=='b')
                s=98;
            else if(a[i]=='c')
                s=99;
            else if(a[i]=='d')
                s=100;
            else if(a[i]=='e')
                s=101;
            else if(a[i]=='f')
                s=102;
            else if(a[i]=='g')
                s=103;
            else if(a[i]=='h')
                s=104;
            else if(a[i]=='i')
                s=105;
            else if(a[i]=='j')
                s=106;
            else if(a[i]=='k')
                s=107;
            else if(a[i]=='l')
                s=108;
            else if(a[i]=='m')
                s=109;
            else if(a[i]=='n')
                s=110;
            else if(a[i]=='o')
                s=111;
            else if(a[i]=='p')
                s=112;
            else if(a[i]=='q')
                s=113;
            else if(a[i]=='r')
                s=114;
            else if(a[i]=='s')
                s=115;
            else if(a[i]=='t')
                s=116;
            else if(a[i]=='u')
                s=117;
            else if(a[i]=='v')
                s=118;
            else if(a[i]=='w')
                s=119;
            else if(a[i]=='x')
                s=120;
            else if(a[i]=='y')
                s=121;
            else
                s=122;

            sum=sum+s;


        }

        else
        {
            if(b[i]=='a')
            s=97;
            else if(b[i]=='b')
                s=98;
            else if(b[i]=='c')
                s=99;
            else if(b[i]=='d')
                s=100;
            else if(b[i]=='e')
                s=101;
            else if(b[i]=='f')
                s=102;
            else if(b[i]=='g')
                s=103;
            else if(b[i]=='h')
                s=104;
            else if(b[i]=='i')
                s=105;
            else if(b[i]=='j')
                s=106;
            else if(b[i]=='k')
                s=107;
            else if(b[i]=='l')
                s=108;
            else if(b[i]=='m')
                s=109;
            else if(b[i]=='n')
                s=110;
            else if(b[i]=='o')
                s=111;
            else if(a[i]=='p')
                s=112;
            else if(b[i]=='q')
                s=113;
            else if(b[i]=='r')
                s=114;
            else if(b[i]=='s')
                s=115;
            else if(b[i]=='t')
                s=116;
            else if(b[i]=='u')
                s=117;
            else if(b[i]=='v')
                s=118;
            else if(b[i]=='w')
                s=119;
            else if(b[i]=='x')
                s=120;
            else if(b[i]=='y')
                s=121;
            else
                s=122;
                mul=mul+s;
        }


    }
    printf("%d %d",sum,mul);
    /*if(count==l)
        printf("0");
    else if(sum==mul)
        printf("0");
    else if(sum>mul)
        printf("1");
    else
        printf("-1");*/
return 0;
}
