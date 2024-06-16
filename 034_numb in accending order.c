#include<stdio.h>
int main (){
  int x, y, z;

  printf("Input 3 integers: ");
  scanf("%d %d %d", &x, &y, &z);

  printf("\n---------------------------\n");

  printf("Original numbers: %d, %d, %d", x, y, z);

  printf("\nnumbers in asending order: ");

  if (x <= y && y <= z){
    printf("\n%d, %d, %d\n", x, y, z);
  }
  else if(x <= z && z <= y){
        printf("\n%d, %d, %d\n", x, z, y);
    }
    else if(y <= x && x <= z){
        printf("\n%d, %d, %d\n", y, x, z);
      }
      else if(y <= z && z <= x){
         printf("\n%d, %d, %d\n", y, z, x);
        }
        else if(z <= x && x <= y){
            printf("\n%d, %d, %d\n", z, x, y);
          }
          else if(x == y && y == z){
              printf("\n%d, %d, %d\n", x, y, z);
            }
            else{
              printf("\n%d, %d, %d\n", z, y, x);
            }
  getch();
  return 0;
}
