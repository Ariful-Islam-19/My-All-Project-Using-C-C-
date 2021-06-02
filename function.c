#include<stdio.h>
#include<conio.h>
int add(int n,int s)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=s;j++)
        {
            if(i==j || i+j==n+1 || i==1||j==s||i==n||j==1||j==(n+1)/2||i==(n+1)/2)
            printf("*");
           else
            printf(" ");
        }
        printf("\n");
    }
}
main()
{
    int sum;
    int a,b;
    printf("enter two number :");
    scanf("%d %d",&a,&b);
    add(a,b);
    //printf("%d",sum);
    getch();


}
