#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i,b,c;
    int n[5];
    scanf("%d %d %d",&a,&b,&c);
    n[0]=a+b*c;
    n[1]=a*(b+c);
    n[2]=a*b*c;
    n[3]=(a+b)*c;
    n[4]=a+b+c;
    int max=n[0];
    for(i=1;i<=4;i++)
    {
        if(n[i]>max)
        max=n[i];
    }
    printf("%d",max);
    return 0;
}
