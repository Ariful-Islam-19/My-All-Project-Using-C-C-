#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    //if(a=='a'||a=='a'||a=='b'||a=='c'||a=='d'||a=='e'||a=='f'||a=='g'||a=='h'||a=='i'||a=='j'||a=='k'||a=='l'||a=='m'||a=='n'||a=='o'||a=='p'||a=='q'||a=='r'||a=='s'||a=='t'||a=='u'||a=='v'||a=='w'||a=='x'||a=='y'||a=='z')
   if(a==tolower(a))
    printf("\n\n\n%c",toupper(a));
    else{
    printf("\n\n\n");
    printf("%c",tolower(a));}
    return 0;

}
