#include<stdio.h>
int main()
{
    int numb , evensum , oddsum ;
    numb = evensum = oddsum = 0;
    printf("\nEnter your no.  :");
    for(int i=1 ; i<=10 ; i++)
    {
    scanf("%d",&numb);
    (numb%2==0)? (evensum +=numb):(oddsum +=numb);
    }

    printf("Even sum: %d",evensum);
    printf("\nOdd sum: %d",oddsum);
 return 0;
}
