#include<stdio.h>
int main()
{
    int i,j,m[10][10],count=0,k;
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&m[i][j]);

        }
    }
    for(k=0; k<3; k++)
    {
        for(i=0; i<2; i++)
        {
            for(j=0; j<2; j++)
            {
                if(m[i][j+1]<m[i][j])
                {
                    int temp=m[i][j+1];
                    m[i][j+1]=m[i][j];
                    m[i][j]=temp;
                }
            }
        }
    }
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
