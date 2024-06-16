#include<stdio.h>
int main(){
     char f1[20] , f2[20];
     int age1 , age2;
     printf("Enter name of the 1st person :");
     scanf("%s",&f1);
     printf("Enter name of the 2nd person :");
     scanf("%s",&f2);
     printf("Enter age of 1st person :");
     scanf("%d",&age1);
     printf("Enter age of 2nd person :");
     scanf("%d",&age2);
     printf("\n");

     if(age1 > age2)
        printf("%s is older than %s ",f1,f2);
     else if(age1 < age2)
        printf("%s is older than %s",f2,f1);
     else
        printf("both are at same age");
     getch ();
     printf("\n");


return 0;
}
