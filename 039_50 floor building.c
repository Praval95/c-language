#include<stdio.h>
int main(){
    int flo;
    printf("Enter the floor you are intrested in :");
    scanf("%d",&flo);

    if(flo <= 12)
        printf("\nHeyy you have 'Beach view' for your flat\n");
    else if(flo <=50)
        printf("\nHeyy you have 'Forest View' for your flat\n");
    else
        printf("We have only 50 floors");
    getch();
return 0;
}
