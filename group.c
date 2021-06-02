#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,x3,y3,u,v,s1,s2;
    double omor,dock;
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&u,&v);
    s1=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
    s2=sqrt(((x2-x3)*(x2-x3))+((y2-y3)*(y2-y3)));
    omor=s1/v;
    dock=s2/u;
    printf("%lf %lf",omor,dock);
    if(omor>dock)
        printf("Dauntless rockz!");
    else
        printf("Poor dauntless :(");
    return 0;
}
