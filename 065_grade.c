#include<stdio.h>
int main()
{
    char grade;
    printf("GRADE       DESCRIPTION");
    printf("\n-----       -----------");
    printf("\nE           excellent  ");
    printf("\nV           very good  ");
    printf("\nG           good       ");
    printf("\nA           average    ");
    printf("\nF           fail       ");
    printf("\n-----------------------");
    printf("\nEnter your grade :");
    scanf("%c",&grade);

    switch(grade)
    {
    case 'e' :
        printf("You have done excellent.");
        break;
    case 'v' :
        printf("You have done very good.");
        break;
    case 'g' :
        printf("You have done good.");
        break;
    case 'a' :
        printf("You have done average.");
        break;
    case 'f' :
        printf("You fail in the exam.");
        break;
    default:
        printf("\n\ainvalied grade,");
        printf("Enter a valide grade.");
    }
    printf("\n");
  return 0;
}
