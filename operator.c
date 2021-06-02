#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c,d;
    printf("enter two integer number =");
    scanf("%d%d%d",&a,&b,&c);
    //scanf("%d",&b);
    d= a>b && a>c ? a : b>a && b>c ? b : c;
    printf("\n%d",d);
    getch();
}
