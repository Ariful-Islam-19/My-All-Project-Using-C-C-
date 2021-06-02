#include<stdio.h>
int main()
{
    int n,a[4],count=0,i,j,k;
    scanf("%d %d %d %d",&n,&a[0],&a[1],&a[2]);
    for(i=0; i<3; i++)
    {
        for(j=0; j<2; j++)
        {
            if(a[j+1]<a[j])
            {
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    k=n%a[0];
    if(k==0)
        printf("%d",n/a[0]);
    else
    {
        for(i=0; i<=n; i=i+a[0])
        {
            if(k+i==a[1] || k+i==a[2])
                break;
            else
                count++;
        }
         printf("%d ",n/a[0]-count+1);
    }
    return 0;

}
