#include<stdio.h>
int main()
{
    float hfe , hcm  ;
    printf("Enter the height of the person in 'feet' :");
    scanf("%f",&hcm);

   hfe  = hcm * 30.48;

   if(hcm > 5.5 * 30.48)
   {
       printf("\nThe person is taller and the height of the person is %.2f",hfe);
   }
     else
        if(hcm < 4.5 * 30.48)
     {
         printf("\nThe person is 'dwarf' and the height of the person is %.2f",hfe);
     }
     else
     {
        printf("\nThe average height of the person is %.2f.",hfe);
     }



return 0;
}
