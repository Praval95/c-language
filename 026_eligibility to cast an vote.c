#include<stdio.h>
int main(){
    int age;
    printf("Enter your age :");
    scanf("%d",&age);

    if (age < 18){
        printf("\nSorry, You are not eligible to caste your vote.\n");
        printf("You would be able to caste your vote after %d year.\n",18-age);
    }
    else{
    printf("Congratulation! You are eligible for casting your vote.\n");
    }
   getch();
   return 0;
}
