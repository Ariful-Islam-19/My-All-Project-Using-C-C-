#include<stdio.h>
main()
{
    int j, i,n,sum=0;
    printf("last number  =");
    scanf("%d",&n);
    printf("0");
    for(i=1; i<=n; i++)
    {
        sum=sum+i;

            printf("+%d",i);


    }
    printf("=%d",sum);
    getch();

}
