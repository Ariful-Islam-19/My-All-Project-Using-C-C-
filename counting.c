#include<stdio.h>
main()
{
    int n;
    int count=0;
    printf("enter a number which integer number you want to see  =");
    scanf("%d",&n);
    while(n !=0)
    {
        n=n/10;
        count++;
    }
    printf("\n%d is total integer number\n",count);
    getch();
}
