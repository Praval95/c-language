#include<stdio.h>
int main()
{
      int numb;
    printf("Enter a number :");
    scanf("%d",&numb);

    if (numb % 3 == 0 && numb % 5 == 0)
        printf("\n%d is divisible by both three and five.\n");
    else
        printf("\n%d is 'not' divisible by three and five.\n");
    getch();
  return 0;
}
