#include<stdio.h>
 int main(){

    int english , sanskrit , maths , physics , chemistry;
    float total_marks , avg_marks;

       english = sanskrit = maths = physics = chemistry = total_marks = avg_marks = 0;

  printf("Enter Marks of english......:");
  scanf("%d",&english);

  printf("Enter Marks of sanskrit......: ");
  scanf("%d",&sanskrit);

  printf("Enter Marks of maths......: ");
  scanf("%d",&maths);

  printf("Enter Marks of physics......: ");
  scanf("%d",&physics);

  printf("Enter Marks of chemistry......: ");
  scanf("%d",&  chemistry);

  total_marks = english + sanskrit + maths + physics + chemistry;
  avg_marks = total_marks/5;

   printf("\nTotal Marks of the student Is......:%.0f",total_marks);
   printf("\nAvg Marks of the student Is......:%.2f%%",avg_marks);


printf("\n");

  return 0;

 }
