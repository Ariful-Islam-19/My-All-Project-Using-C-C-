#include<stdio.h>
#include<conio.h>
main()
{
    int n=23;
    int k;
    int i,j,count=0;

    for(i=4; i<=n; i++)
    {
        for(j=2; j<n; j++)
        {

            if(i%j==0)
                count=count+1;
        }
        if(count==0)
        {
            printf("\n prime number:%d",i);
        }
        count=0;


    }
    getch();


}
