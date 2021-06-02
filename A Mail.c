#include<stdio.h>
#include<math.h>
int main()
{
	long long n,a[110000],i,j,k,p,x[110000],max[110000],min[110000],maxi[110000],count=0,sum=0,mul=0;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(a[i]>=0 && a[i+1]>=0)
		x[i]=abs(a[i]-a[i+1]);
		else if(a[i]<=0 && a[i+1]<=0)
		x[i]=abs(a[i]-a[i+1]);
		else
		x[i]=abs(a[i])+abs(a[i+1]);
		sum=sum+x[i];
		max[i+1]=sum;
	}
	for(i=1;i<n-1;i++)
	{
	  maxi[i]=abs(sum-max[i]);
	  	if(x[i-1]>x[i])
	  	min[i]=x[i];
	  	else
	  	min[i]=x[i-1];
	}
	min[0]=x[0];
	min[n-1]=x[n-2];
	max[0]=sum;
	max[n-1]=sum;
	maxi[0]=sum;
	maxi[n-1]=sum;
	for(i=0;i<n;i++)
	{
		printf("%lld ",min[i]);
		if(max[i]>=maxi[i])
		printf("%lld",max[i]);
		else
		printf("%lld",maxi[i]);
	printf("\n");
	}

return 0;
}

