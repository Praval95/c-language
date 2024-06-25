#include <stdio.h>
int main()
{
    char ch;
    printf("Enter your alphabet :");
    scanf("%c",&ch);

    if (isalpha(ch))
    if (ch == 'a' ||  ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("The character %c is a vowel.\n", ch);
    else
        printf("The character %c is a consonant.\n", ch);
    else
        printf("invalide input.\n");
    return 0;
}
