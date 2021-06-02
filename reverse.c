#include<stdio.h>
#include<conio.h>
main()
{


    int n1,a;
    int sum=0;
    int remind,r;
    printf("A integer positive number which reverse you find  =");
   scanf("%d",&a);
    n1=a;
    while(r != 0)
    {
        r=n1/10;
        remind=n1%10;
        n1=r;
        sum=sum*10+remind;
    }
    printf("\n%d is RESULT. \n",sum);
    getch();

}
