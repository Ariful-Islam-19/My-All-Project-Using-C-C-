#include<stdio.h>
#include<conio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    if(t<15)
    {
    int a[t],b[t];
    for(i=1; i<=t; i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
        for(i=1; i<=t; i++)
        {
            if(a[i]>b[i])
                printf(">");
            else if(a[i]<b[i])
                printf("<");
            else
                printf("=");
            printf("\n");

        }
    }
    else
        printf("try again");
    getch();
}
