#include <stdio.h>

struct product
{
    char name[30];
    char category[20];
    int price;
    int qty;
};

int main()
{

    struct product p[3];//p[0] p[1] p[2]
    int i; 


    for(i=0;i<3;i++){  
        printf("\nEnter Product Name");
        scanf("%s",&p[i].name); 
        printf("\nEnter Product Category");
        scanf("%s",&p[i].category);
        printf("\nEnter Product Price");
        scanf("%d",&p[i].price);
        printf("\nEnter Product Qty");
        scanf("%d",&p[i].qty); 
    }
    
    printf("\nProductName Category  Price  Qty");
    for(i=0;i<3;i++){
        printf("\n%-10s %-10s %-6d %-2d",p[i].name,p[i].category,p[i].price,p[i].qty);
    }
       
    return 0;
}