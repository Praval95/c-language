#include<stdio.h>
int main()
{
   int temp;
   printf("Enter the temperature in centigrade");
   scanf("%d",&temp);

   if(temp < 0){
    printf("\nFreezing weather.\n");
   }
   else if(temp < 10){
    printf("\nVery cold weather.\n");
   }
   else if(temp < 20){
    printf("\ncold weather.\n");
   }
   else if(temp < 30){
    printf("\nNormal weather.\n");
   }
   else if(temp < 40){
    printf("\nIts Hot weather.\n");
   }
   else{
    printf("\nIts Very Hot weather.\n");
   }
  getch();
  return 0;
}


