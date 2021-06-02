#include<stdio.h>
main()
{
    while(1){
    int a[100][100],b[100][100],c[100][100];
    int i,j,k;
    int sum=0;
    printf("matrix one value:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {

            scanf("%d",&a[i][j]);
        }
    }
     printf("\nmatrix two value:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {

            scanf("%d",&b[i][j]);
        }

    }
     printf("matrix one value:\n\n");
        for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("matrix two value:\n\n ");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {

        printf("%d\t",b[i][j]);

        }
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++){
            sum= sum + a[i][k] * b[k][j] ;
            c[i][j]=sum;

            }
            sum=0;
        }
    }
    printf("\n\nthe result of matrix addition:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           printf("%d\t",c[i][j]);
    }
    printf("\n");
    }

    getch();
}
}

