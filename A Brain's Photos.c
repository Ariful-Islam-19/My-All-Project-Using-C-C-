#include<stdio.h>
#include<ctype.h>
int main()
{
    int n,k,i,j,count=0,sum=0;
    scanf("%d %d",&n,&k);
    char a[100][100];
    for(i=0; i<n; i++)
    {
        for(j=0; j<k; j++)
        {
            scanf("%s",&a[i][j]);
            if(a[i][j]=='B'||a[i][j]=='W'||a[i][j]=='G')
                count++;
            else
                sum++;

        }
    }
    if(count>0 && sum==0)
        printf("#Black&White");
    else
        printf("#Color");
    return 0;
}
