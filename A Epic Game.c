#include<stdio.h>
int main()
{
    int n,a,b,c,d,time,s,ans,remind,count=0;
    scanf("%d %d %d",&a,&b,&n);
    s=a;
    ans=b;
    time=n;
    int k=n;
lebal:
    {
        while(remind != 0)
        {
            remind=s%time;
            s=time;
            time=remind;
        }
        remind=1;
        count++;
    }
    if(k-s > 0)
    {
        int t=k;
        time=k-s;
        k=t-s;
        if(count%2 > 0)
            s=ans;
        else
            s=a;
        goto lebal;
    }
    else
    {
        if((count)%2 > 0)
            printf("0");
        else
            printf("1");
    }


    return 0;
}
