#include<stdio.h>
main()
{
    int n,i,j;
    int sum=0;
    int count=0;
    int mul=0;
    int first=0,second=1;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        if(i<=1)
            printf("%d\t",i);

        else
        {


            mul=first+second;
            first=second;
            second=mul;
            printf(" %d\t",mul);
        }


    }
    getch();
}
