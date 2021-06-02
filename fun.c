#include<stdio.h>
void fun(int x[])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d\t",x[i]);
    }

}
main()

{
    int a[]={12,134,25,23,54};
    fun(a);
    getch();
}
