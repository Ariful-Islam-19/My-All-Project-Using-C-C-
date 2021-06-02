#include<stdio.h>
#include<math.h>
int main()
{
    double x1,x2,x3,x4,y1,y2,y3,y4,a,k,p1,p2,p3,p4,q1,q2,q3,q4,m1,m2,m3,m4,n1,n2,n3,n4,i1,i2,i3,i4,j1,j2,j3,j4;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    a=sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    k=a/sqrt(2);
    p1=x1;
    q1=y1;
    p2=x1+a;
    q2=y1;
    p3=x1+a;
    q3=y1+a;
    p4=x1;
    q4=y1+a;
   printf("%.lf %.lf %.lf %.lf %.lf %.lf %.lf %.lf",p1,q1,p2,q2,p3,q3,p4,q4);
    //
    m1=x1;
    n1=y1;
    m2=x1+k;
    n2=y1;
    m3=x1+k;
    n3=y1+k;
    m4=x1;
    n4=y1+k;
    //printf("%.lf %.lf %.lf %.lf %.lf %.lf %.lf %.lf",m1,n1,m2,n2,m3,n3,m4,n4);
    i1=x2;
    j1=y2;
    i2=x2-k;
    j2=y2;
    i3=x2;
    j3=y2+k;
    i4=x2-k;
    j4=y2+k;
    //printf("%.lf %.lf %.lf %.lf %.lf %.lf %.lf %.lf ",i1,j1,i2,j2,i3,j3,i4,j4);
    if((p2==x2 && q2==y2) || (p3==x2 && q3==y2) || (p4==x2 && q4==y2))
    {
        if(p2==x2 && q2==y2)
        {
            x3=p3;
            y3=q3;
            x4=p4;
            y4=q4;
        }
        else if(p3==x2 && q3==y2)
        {
            x3=p2;
            y3=q2;
            x4=p4;
            y4=q4;
        }
        else
        {
            x3=p3;
            y3=q3;
            x4=p2;
            y4=q2;
        }

        printf("%.lf %.lf %.lf %.lf",x3,y3,x4,y4);
    }
    else if((x2==m2 && y2==n2) || (x2==m3 && y2==n3) || (x2==m4 && y2==n4))
    {
        if(x2==m2 && y2==n2)
        {
            x3=m3 ;
            y3=n3;
            x4=m4 ;
            y4=n4;
        }
        else if(x2==m3 && y2==n3)
        {
            x3=m2 ;
            y3=n2;
            x4=m4 ;
            y4=n4;
        }
        else
        {
            x3=m3 ;
            y3=n3;
            x4=m2 ;
            y4=n2;
        }

        printf("%.lf %.lf %.lf %.lf",x3,y3,x4,y4);
    }
    else if((i2==x1 && j2==y1) || (i3==x1 && j3==y1) || (i4==x1 && j4==y1))
    {
        if(x2==i2 && y2==j2)
        {
            x3=i3 ;
            y3=j3;
            x4=i4 ;
            y4=j4;
        }
        else if(x2==i3 && y2==j3)
        {
            x3=i2 ;
            y3=j2;
            x4=i4 ;
            y4=j4;
        }
        else
        {
            x3=i3 ;
            y3=j3;
            x4=i2 ;
            y4=j2;
        }
        printf("%.lf %.lf %.lf %.lf",x3,y3,x4,y4);

    }
    else
        printf("-1");

return 0;
}
