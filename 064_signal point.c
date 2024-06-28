#include<stdio.h>
int main()
{
    char sp;
     printf("Enter Your signal point :");
     scanf("%c",&sp);
     printf("--------------");

     switch(sp)
     {
     case 'r' :
        printf("\nRED light Please STOP.");
        break;
     case 'y' :
        printf("\nYELLOW light please check and GO.");
        break;
     case 'g' :
        printf("\nGREEN light please GO.");
        break;
     default:
        printf("\nTHERE IS NO SINGNAL POINT.\n");
     }
printf("\n");

 return 0;
}
