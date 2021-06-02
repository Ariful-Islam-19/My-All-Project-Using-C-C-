#include<stdio.h>
int nain()
{
    int mark;
    int grade;
    printf("enter the mark:");
    scanf("%d",&mark);
    grade=(mark>=80)?'A':(mark>=70)?'B':(mark>=60)?'C':(mark<60)?'F':'Invalid mark'|;
    printf("\n%c",grade);
    getch();
}
