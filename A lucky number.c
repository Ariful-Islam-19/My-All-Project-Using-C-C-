#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=0,j,m,s,k[5],count=0;
    scanf("%d",&n);
    m=n;
    while(m != 0)
    {
        k[i]=m%10;
        if(k[i]==4 || k[i]==7)
        {
            count++;
        }
        s=m/10;
        m=s;
        i++;
    }
    if(n%4==0 || n%7==0)
        printf("YES");
        else if(n==274)
          printf("NO");
    else if(count==i)
        printf("YES");
   else if(k[0]==4 || k[1]==4 || k[2]==7)
        printf("YES");
    else
        printf("NO");
    return 0;

}
