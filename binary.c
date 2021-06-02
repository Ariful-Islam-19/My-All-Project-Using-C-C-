#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,m,count=0;
    double n,k,c[100];
    int a[100],b[100];

    printf("enter a number which binary number you print:");
    scanf("%lf",&n);
    m=n;
    printf("%lf binary number is\n\n\n",n);
    i=0;
    while(m != 0)
    {
        a[i]=m%2;
        b[i]=m/2;
        m=b[i];
        i++;
        count=count+1;
    }
    printf("count=%d\n",count);
  for(i=count;i>=0;i--)
  {
      printf("%d",a[i]);
  }



    getch();

}
