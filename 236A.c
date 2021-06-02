#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[1000],temp;
    int l,i,j,r,count=0;
    scanf("%s",&a);
    l=strlen(a);
    for(j=0; j<l; j++)
    {
        for(i=0; i<l-1; i++)
        {
            if(a[i+1]>a[i])
            {
                temp=a[i+1];
                a[i+1]=a[i];
                a[i]=temp;
            }
        }
    }
    for(j=0; j<l; j++)
    {
        if(a[j]==a[j+1])
            count++;
    }
    r=l-count;
    if(r%2==0)
        printf("CHAT WITH HER!");
        else
            printf("IGNORE HIM!");

            return 0;

}

