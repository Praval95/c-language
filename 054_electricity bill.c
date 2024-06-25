#include <stdio.h>
int main() {
    int units;
    float bill;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units < 100) {
        bill = units * 100;
    } else if (units >= 100 && units <= 200) {
        bill = units * 1.50;
    } else if (units > 200 && units <= 300) {
        bill = units * 3.00;
    } else {
        bill = units * 5.00;
    }

    printf("Total bill amount: Rs. %.2f\n", bill);

    return 0;
}
