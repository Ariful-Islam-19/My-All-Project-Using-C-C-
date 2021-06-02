#include<stdio.h>
#include<conio.h>
int over=0;
main()
{
    while(!over){
    int n;
    lebal:
        printf("\n");
    scanf("%d",&n);

         if(n%2==0)
        {
            printf(" %d",n/2);
        }
        else
            printf(" %d",3*n+1);
        goto lebal;
        if(n==1)
            over=1;
        getch();
    }
}

