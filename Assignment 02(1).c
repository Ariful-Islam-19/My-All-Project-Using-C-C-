#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number between 1 to 200:");
    scanf("%d",&n);
    printf("\n");
    if(n%2 !=0 && (n<200&&n>100))
        printf("CSE CU");
    else if(n%2==0 && (n<50&&n>1))
        printf("Bangladesh");
    else if(n%2 !=0 &&(n<75&&n>10))
        printf("Sakib Al Hasan");
    else
        printf("Invalid Input try again");
    getch();
}

