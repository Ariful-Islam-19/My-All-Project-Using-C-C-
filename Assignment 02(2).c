#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    printf("enter a character like one(m,t,w,h,f,s,u):");
    scanf("%c",&a);
    printf("\n");
    switch(a)
    {
    case 'M':
        printf("Monday");
        break;
    case 'm':
        printf("Monday");
        break;
    case 'T':
        printf("Tuesday");
        break;
    case 't':
        printf("Tuesday");
        break;
    case 'W':
        printf("Wednesday");
        break;
    case 'w':
        printf("Wednesday");
        break;
    case 'H':
        printf("Thursday");
        break;
    case 'h':
        printf("Thursday");
        break;
    case 'F':
        printf("Friday");
        break;
    case 'f':
        printf("Friday");
        break;
    case 'S':
        printf("Saturday");
        break;
    case 's':
        printf("Saturday");
        break;
    default:
            printf("Worng input");
    }
    getch();
}
