#include<stdio.h>
int main()
{
     int n,i,j,sum=0;
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         for(j=1;j<=6;j++)
         {
             sum++;
             printf(" %d",sum);
         }
         printf("\n");
     }
     getch();
}
