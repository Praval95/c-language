#include<stdio.h>
int main(){
    int ord , qua , tot;
    ord = qua = tot = 0;

    printf("Welcome to VEG KHANA restaurant.");
    printf("\n----------------------------");
    printf("\n1. iddli     Rs: 25");
    printf("\n2. Dosa      Rs: 50");
    printf("\n3. Vada      Rs: 20");
    printf("\n4. Upma      Rs: 25");
    printf("\n5. Exit");

    printf("\n-----------------------");

    printf("\nWhich ITem would you like to place an order choose(1-4) and (5) for exit :");
    scanf("%d",&ord);

    switch(ord)
    {
    case 1 :
        printf("How many plater would you like to order :");
        scanf("%d",&qua);
        tot = qua*25;
        break;
    case 2 :
         printf("How many plater would you like to order :");
         scanf("%d",&qua);
         tot = qua*50;
        break;
    case 3 :
         printf("How many plater would you like to order :");
         scanf("%d",&qua);
         tot = qua*20;
        break;
    case 4 :
         printf("How many plater would you like to order :");
         scanf("%d",&qua);
         tot = qua*25;
        break;
    default:
        printf("Invalid choice. Please select a valid item or enter 5 to exit.\n");
    }
    if(ord<=4)
        printf("total bill amount is '%d rupees'.",tot);

printf("\n");
return 0;
}
