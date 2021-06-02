#include<stdio.h>
void setup()
{
    int i=0,j=0;
    printf("\t\t|----|----|----|\n\n");
     printf("\t\t|----|----|----|\n\n");
      printf("\t\t|----|----|----|\n\n");
       printf("\t\t|----|----|----|");
    char ch[3][3]={ {'1','2','3'},
                    {'4','5','6'},
                    {'7','8','9'}
                  };
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t\t%c",ch[i][j]);
        }
        printf("\n\n\n");
    }


}
void drow()
{
    int i,j;

}
int main()
{

    drow();
    setup();

    getch();

}
