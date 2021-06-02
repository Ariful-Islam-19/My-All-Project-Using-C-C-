#include<stdio.h>

void passing_array(int b[])
{
    int i;
    for(i=0;i<9;i++)printf("%d ",b[i]);
}
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    passing_array(a);


return 0;
}


