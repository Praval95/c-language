#include<stdio.h>
int main(){
     int age;
     char gen , ms ;

     printf("Enter marital status ([M]arried/ [U]nmarried :");
     scanf("%c",&ms);
     printf("Enter your gender ([M]ale/[F]emale):");
     fflush(stdin);
     scanf("%c",&gen);
     printf("Enter your age :");
     scanf("%d",&age);

     if((ms=='M'||ms=='m')||(gen=='M'||gen=='m' && age>=30) || (gen=='F'||gen=='f' && age>=25))
        printf("You are eligible for the bonus, ");
     else
        printf("You are 'NOT' eligible for the bonus.");
printf("\n");

return 0;
}
