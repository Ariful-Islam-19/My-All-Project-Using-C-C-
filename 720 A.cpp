#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin >> n;
    if(n%2==0)
    {
         printf("%d\n",n/2);
    {
        for(i=1; i<=n/2; i++)
        {
            cout<<("2 ");
        }
    }
    }

    else
    {
        printf("%d\n",n/2);
        for(i=1; i<=n/2; i++)
        {
            if(i==n/2)
                cout<<"3";
            else
                cout<<"2 ";
        }
    }

    return 0;
}

