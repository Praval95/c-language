#include<stdio.h>
int main(){
   long long int numb1 , numb2 , numb3 , numb4 ;
    numb1 = numb2 = numb3 = numb4 = 0;

    printf("enter the value of number 1 :");
    scanf("%d",&numb1);
    printf("enter the value of number 2 :");
    scanf("%d",&numb2);
    printf("enter the value of number 3 :");
    scanf("%d",&numb3);
    printf("enter the value of number 4 :");
    scanf("%d",&numb4);

   if (numb1 > numb2 && numb1 > numb3 && numb1 > numb4)
   {
      printf("\n%d is the greatest of four numbers.\n",numb1);
   }
   else if (numb2 > numb3 && numb2 > numb4)
   {
       printf("\n%d is the greatest of four numbers.\n",numb2);
   }
   else if (numb3 > numb4)
   {
       printf("\n%d is the greatest of four numbers.\n",numb3);
   }
   else
   {
       printf("\n%d is the greatest of your numbers.\n",numb4);
   }
   printf("\n");
   getch();
return 0;
}
