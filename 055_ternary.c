#include<stdio.h>
int main(){
    int numb ;
    char result;

    printf("Enter an integer :");
    scanf("%d",&numb);

    result = (numb % 2 == 0)? "even" : "odd";

    printf("The entred number is %s",result);

return 0;
}
