#include<stdio.h>
#include<conio.h>
main()
{
    char c, a[100];
    printf("A line :");
    gets(a);
    int i=0;
    int word=1,vowel=0,consonant=0,other=0,num=0;
    while ((c=a[i]) != '\0')
    {
        if(  c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u'|| c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U')
        vowel++;
       else if((c>='a' && c<='z' ) || (c>='A' && c<='Z' ))
       consonant++;
       else if(c>='0' && c<='9')
        num++;
       else if(c== ' ')
        word++;
        else
        other++;



        i++;
    }
    printf("total vowel: %d \n",vowel);
     printf("total consonant: %d \n",consonant);
      printf("total number: %d \n",num);
       printf("total word: %d \n",word);
        printf("total others: %d \n",other);
    getch();

}

