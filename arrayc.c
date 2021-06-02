#include<stdio.h>
main()
{
    int arr[]= {12,13,14,15,18};
    int arr2[100];
    int i,j;
    for(i=0; i<5; i++)
    {
        arr2[i]=arr[i];
        printf("%d\t",arr2[i]);
    }
    getch();
}
