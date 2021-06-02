#include<stdio.h>
main()
{
    int j,i,n,n1;
    int remind,r;
    int count=1;
    int sum=0;

    scanf("%d",&n);
    n1=n;
    while(remind !=0 )
    {
        r= n1/10;
        remind=n1%10;
        n1=r;
        for(i=1; i<=remind; i++)
        {
            count=count*i;
        }
        sum=sum+count;
        count=1;


    }
            printf("\n%d",sum-1);

    getch();
}
