#include<stdio.h>
int main()
{
    int n,a,b,c,d,e,t1,t2,t3,t4;
    scanf("%d",&n);
    a=n/100;
    t1=n%100;
    b=t1/20;
    t2=t1%20;
    c=t2/10;
    t3=t2%10;
    d=t3/5;
    t4=t3%5;
    e=t4;
    printf("%d",a+b+c+d+e);

return 0;
}
