#include<stdio.h>
#include<conio.h>
main()
{
    int n,i,j,k;
    printf("enter a number which FACTORIAL you see  =");
    sacnf("%d",&n);
    for(i=1;i<=n-1;i++){
        n=(n-i)*n;
        printf("%d\n",n);

    }
    getch();
}
