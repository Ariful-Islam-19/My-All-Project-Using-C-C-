#include<stdio.h>
int main()
{
    int i,t,j=0,k=0,m[100],e[100],o[100],even=0,odd=0;
    printf("Enter test:");
    scanf("%d",&t);
    for(i=0; i<t;i++)
    {
        scanf("%d",&m[i]);
    }
    for(i=0; i<t;i++)
    {
        if(m[i]%2==0)
        {
            e[j]=m[i];
            even=even+m[i];
            j++;
        }

        else
        {
            o[k]=m[i];
            odd=odd+m[i];
                 k++;
        }

    }
    printf("Even elements:");
    for(i=0; i<j;i++)
    {
        printf("%d ",e[i]);
    }
    printf("\nOdd elements:");
    for(i=0; i<k;i++)
    {
        printf("%d ",o[i]);
    }
   if(even>odd)
    printf("\nMax=%d",even);
   else
       printf("\nMax=%d",odd);
   return 0;


}
