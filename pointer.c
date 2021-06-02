#include<stdio.h>
#include<conio.h>

main()
{
    int x[]={12,13,14,15,16};
    int*p;
    int i;
    p=&x[4];
    for(i=4;i>=0;i--)
    {
        printf("%d\n",*p);
        *p--;
    }





    getch();


}
