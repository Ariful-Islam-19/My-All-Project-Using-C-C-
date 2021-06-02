#include<stdio.h>
main()
{
    int n,i;
    int a;
    scanf("%d",&a);
    n=a;
    int mul=0;
    printf("0");
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {

        mul=mul-i;
        printf("-%d",i);
        }
        else
        {


         mul=mul+i;
        printf("+%d",i);
        }


    }



            printf("=%d\n",mul);

    getch();
}
