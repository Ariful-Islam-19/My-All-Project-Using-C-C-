#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int n,i,j,temp,tem,te,t;
    printf("Enter Number of Triangle:");
    scanf("%d",&n);
    int a[n],b[n],c[n];
    double area[n],s[n],max[n];
    for(i=0; i<n; i++)
    {
        fflush(stdin);
        printf("\n%d. Enter Triangle 1st arm,2nd arm,3rd arm: ",i+1);
        scanf("%d %d %d",&a[i],&b[i],&c[i]);
    }
    for(i=0; i<n; i++)
    {
        s[i]=(a[i]+b[i]+c[i])/(float)2;
        area[i]=sqrt((s[i]*(s[i]-a[i])*(s[i]-b[i])*(s[i]-c[i])));

    }
     for(i=0; i<n; i++)
     {
         printf("%lf\n",area[i]);
     }

     getch();
}


