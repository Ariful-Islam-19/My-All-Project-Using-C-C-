#include<stdio.h>
main()
{
    int n,i,j;
    scanf("%d",&n);
    int mul=1;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        mul=mul*pow(i,2);
    }
    printf("%d",mul);
    getch();
}
