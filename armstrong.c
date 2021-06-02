#include<stdio.h>
#include<conio.h>
main()
{
    int a,r,n1;
    int i;
    int sum=0;
    int remind;
    //printf("Enter a number .... which armstrong number you find  =");
    for(a=100;a<200;a++){

       // scanf("%d",&a);
        n1=a;
        while(n1 != 0)
        {
            r= n1/10;
            remind=n1%10;
            n1=r;
            sum=sum+remind*remind*remind;

        }


       // if(i != sum)
            //continue;

      //  if(sum==a)
          //  printf("\n%d is ARMSTRONG number\n",sum);


       else{
    printf("\n%d is NOT ARMSTRONG number\n",a);
    }


    //printf("\n");
    sum=0;


    getch();
}

