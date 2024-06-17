#include<stdio.h>
int main()
{
    int year;
    printf("Enter the you were born :");
    scanf("%d",&year);

    if(year %4 == 0)
        printf("\nyou are born in leap year\n");
    else
        printf("\nyou are not born in leap year\n");
getch();
return 0;
}
