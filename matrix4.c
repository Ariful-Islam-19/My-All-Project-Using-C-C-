#include<stdio.h>
#include<conio.h>
main()
{
    while(1){
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
    if(n2 != n3)
    {
        printf("\nthis matrix multification not possible.....! You can multiplied,\nIf you enter first matrix colum number equal second matrix row.Thanks ");
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
            for(j=0; j<n4; j++)
            {
                for(k=0;k<n2;k++)
                {
                    sum=sum + a[i][k] * b[k][j];
                    c[i][j]= sum;
                }
                sum=0;

            }


        }
        printf("THE RESULT OF MATRIX MULTIPLICATION :\n\n");
         for(i=0; i<n1; i++)
        {
            for(j=0; j<n4; j++)
            {


                printf("%d\t",c[i][j]);

            }
            printf("\n");
        }
    }
    getch();
    }
}
