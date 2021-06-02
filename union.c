#include<stdio.h>
#include<conio.h>
union test
{
     int x,y;



};
main()

{
    union test t1;
    scanf("%d",&t1.x);
  printf("%d\n",t1.x);
     printf("%d\n",t1.y);


    getch();

}


