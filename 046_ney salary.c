#include<stdio.h>
int main(){
        float bsal , all , ded , gross , net , bonus ;
        int exp;
     printf("Enter your basic salary  :");
     scanf("%f",&bsal);
     printf("Enter your Allowance  :");
     scanf("%f",&all);
     printf("Enter your deductions  :");
     scanf("%f",&ded);
     printf("Enter your exeperience :");
     scanf("%f",&exp);

     gross = bsal + all;
     net = gross - ded;

     if(exp >= 5){
        bonus = net * 3;
     }
     else if (exp >= 3){
        bonus = net * 2;
     }
     else{
        bonus = net;
     }
     printf("gross salary.....:%.2f\n",gross);
     printf("Net salary.......:%.2f\n",net);
     printf("Bonus............:%.2f\n",bonus);
    getch();
return 0;
}
