#include <stdio.h>
#include <stdlib.h>

struct expense
{
    char title[30];    // dmart pizza bday party  --- MMV
    int amount;        // 500 600 1500           50
    char date[25];     // 21-Nov-2026 21-11-2026 22/11/2026
    char category[30]; // fuel self care food
    char type[30];     // cash upi card
};

struct expense exp[100];

int main()
{
    int choice;
    int expCounter = 0;
    // 0 : false
    while (300)
    {

        printf("\n0 For Exit");
        printf("\n1 For Add Expense");
        printf("\n2 For List Expense");
        printf("Enter choice");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            printf("\nEnter Amount");
            scanf("%d", &exp[expCounter].amount);
            printf("\nEnter Title and Category");
            scanf("%s%s", exp[expCounter].title, exp[expCounter].category);
            printf("\nMode of Payment");
            scanf("%s", exp[expCounter].type);
            printf("\nDate : ");
            scanf("%s", exp[expCounter].date);
            expCounter++; 
            break;
        case 2:
            printf("\nTitle  Category   Amount  Type  Date ");
            for(int i=0;i<expCounter;i++){
                printf("\n%-10s %-10s %-5d %-10s %-10s",exp[i].title,exp[i].category,exp[i].amount,exp[i].type,exp[i].date);
            }
        case 3:
           // print category expenses 
            //enter category name 
            //food
            //list all food expenses 
            //25000/- 

            break;
        case 0:
            exit(0);
        default:
            printf("\nInvalid Choice PTA!!!");
            break;
        }
    }

    return 0;
}