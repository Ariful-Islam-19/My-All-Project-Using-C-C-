#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int l,i,j=0,h=0,e=0,o=0,k=0,ll,count=0,no=0;
    char a[200],b[200];
    scanf("%s",&a);
    l=strlen(a);
    for(i=0; i<l; i++)
    {
        if(a[i]=='h' || a[i]=='e'|| a[i]=='l' || a[i]=='o')
        {
            b[j]=a[i];
            j++;
        }
    }
    for(i=0; i<j; i++)
    {
        if(b[i]=='h')
        {
            h=i+1;
            break;
        }
    }
    for(i=0; i<j; i++)
    {
        if(b[i]=='o')
            o=i+1;
        else
            k++;
    }
    for(i=j-1;i>=h;i--)
    {
        if(b[i]=='l')
            no++;
        if(no==2)
        {
          ll=i+1;
          break;
        }
    }
    for(i=h; i<ll; i++)
    {
        if(b[i]=='e')
        {
            e=i+1;
            break;
        }
    }
    for(i=e; i<o; i++)
    {
        if(b[i]=='l')
            count++;
    }
    if(o>e && e>h && count>=2)
        printf("YES");
    else
        printf("NO");


    return 0;

}
