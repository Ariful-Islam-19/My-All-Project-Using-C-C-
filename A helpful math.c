#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char a[1000],tem;
    int i,j,l;
    scanf("%s",&a);
    l=strlen(a);
    if(l==1)
        printf("%c",a[0]);
    else
    {
        for(i=0; i<l; i=i+2)
        {
            for(j=0; j<l-2; j=j+2)
            {
                if(a[j]<a[j+2])
                {
                    tem=a[j];
                    a[j]=a[j+2];
                    a[j+2]=tem;
                }

            }
        }
        for(i=l-1; i>=0; i--)
        {
            printf("%c",a[i]);
        }
    }

    return 0;

}
