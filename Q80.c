#include<stdio.h>
#include<conio.h>
main()
{
    int n,i,j,sum=0,count=0;
    char ch;
    printf("Enter the number of student:");
    scanf("%d",&n);
    int mark[n];
    fflush(stdin);
    for(j=0;j<n;j++)
    {
        i=j;
        i=i+1;
        if(i%2==1)
        printf("\n%d. Boys Student mark:",i);
        if(i%2==0)
         printf("\n%d. Girls Student mark:",i);
        scanf("%d",&mark[j]);

    }
    fflush(stdin);
    printf("\nIf Boys you enter=b\n\nIf Girls you enter=g\n");
    printf("\nEnter Gender:");
    scanf("%c",&ch);
    for(j=0;j<n;j++)
    {
        i=j;
        i=i+1;
        if(i%2==1)
            sum=sum+mark[j];
         if(i%2==0)
            count=count+mark[j];
    }
    if(ch=='b')
        printf("\nTotal marks of boys: %d",sum);
    if(ch=='g')
         printf("\nTotal marks of girls: %d",count);

    getch();
}
