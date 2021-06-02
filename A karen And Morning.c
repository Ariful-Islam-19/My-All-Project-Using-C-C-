#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char r;
    int i,j=0,t[100],p,m,a,b,n[]={0,70,140,210,280,350,601,671,741,811,881,951,1202,1272,1342,1412,1440};
    scanf("%d%c%d",&a,&r,&b);
    m=a*60+b;
    for(i=0;i<17;i++)
    {
        p=n[i]-m;
        if(p>=0)
        break;
    }
  printf("%d",p);
return 0;

}
