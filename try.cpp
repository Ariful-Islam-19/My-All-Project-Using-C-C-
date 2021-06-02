#include<stdio.h>
#include<iostream>
#include<dos.h>
using namespace std;
int main()

{
   int a;

   for (a = 200; a <= 1000; a = a + 20)
   {
      printf("%d ",a);
      delay(1000);
   }

   nosound();

   return 0;
}


