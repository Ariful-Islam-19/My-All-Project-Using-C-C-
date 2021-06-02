#include<stdio.h>
int main()
{
    long long a,b,c,i,j,m[100],sum;
    scanf("%lld %lld %lld %lld",&m[0],&m[1],&m[2],&m[3]);
          for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
        {
            if(m[j+1]>m[j])
            {
                int temp=m[j+1];
                m[j+1]=m[j];
                m[j]=temp;
            }
        }
    }
    sum=(m[0]+m[1]+m[2]+m[3])/3;
        a=sum-m[1];
        b=sum-m[2];
        c=sum-m[3];
        printf("%lld %lld %lld",a,b,c);
        return 0;
}

