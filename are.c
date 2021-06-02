#include<stdio.h>
#include<conio.h>
main()
{
    int arr[]= {1,10,3};
    int i,r,max,min;
    for(r=1;r<=3;r++)
    {
        for(i=0;i<3-r;i++){

            if(arr[i]>arr[i+1]){
            max=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=max;
            }

        }
         printf("%d\t",arr[i]);


    }


getch();
}
