#include<stdio.h>
main()
{
    int arr[]={1,2,3,4,5,12,7,8,9,10};
    int i,j;
    int num=;
    int sum=0,kum=0;
    for(i=0;i<10;i++)
    {
        if(arr[i]==num){


            printf("%d",arr[i]);
            printf("\n%d is index ",i+1);
            break;
        }
    }
    for(i=0;i<10;i++)
    {
        if(arr[i] != num )
        {
        sum = sum+i+1;}

    }
    for(i=0;i<10;i++)
    {
        kum=kum+i+1;
    }
    if(sum == kum)
        printf("\n%d is not in array ",num);




    getch();
}
