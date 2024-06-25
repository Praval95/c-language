#include<stdio.h>
int main(){
      int age;
      char gen;


      printf("Enter you gender ([M]ale/[F]emale :");
      scanf("%c",&gen);

      printf("Enter your age :");
      scanf("%d",&age);

      if(age<5)
        printf("Full concession given under 5 years(no ticket is required)");
      else
          if(gen=='M'||gen=='m')
           if(age >= 60)
             printf("you can have a concession of 50 persentage.");
           else
             printf("You are 'NOT' getting any concession");

          else
             if(gen=='F'||gen=='f')
               if(age>=50)
                printf("you can have a concession of 50%");
             else
                printf("You are 'NOT' getting any concession");
       else
        printf("\aInvalide gender");


return 0;
}
