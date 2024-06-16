#include<stdio.h>
int main(){
   int a ,b;
   int diff;
   a ,b , diff = 0;

   printf("Enter the first number :");
   scanf("%d",&a);
   printf("Enter the second number :");
   scanf("%d",&b);

   if (a > b)
     diff = a - b;
   else
     diff = b - a;
   printf("\n Difference between the %d and %d  = %d\n",a,b,diff);
getch();
return 0;
}
