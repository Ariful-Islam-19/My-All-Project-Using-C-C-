#include<stdio.h>
#include<conio.h>
main()
{
    while(1)
    {
        int n1,n2,n3,n4,i,m,n;
        int mul=1;
        printf("enter two number which LCD & GCD you see\n =");


        scanf("%d%d",&n1,&n2);
        if(n1<n2)
        {
            m=n1;
        }
        else
            m=n2;
        for(i=1; i<=m; i++)
        {
            if(n1/i && n2/i)
            {
                for(n=1;n<=i;n++)
               {

               n1=n1/n;
                n2=n2/n;
                mul = mul*i*n;}
            }
        }
        printf("%d is LCD ",mul);



        getch();
    }
}

