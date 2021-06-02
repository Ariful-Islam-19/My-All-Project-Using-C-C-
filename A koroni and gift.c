#include<stdio.h>
int main()
{
    int tc,n[1000],x[200][1500],y[200][1500],i,j,k;
    scanf("%d",&tc);
    for(i=0; i<tc; i++)
    {
        scanf("%d",&n[i]);
        for(j=0; j<n[i]; j++)
        {
            scanf("%d",&x[i][j]);
        }
        for(k=0; k<n[i]; k++)
        {
            scanf("%d",&y[i][k]);
        }
    }
    for(k=0; k<tc; k++)
    {
        for(i=0; i<tc; i++)
        {
            for(j=0; j<n[i]-1; j++)
            {
                if(x[i][j]>x[i][j+1])
                {
                    int temp=x[i][j+1];
                    x[i][j+1]=x[i][j];
                    x[i][j]=temp;
                }
                if(y[i][j]>y[i][j+1])
                {
                    int temp=y[i][j+1];
                    y[i][j+1]=y[i][j];
                    y[i][j]=temp;
                }
            }
        }

    }
    for(i=0; i<tc; i++)
    {

        for(j=0; j<n[i]; j++)
        {
            printf("%d ",x[i][j]);
        }
        printf("\n");
        for(k=0; k<n[i]; k++)
        {
            printf("%d ",y[i][k]);
        }
        printf("\n");
    }

    return 0;
}
