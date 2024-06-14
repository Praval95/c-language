#include<stdio.h>
int main()
{
    int l,b;
    l = b = 0;
    printf("Enter lenght of rectangle :");
    scanf("%d",&l);
    printf("Enter breath of rectangle :");
    scanf("%d",&b);


    int Area, Perimeter;
    Area= l * b;
    Perimeter = 2 * (l + b);
    printf("Area of rectangle is : %d", Area);
    printf("\nPerimeter of rectangle is : %d\n", Perimeter);
    getch();
    return 0;
}
