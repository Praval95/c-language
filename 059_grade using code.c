#include<stdio.h>
int main()
{
    char s,a,b,y,f,code;
    s=a=b=y=f=code=0;

    printf("Enter your code :");
    scanf("%c",&code);
    printf("\n--------------");

    switch(code)
    {
      case 's' :
          printf("\nSUPER");
          break;
      case 'a' :
          printf("\nVERY GOOD");
          break;
      case 'b' :
          printf("\nFAIR");
          break;
      case 'y' :
          printf("\nABSENT");
          break;
     case 'f' :
          printf("\nFAIL");
          break;
     default:
        printf("\nInvalid choice. Please select a valid code.\n");
    }

printf("\n");

 return 0 ;
}
