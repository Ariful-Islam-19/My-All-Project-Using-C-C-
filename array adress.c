#include<stdio.h>
int i,s;
void fun()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    for(i=0;i<10;i++)
        {
            printf("%d is value arr[%d]\n",arr[i],i);
            printf("%p is address of arr[%d]\n ",&arr[i],i);

        }


}
main()
{

  fun();
  getch();
}
