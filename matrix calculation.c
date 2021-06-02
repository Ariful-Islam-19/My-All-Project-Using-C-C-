#include<stdio.h>
#include<conio.h>
main()
{

    char d;
    int a[100][100],b[100][100],c[100][100];
    int i,j,k,n1,n2,n3,n4,m;
    int sum=0;
    printf("if you want to matrix ADDITION you press (+) :\n\n");
    printf("if you want to matrix SUBSTRACTION you press (-) :\n\n");
    printf("if you want to matrix MULTIFICATION you press (*) :\n\n");
    printf("if you want to find a matrix trace matrix you press (#) :\n\n");
    printf("if you want to find a matrix upper triangle addition you press (a) :\n\n");
    printf("if you want to find a matrix lower triangle addition you press (!) :\n\n");
    printf("if you want to find a matrix transpose matrix you press (b) :\n\n");
    printf("YOUR ANSWER   :");
    scanf(" %c",&d);
    switch(d)
    {


    case '+':
        while(1)
        {
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
                printf("\nthis matrix Addition not possible.....! You can Addition,\nIf you enter first matrix colum number equal second matrix colum\nqand first matrix rows number equal second matrix rows.Thanks ");
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
                printf("Second matrix  :\n");
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
                        c[i][j]=a[i][j] + b[i][j];
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
        }
        break;
    case '-':
        while(1)
        {
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
                printf("Second matrix  :\n");
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
        }
        break;
    case '*':
        while(1)
        {
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
                        for(k=0; k<n2; k++)
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
        }

    case '#':
        while(1){

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

                    if(i==j)
                    {
                        sum=sum+a[i][j];
                    }


                }

            }
            printf("\n\n\n\n\n\t\t\tThe Trace of this matrix is  '%d'\n",sum);

        }
        }
    case 'a':
        while(1){

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
        }
    case '!':
        while(1){

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

                    if(i>j)
                    {
                        sum=sum+a[i][j];
                    }


                }

            }
            printf("\n\n\n\n\n\tThe lower triangle values addition of this matrix is  '%d'\n",sum);

        }
        }
    case 'b':
        while(1)
        {
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
        }
        default:
        printf("\nYOUR PRESS KEY IS NOT TRUE.......SO,read this command and try again.....\n\t\tThank you.");
        break;
    }
    getch();

}




