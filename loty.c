#include<stdio.h>
#include<conio.h>
main()
{
    double p;
    printf("Enter two number which GCD & LCD you see  =");
    scanf("%lf",&p);
    long long a,b,n,n1,n2,m,l;
    long long i,j,k;
    long long remind;
    n1=p*pow(10,15);
    n2=pow(10,15);
    a=n1;
    b=n2;
    while(remind!=0)
    {remind=a%b;
    a=b;
    b=remind;
    }

   // printf("%lld is GCD\n ",a);
    //printf("%lld is LCD \n",n1*n2/a);
    m=n1/a;
    l=n2/a;
    if(a==1)
        printf("%.15lf",p);
    else
    printf("\n\nthis float number:%lld/%lld",m,l);
    getch();




}

