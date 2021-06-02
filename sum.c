#include<stdio.h>
#include<conio.h>
int main()
{
    int n,k,l,i,j,m[100],count=0;
    scanf("%d",&n);
    k=n;
    i=0;
    while(k!=0)
    {
        m[i]=k%10;
        l=k/10;
        k=l;
        i++;
    }
    for(j=0,k=i-1;j<i,k>=0;j++,k--)
    {
         printf("%d",m[j]);
         if(m[k]==m[j])
         {
             count=count+1;
         }

    }
        printf("\n");
    if(count==i)
    printf("%d is palindrome number",n);
    else
        printf("%d is not palindrome number",n);


    getch();
}
