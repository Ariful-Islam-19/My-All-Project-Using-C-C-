
#include<stdio.h>
#include<conio.h>
struct person
{
    int age;
    float salary;
    char name[100];

};



int main()
{
    struct person person[20];
    int i;
    for(i=0;i<=2;i++)
    {
        scanf("%d",&person[i].age);
        scanf("%f",&person[i].salary);
        fflush(stdin);
        gets(person[i].name);

    }
    for(i=0;i<=2;i++)
    {
        printf("%d\n",person[i].age);
        printf("%f\n",person[i].salary);
         printf("%s\n",person[i].name);

    }
    printf("\n");

      getch();
}
