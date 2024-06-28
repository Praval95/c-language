#include<stdio.h>
int main()
{
    int day , month ,year;
    printf("Enter the day , month , year :");
    scanf("%d %d %d",&day,&month,&year);
    printf("Your given date is %d %d %d.",day,month ,year);
    printf("\n-----------------");
    printf("\nDate following '%d:%d:%d: is %d:%d:%d'.",day,month,year,day+1,month,year);
    printf("\n");

 return 0;
}
