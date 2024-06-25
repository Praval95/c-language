#include<stdio.h>
int main()
{
     int price , dis , billamt ,day , ext;
     char mode;
     price = dis = billamt = day = ext = mode =0;
     printf("Enter the price of TV :");
     scanf("%d",&price);

     printf("Enter your mode of payment (y)cash/(n)credit  :");
     fflush(stdin);
     scanf("%c",&mode);

     if(mode=='y'||mode=='Y')
     {
         dis = price * 25/100;
         billamt = price - dis;
     }
     else
        if(mode=='n'||mode=='N')
           {
               printf("In how many days are going to play :");
               scanf("%d",&day);

          if(day<=7)
              {
                dis = price * 15/100;
                billamt = price - dis;
              }
            else
              {
                ext = price *10/100;
                billamt = price + ext;
              }

         }
        else
        {
            printf("\aInvalaid mode entred");
            return;
        }
     printf("\ndiscount is ..........:%d%%",dis);

     printf("\nextra amount is ......:%d",ext);

     printf("\nfinal bill amount is..:%d",billamt);

     printf("\n");
return 0;
}
