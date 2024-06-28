#include<stdio.h>
int main()
{
    int x, y , z ;
    printf("Enter any three numbers :");
    scanf("%d %d %d",&x,&y,&z);

    printf("Yours numbers are %d , %d , %d ",x,y,z);
    printf("\n----------------------");

    if(x <= y <= z)
      printf("\nThe given numbers are in ASENDING ORDER");
      else
         if(x > y > z)
          printf("\nThe given numbers are in DESENDING ORDER");
     else
        printf("\nThe numbers are neither acending nor decending order,");
     printf("\n");

 return 0;
}
