#include<stdio.h>
#include<conio.h>
int totalamount=0;
int diposite,transfer,widthrow,check;
int dipo=0,trans=0,width=0;
int over=0;
char name[20];
int account;
void address()
{
    printf("\n\t\tName:");
    fflush(stdin);
    gets(name);
    printf("\n\t\tAccount Number:");
    scanf("%d",&account);
}
int list()
{
    int ch;
    printf("\n\t\t1 Toatal Diposite Amount:\n");
    printf("\n\t\t2 Total Transfer Amount:\n");
    printf("\n\t\t3 Total Widthrow Amount:\n");
    printf("\n\t\t4 Check Balance:\n");
    printf("\n\t\t5 Exit:\n");
    printf("\nPlease Enter Your Choice:");
    scanf("%d",&ch);
    return(ch);
}
void menu()
{
    int ch=list();
    switch(ch)
    {

    case 1:
        printf("\nEnter Amount Which You Diposite:");
        scanf("%d",&diposite);
        totalamount=totalamount+diposite;
        dipo=dipo+diposite;
        break;
    case 2:
        printf("\nEnter Amount Which You Transfer: ");
        scanf("%d",&transfer);
        if(transfer>totalamount)
            printf("\nLess Amount Transfer Not Possible...!");
        else
        {
            totalamount=totalamount-transfer;
            trans=trans+transfer;
        }
        break;

    case 3:
        printf("\nEnter Amount Which You Widthrow: ");
        scanf("%d",&widthrow);
        if(widthrow>totalamount)
            printf("\nLess Amount Widthrow Is Not Possible...!");
        else
        {
            totalamount=totalamount-widthrow;
            width=width+widthrow;
        }
        break;
    case 4:
        printf("\n\n\t\t1 Total Amount:%d",totalamount);
        printf("\n\n\t\t2 Toatal Diposite Amount: %d",dipo);
        printf("\n\n\t\t3 Total Transfer Amount: %d",trans);
        printf("\n\n\t\t4 Total Widthrow Amount: %d",width);
        break;
    case 5:
        printf("\n\n\t\t Name:%s",name);
        printf("\n\n\t\t Account Number:%d",account);
        printf("\n\n\t\t1 Total Amount:%d",totalamount);
        printf("\n\n\t\t2 Toatal Diposite Amount: %d",dipo);
        printf("\n\n\t\t3 Total Transfer Amount: %d",trans);
        printf("\n\n\t\t4 Total Widthrow Amount: %d",width);
        over=1;
        break;
    default:
        printf("\n\t\t Invalid Input...!");
    }
}
main()
{
    address();
    while(! over)
    {
        system("cls");
        menu();
        getch();
    }
}
