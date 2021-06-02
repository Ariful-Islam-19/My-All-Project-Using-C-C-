#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    printf("enter two number  =");
    scanf("%d%d",&a,&b);
    c=a|b;
    printf("\n%d",c);
    c=a&b;
    printf("\n%d",c);
        c=a^b;
    printf("\n%d",c);
       // c=a~b;
    //printf("%d",c);
    getch();

}

