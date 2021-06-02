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
    for(j=1;j<=n;j++)
    {
        for(i=0;i<n-j;i++)
        {
            if(area[i]>area[i+1])
            {
                temp=area[i];
                area[i]=area[i+1];
                area[i+1]=temp;


                tem=a[i];
                a[i]=a[i+1];
                a[i+1]=tem;

                te=b[i];
                b[i]=b[i+1];
                b[i+1]=te;

                t=c[i];
                c[i]=c[i+1];
                c[i+1]=t;

            }
        }
    }
     for(i=0;i<n;i++)
     {
         max[i]=area[i];
     }
    for(i=0;i<n;i++)

    {
        if(area[i]==max[i])
        printf("\n%d\t%d\t%d\n",a[i],b[i],c[i]);
    }
    printf("\n");


    getch();

}
