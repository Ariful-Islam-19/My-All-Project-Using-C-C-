#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,n,n1,n2,m,l;
    int i,j,k;
    int remind;
    printf("Enter two number which GCD & LCD you see  =");
    scanf("%d%d",&n1,&n2);
    a=n1;
    b=n2;
    while(remind!=0)
    {remind=a%b;
    a=b;
    b=remind;
    }

    printf("%d is GCD\n ",a);
    printf("%d is LCD \n",n1*n2/a);
    m=n1/a;
    l=n2/a;
    printf("this float number:%d/%d",m,l);
    getch();




}
