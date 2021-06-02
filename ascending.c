#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j;
     int tem;
     scanf("%d",&n);
     int m[n];
     for(i=0;i<n;i++)
     {
         scanf("%d",&m[i]);
     }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(m[j+1]<m[j])
            {
                tem=m[j+1];
                m[j+1]=m[j];
                m[j]=tem;

            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf(" %d",m[i]);
    }
    getch();
}

