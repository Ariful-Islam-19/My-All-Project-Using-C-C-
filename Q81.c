#include<stdio.h>
#include<conio.h>
main()
{
    int feet=41,i,n;
    int volume;
    printf("Enter number of boxes: ");
    scanf("%d",&n);
    int box[n],l[n],w[n],h[n];
    fflush(stdin);
    for(i=0;i<n;i++)
    {
      printf("\n%d. box length,width,height.",i+1);
      scanf("%d %d %d",&l[i],&w[i],&h[i]);
    }
        for(i=0;i<n;i++)
    {
         if(h[i]<feet)

        box[i]=h[i]*l[i]*w[i];
    }
     for(i=0;i<n;i++)
     {
         if(h[i]<feet)
         printf("\n%d th boxes volume: %d",i+1,box[i]);
     }
     getch();



}
