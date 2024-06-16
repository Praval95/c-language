#include<stdio.h>
int main()
{
    int cp , sp , pl;
    printf("Enter the Cost price :");
    scanf("%d",&cp);
    printf("Enter the selling price ");
    scanf("%d",&sp);

     pl = sp - cp ;



    if(pl > 0)
        {
        printf("\nHeyy,you have made a profit of Rs.%d\n",pl);
        }
    else if(pl < 0)
        {
        printf("\nOops!,you incurred a loss of Rs.%d\n",pl);
        }
    else
        {
        printf("\nHmmmmm, NO loss...No profit\n",pl);
        }
    getch();
    return 0;
}
