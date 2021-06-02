#include<stdio.h>
#include<conio.h>
main()
{
    int arr[100];
    int n;
    int i,j;
    scanf("%d",&n);
    arr[0]=0;
    arr[1]=1;
    for(i=2,j=0; i<n,j<n; i++,j++)
    {
        arr[i]=arr[i-2]+arr[i-1];
        printf("%d\t",arr[j]);
    }
    getch();
}
