#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,k,count=0;
    printf("enter a number:");
    scanf("%d",&n);
    if(n>2)
    printf("2,");
    for(i=3;i<=n;i++)
    {
        for(j=2;j<i;j++)
        {
           if(i%j==0)
                count++;
        }
        if(count==0)
            printf("\t%d,",i);
            count=0;
    }
    getch();

}
