#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,n1,r;
    int sum=0;
    int remind;
    printf("A integer number positive digit which sum of digit you find  =");
    scanf("%d",&a);
    n1=a;
    while(r != 0)
    {
        r=n1/10;
        remind=n1%10;
        sum=sum+remind;
        n1=r;
    }
    printf("\n%d is total sum of digit\n  ",sum);



getch();
}
