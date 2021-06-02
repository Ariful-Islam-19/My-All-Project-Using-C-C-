#include<stdio.h>
main()
{
    char st[30],st1[30];
    int j, i=0,sum=0;
    gets(st);
    strrev(st);
    j=strcmp(st,strrev(st));
    if(j==0){
    printf(" not palindrome");
    }


    getch();
}


