#include<stdio.h>
#include<conio.h>
main()
{
    while(1)
    {
        int n,i;
        int mul=1;
        printf("enter any number which FACTIRIAL you see\n =");


        scanf("%d",&n);
        if(n<0)
            printf("it is wrong !");
        else
        {



        for(i=1; i<=n; i++)
        {
            mul=i*mul;
            // printf("%d",n);
        }

        printf("%d\n",mul);
        printf("\n");

        }

        getch();
    }
}
