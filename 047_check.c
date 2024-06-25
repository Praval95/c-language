#include <stdio.h>

int main() {
    char input;
    printf("Enter any character: ");
    scanf("%c", &input);

    if(input >= 'A' && input <= 'Z') {
        printf("The entered character is an uppercase letter.\n");
    } else if(input >= 'a' && input <= 'z') {
        printf("The entered character is a lowercase letter.\n");
    } else if(input >= '0' && input <= '9') {
        printf("The entered character is a digit.\n");
    } else {
        printf("The entered character is a special character.\n");
    }

    return 0;
}

