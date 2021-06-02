#include<stdio.h>
#include<conio.h>
main()
{
    int arr[]= {1,10,3,2,14,16,0,1};
    int i,r,max,min;
    for(r=1; r<=8; r++)
    {
        for(i=0; i<8-r; i++)
        {

            if(arr[i]>arr[i+1])
            {
                max=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=max;
            }

        }


    }
    for(i=0;i<8;i++)
        printf("%d\t",arr[i]);


    getch();
}

