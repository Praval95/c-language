#include<stdio.h>
int main(){
  long long int numb;

  printf("Enter an number :");
  scanf("%d",&numb);

  if(numb >= 0)
    printf("%d is a positive number :",numb);
  else if(numb < 0)
    printf("%d is negetive number.",numb);
  printf("\n");
  getch();
  return 0;

}
