#include<stdio.h>
int main()
{
    int n,i,count=0,k;
    scanf("%d",&n);
   for(i=2;i<n;i++)
    {
        k=n%i;
        if(k==0){
        count=count+1;}
    }
    if(count==0)
    {
        printf("\n%d is prime number.",n);
    }
    else
         printf("\n%d is not prime number.",n);
    getch();
}
