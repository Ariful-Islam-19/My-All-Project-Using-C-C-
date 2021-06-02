#include<stdio.h>
#include<conio.h>
main()

{
    int i,j,k,a;
    printf("a numbeer which multiple you see  =");
    scanf("%d",&a);
    for(i=1;i<=10;i++){
        printf("\n%d X %d = %d\n",a,i,i*a);

    }
    getch();
}
