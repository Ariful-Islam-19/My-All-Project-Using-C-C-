#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<7;j++)
        {
            if((i==1&&j==1)||(i==1&&j==2)||(i==1&&j==3)||(i==1&&j==4)||(i==1&&j==5)||(i==1&&j==6)||(i==3&&j==1)||(i==3&&j==2)||(i==3&&j==3)||(i==3&&j==4)||(i==3&&j==5)){
         printf("#");}
         else if((i==2&&j==2)||(i==4&&j==1)||(i==5&&j==1)||(i==6&&j==1))
             printf("#");
         else
            printf("");
        }
        printf("\n");
    }
    getch();

}
