#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,i,j,k,count=0;
    char a[10000][10];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(k=0; k<4; k++)
        {
            if((a[i][k]== 'O' )&& (a[i][k+1]=='O'))
            {
                a[i][k]='+';
                a[i][k+1]='+';
                count++;
                i=n;
                break;
            }
        }
    }
    if(count==1)
    {
        printf("YES\n");
        for(i=0; i<n; i++)
        {

            printf("%s",a[i]);
            printf("\n");
        }
    }

    else
        printf("NO");

    return 0;
}
