#include <stdio.h>

int main() {
    float sales, discountRate, discountAmount, actualAmount;
    printf("Enter the sales amount: ");
    scanf("%f", &sales);

    if (sales >= 25000) {
        discountRate = 25.0;
    } else if (sales >= 20000) {
        discountRate = 20.0;
    } else if (sales >= 10000) {
        discountRate = 10.0;
    } else if (sales >= 5000) {
        discountRate = 5.0;
    } else {
        discountRate = 0.0;
    }
    discountAmount = (discountRate / 100) * sales;
    actualAmount = sales - discountAmount;

    printf("Discount: %.2f%%\n", discountRate);
    printf("Discount Amount: %.2f\n", discountAmount);
    printf("Actual Amount: %.2f\n", actualAmount);
    printf("Thank you for shoping,");
    printf("PLEASE visit us again\n");
   getch();
    return 0;
}

