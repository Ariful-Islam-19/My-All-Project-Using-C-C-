#include<stdio.h>
main()
{
    int n1,i,j,k;
    int sum=0;
    scanf("%d",&n1);
    printf("0x2x3");
    for(i=1,j=3,k=4;i<=n1,j<=n1*2+1,k<=n1*2+2;i++,j=j+2,k=k+2)
    {
        sum=sum+i*j*k;
        printf("+%dx%dx%d",i,j,k);
    }
    printf("=%d",sum);
    getch();
}
