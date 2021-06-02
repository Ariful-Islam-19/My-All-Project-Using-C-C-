#include<stdio.h>
#include<conio.h>
main()
{
    while(1)
    {
        int a,b,i;
        int count=0;
        printf("Enter any number  =");
        scanf("%d",&a);
        for(i=2; i<a; i++)
        {
            if(a%i==0)
            {
                count++;
            }
        }
        if(count==0)

            printf("\n%d is prime number\n",a);
        else
            printf("\n%d is not prime number\n",a);
        getch();

    }
    printf("\n");
}
