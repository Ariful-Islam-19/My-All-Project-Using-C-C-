#include<stdio.h>
main()
{


    while(1)
    {
        int a[10][10];
        int i,j,k,n1,n2,n3,n4,m;
        int sum=0;
        printf("Enter First matrix Rows number :");
        scanf("%d",&n1);
        printf("Enter First matrix Colum number :");
        scanf("%d",&n2);
        if(n1 !=n2 )
        {

            printf("\nthis matrix is not square matix..so it's not possible.\nif you want you should use rows number equal colum number.\nTry again ...THANKS. ");
        }
        else
        {


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
                    if(i==3)
                        printf("\nFourth rows value :\n");
                    if(i==4)
                        printf("\nFiveth rows value :\n");
                    if(i==5)
                        printf("\nSixth rows value :\n");
                    if(i==6)
                        printf("\nseventh rows value :\n");
                    if(i==7)
                        printf("\neightth rows value :\n");
                    if(i==8)
                        printf("\nnineth rows value :\n");
                    if(i==9)
                        printf("\ntenth rows value :\n");
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

            for(i=0; i<n1; i++)
            {
                for(j=0; j<n2; j++)
                {

                    if(i<j)
                    {
                        sum=sum+a[i][j];
                    }


                }

            }
            printf("\n\n\n\n\n\t\t\tThe upper triangle values addition of this matrix is  '%d'\n",sum);

        }
        getch();
    }
    printf("\n");
}

