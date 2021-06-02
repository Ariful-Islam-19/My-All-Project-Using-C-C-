
#include<stdio.h>
main()
{


    while(1)
    {
        int a[10][10],b[10][10],c[10][10];
        int i,j,k,n1,n2,n3,n4,m;
        int sum=0;
        printf("Enter First matrix Rows number :");
        scanf("%d",&n1);
        printf("Enter First matrix Colum number :");
        scanf("%d",&n2);



        printf("First matrix :\n");
        for(i=0; i<n1; i++)
        {
            for(j=0; j<n2; j++)
            {
                if(i==0)
                    printf("\nFirst rows value :\n");

                if(i==1)
                    printf("\nSecond rows value :\n");

                if(i==2)
                    printf("\nThird rows value :\n");
                if(i==4)
                    printf("\nFourth rows value :\n");

                scanf("%d",&a[i][j]);

            }
        }
        printf("First matrix :\n");
            for(i=0; i<n1; i++)
            {
                for(j=0; j<n2; j++)
                {
                    printf("%d\t",a[i][j]);
                }
                printf("\n");
            }
        printf("\t\t\t\t\nThe transpose matrix value is :\n\n");
        for(i=0; i<n2; i++)
        {
            for(j=0; j<n1; j++)
            {

                printf("%d\t",a[j][i]);


            }
            printf("\n");
        }
        getch();

    }
}

