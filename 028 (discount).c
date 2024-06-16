#include <stdio.h>
int main() {
	int final_amt;
	int discount;

	printf("Enter bill amount:");
	scanf("%d", &final_amt);
    printf("Enter discount percentage:");
	scanf("%d", &discount);

	int afterDiscount = bill - (bill * discount / 100);

	if (final_amt >= 25000)

	printf("After discount your bill is: %d", afterDiscount);
}

