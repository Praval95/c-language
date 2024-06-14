#include<stdio.h>
int main(){
  int numb;
  printf("Enter an integer :");
  scanf("%d",&numb);

  if(numb % 2 == 0 )
    printf("%d is an 'EVEN' number",numb);
  else
    printf("%d is 'ODD' numb",numb);
  if(numb = 0)
    printf("%d NOT DEFINED",numb);
 printf("\n");
 getch();
 return 0;
}

