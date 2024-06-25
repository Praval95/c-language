#include<stdio.h>
int main()
{
    int numb1 , numb2 , ans ;
    char op;
    numb1 = numb2 = op = ans = 0;

    printf("Enter a number           :");
    scanf("%d",&numb1);
    printf("Enter a  another number  :");
    scanf("%d",&numb2);
    printf("\n--------------------");
    printf("\nEnter an operator (+ , - , * , /):");
    scanf(" %c",&op);

    printf("\n--------------------");

    switch(op)
    {
       case '+' :
           ans = numb1 + numb2 ;
           break;
       case '-' :
           ans = numb1 - numb2;
           break;
       case '*' :
           ans = numb1 * numb2;
           break;
       case '/' :
           if (numb2 != 0)
            {
                ans = numb1 / numb2;
            }
             else
            {
                printf("Error: Division by zero!\n");
                return;
            }
              break;
                default:
                printf("\n\aInvalid choice.\n");
             return;
    }
    printf("\nans : %d %c %d = %d\n",numb1,op,numb2,ans);
 return 0;
}
