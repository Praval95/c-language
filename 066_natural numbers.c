#include <stdio.h>

int main() {
    int N;
    printf("Enter a positive integer (N): ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("The first %d natural numbers are:\n", N);
    for (int i = 1; i <= N; ++i) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

