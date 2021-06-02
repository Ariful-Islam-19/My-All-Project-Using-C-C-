#include<stdio.h>
main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j,k,n1,n2,n3,n4,m;
    int sum=0;
    printf("Enter First matrix Rows number :");
    scanf("%d",&n1);
    printf("Enter First matrix Colum number :");
    scanf("%d",&n2);
    printf("Enter Second matrix Rows number :");
    scanf("%d",&n3);
    printf("Enter Second matrix Colum number :");
    scanf("%d",&n4);
    if(n1 !=n3 && n2 !=n4)
    {
        printf("\nthis matrix Substraction not possible.....! You can substraction,\nIf you enter first matrix colum number equal second matrix colum\nqand first matrix rows number equal second matrix rows.Thanks ");
    }
    else
    {


        printf("First matrix value :\n");
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
        printf("Second matrix value :\n");
        for(i=0; i<n3; i++)
        {
            for(j=0; j<n4; j++)
            {
                if(i==0)
                    printf("\nFirst rows value :\n");

                if(i==1)
                    printf("\nSecond rows value :\n");

                if(i==2)
                    printf("\nThird rows value :\n");
                if(i==4)
                    printf("\nFourth rows value :\n");
                scanf("%d",&b[i][j]);

            }
        }
        printf("\t\t\t\t\nFirst matrix value :\n\n");
        for(i=0; i<n1; i++)
        {
            for(j=0; j<n2; j++)
            {

                printf("%d\t",a[i][j]);


            }
            printf("\n");
        }
        printf("\t\t\t\t\nSecond matrix value :\n\n");
        for(i=0; i<n3; i++)
        {
            for(j=0; j<n4; j++)
            {


                printf("%d\t",b[i][j]);

            }
            printf("\n");
        }



        for(i=0; i<n1; i++)
        {
            for(j=0; j<n2; j++)
            {
                c[i][j]=a[i][j] - b[i][j];
            }
        }
        printf("\n\nthe result of matrix substraction:\n");
        for(i=0; i<n1; i++)
        {
            for(j=0; j<n2; j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }

    getch();
}
