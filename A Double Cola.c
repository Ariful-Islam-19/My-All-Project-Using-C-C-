#include<stdio.h>
#include<math.h>
int main()
{
    double n;
    double k,l,t;
    scanf("%lf",&n);
    t=(n/5)+1;
    k=(log10(t))/0.301029995;
    int p,s,sn,m;
    p=k;
    sn=5*(pow(2,p)-1);
    s=(5*(pow(2,p-1))*2)/5;
    m=n-sn;
    float result=(float)m/s;
    if(result>0 && result<=1)
        printf("Sheldon");
    else if(result>1 && result<=2)
        printf("Leonard");
    else if(result>2 && result<=3)
        printf("Penny");
    else if(result>3 && result<=4)
        printf("Rajesh");
    else if(result>4 && result<=5)
        printf("Howard");
    else
        printf("Howard");
    return 0;
}
