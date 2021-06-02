#include<stdio.h>
#include<conio.h>
struct cube
{
    int i;
    int j;
    int k;
};
main()
{
  struct cube cube1,*p;
  scanf("%d",&cube1.i);
  fflush(stdin);
  scanf("%d",&cube1.j);
  p=&cube1;

  printf("%d  %d   ",p->i,p->j);
  getch();
}
