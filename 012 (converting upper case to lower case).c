#include <stdio.h>

int main ()
{
    char upper_case , lower_case;
    int ascii;
    printf("Enter The Upper case character :");
    scanf("%c",&upper_case);

         ascii = upper_case;
         lower_case = ascii + 32;

printf ("Its LOWER CASE IS :%c ",lower_case);
  printf("\n");
return 0;
}
