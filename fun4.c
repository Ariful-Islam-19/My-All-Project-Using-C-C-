#include<stdio.h>
#include<conio.h>
int m=1;
int fun(int x)
{
  while(x != 0){
  m=m*x;
    }
 printf("%d",m);
  return(fun (x=x-1));
}
main()
{
    int m,n,a,b;
    printf("enter a number:");
    scanf("%d",&n);
    fun(n);
    //printf("\n%d   %d",a,b);
    getch();
}
