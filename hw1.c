#include<stdio.h>
int main()
{
    int mark,a;
    scanf("%d",&mark);
    a=mark;
    if(a<=100 && a>=80)
        printf("A");
    else if(a<=79 && a>=70)
        printf("B");
    else if(a<=69 && a>=60)
        printf("C");
    else if(a<=59 && a>=0)
        printf("F");
    else
        printf("Invalid Input");
    getch();

}
