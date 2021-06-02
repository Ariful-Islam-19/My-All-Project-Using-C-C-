#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    printf("YOUR MARK  =");
    scanf("%d",&a);
    if(a>100 || a<0)
        printf("INVALID MARK");
    else if(a<=100 && a>=80)
        printf("A+");
    else if(a<=79 && a>=70)
        printf("A");
    else if(a<=69 && a>=60)
        printf("A-");
    else if(a<=59 && a>=50)
        printf("B");
    else if(a<=49 && a>=40)
        printf("C");
    else if(a<=39 && a>=33)
        printf("D");

    else
        printf("SO SAD YOU FAIL !");
        getch();

}
