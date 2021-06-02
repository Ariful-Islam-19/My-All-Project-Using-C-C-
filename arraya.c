#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10},i,j,arr2[10],temp;
    for(i=0;i<=9;i++)
    {
        printf("%d",arr[i]);
         printf("\t");
    }
    for(i=0,j=9;i<10,j>=0;i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;

    }
    for(j=0;j<=9;j++)
    {
        printf("%d",arr[j]);
         printf("\t");
    }



    getch();
}

